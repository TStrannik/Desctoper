#pragma once

#include <iostream>
#include <vector>



const int CS_LEAVE = 0x00;
const int CS_ENTER = 0x01;
const int CS_HOVER = 0x02;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ClassLibraryUI {

	/// <summary>
	/// ������ ��� uiButton
	/// </summary>
	public ref class uiButton : public System::Windows::Forms::UserControl
	{
	public:
		uiButton(void)
		{
			uiCostructor();
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

		void uiCostructor();

		
	public:
		//property String Caption;
		property int    BorderRadius;
		property Color  ColorLeaveBack;
		property Color  ColorLeaveBord;
		property Color  ColorLeaveText;
		property Color  ColorEnterBack;
		property Color  ColorEnterBord;
		property Color  ColorEnterText;
		

	private:
		StringFormat^ SF = gcnew StringFormat;		
		int UICompState;

	

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~uiButton()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// uiButton
			// 
			this->Name = L"uiButton";
			this->Load += gcnew System::EventHandler(this, &uiButton::uiButton_Load_1);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void uiButton_Load(System::Object^ sender, System::EventArgs^ e) {
			UICompState = CS_LEAVE;
		}
		System::Void uiButton_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g		  = e->Graphics;

			int w = Width - 1, h = Height - 1;
			
			Pen^   ebdPen   = gcnew Pen  	  (ColorEnterBord);
			Brush^ ebkBrush = gcnew SolidBrush(ColorEnterBack);
			Brush^ etxBrush = gcnew SolidBrush(ColorEnterText);
			
			Pen^   lbdPen   = gcnew Pen  	  (ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			Pen^	 bdPen = gcnew Pen(ForeColor);
			Brush^ bkBrush = gcnew SolidBrush(BackColor);
			Brush^ txBrush = gcnew SolidBrush(BackColor);
			
			g->SmoothingMode  = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);				


			int r = BorderRadius;


			//// DRY!!!!

			//// Text!!!!


			switch (UICompState) {
			case CS_LEAVE:
				bdPen = lbdPen; bkBrush = lbkBrush; txBrush = ltxBrush;
			break;
			case CS_ENTER:
				bdPen = ebdPen; bkBrush = ebkBrush; txBrush = etxBrush;
			break;
			}

			if (r == 0) {
				g->DrawRectangle(bdPen, 0, 0, w, h);
				g->FillRectangle(bkBrush, 0, 0, w, h);
			} else {
				Drawing2D::GraphicsPath^ gp = gcnew Drawing2D::GraphicsPath();

				g->DrawLine(bdPen, r, 0, w - r, 0);
				g->DrawArc(bdPen, w - r * 2, 0, r * 2, r * 2, 270, 90);
				g->DrawLine(bdPen, w, r, w, h - r);
				g->DrawArc(bdPen, w - r * 2, h - r * 2, r * 2, r * 2, 360, 90);
				g->DrawLine(bdPen, w - r, h, r, h);
				g->DrawArc(bdPen, 0, h - r * 2, r * 2, r * 2, 90, 90);
				g->DrawLine(bdPen, 0, h - r, 0, r);
				g->DrawArc(bdPen, 0, 0, r * 2, r * 2, 180, 90);

				gp->AddLine(r, 0, w - r, 0);
				gp->AddArc(w - r * 2, 0, r * 2, r * 2, 270, 90);
				gp->AddLine(w, r, w, h - r);
				gp->AddArc(w - r * 2, h - r * 2, r * 2, r * 2, 360, 90);
				gp->AddLine(w - r, h, r, h);
				gp->AddArc(0, h - r * 2, r * 2, r * 2, 90, 90);
				gp->AddLine(0, h - r, 0, r);
				gp->AddArc(0, 0, r * 2, r * 2, 180, 90);
				gp->CloseFigure();

				g->FillPath(bkBrush, gp);
			}
			g->DrawString(Text, Font, txBrush, (int)(w / 2), (int)(h / 2), SF);

		}
		System::Void uiButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) { UICompState = CS_ENTER; Invalidate(); }
		System::Void uiButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) { UICompState = CS_LEAVE; Invalidate(); }
	private: System::Void uiButton_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
};
}


