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
	/// —водка дл€ uiButton
	/// </summary>
	public ref class uiButton : public System::Windows::Forms::UserControl
	{
	public:
		uiButton(void)
		{
			uiCostructor();
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		void uiCostructor();

		
	public:
		property int   BorderRadius;
		property Color ColorLeaveBack;
		property Color ColorLeaveBord;
		property Color ColorLeaveText;
		property Color ColorEnterBack;
		property Color ColorEnterBord;
		property Color ColorEnterText;
		

	private:
		StringFormat^ SF = gcnew StringFormat;		
		int UICompState;

	

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// uiButton
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"uiButton";

			this->BorderRadius   = 5;
			this->Text = L"SampleText";
			this->ColorEnterBord = Color::Black;
			this->ColorEnterBack = Color::Black;
			this->ColorEnterText = Color::White;
			this->ColorLeaveBord = Color::Tomato;
			this->ColorLeaveBack = Color::Tomato;
			this->ColorLeaveText = Color::White;

			this->Size = System::Drawing::Size(100, 30);
			this->Load += gcnew System::EventHandler(this, &uiButton::uiButton_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiButton::uiButton_Paint);
			this->MouseEnter += gcnew System::EventHandler(this, &uiButton::uiButton_MouseEnter);
			this->MouseLeave += gcnew System::EventHandler(this, &uiButton::uiButton_MouseLeave);
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
			
			g->SmoothingMode  = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);				


			int r = BorderRadius;

			switch (UICompState) {
			case CS_LEAVE:
				if (r == 0) {
					g->DrawRectangle(lbdPen, 0, 0, w, h);
					g->FillRectangle(lbkBrush, 0, 0, w, h);
				} else {
					Drawing2D::GraphicsPath^ gp = gcnew Drawing2D::GraphicsPath();

					//g->DrawLine(lbdPen, r, 0, w - r, 0); g->DrawArc(lbdPen, w - r * 2, 0, r * 2, h, -90,  180);
					//g->DrawLine(lbdPen, r, h, w - r, h); g->DrawArc(lbdPen, 0,         0, r * 2, h, -90, -180);

					g->DrawLine(lbdPen, r, 0, w-r, 0); 
					g->DrawArc(lbdPen, w-r*2, 0, r*2, r*2, 270, 90);
					g->DrawLine(lbdPen, w, r, w, h-r); 
					g->DrawArc(lbdPen, w-r*2, h-r*2, r * 2, r * 2, 360, 90);
					g->DrawLine(lbdPen, w - r, h, r, h);
					g->DrawArc(lbdPen, 0, h-r*2, r*2, r*2, 90, 90);
					g->DrawLine(lbdPen, 0, h - r, 0, r);
					g->DrawArc(lbdPen, 0, 0, r*2, r*2, 180, 90);

					//g->DrawClosedCurve();

					//gp->CloseFigure();

				}
				


				
				g->DrawString(Text, Font, ltxBrush, (int)(w / 2), (int)(h / 2), SF);
			break;
			case CS_ENTER:
				g->DrawRectangle(ebdPen, 0, 0, w, h);
				g->FillRectangle(ebkBrush, 0, 0, w, h);
				g->DrawString(Text, Font, etxBrush, (int)(w / 2), (int)(h / 2), SF);
			break;
			}
		}
		System::Void uiButton_MouseEnter(System::Object^ sender, System::EventArgs^ e) { UICompState = CS_ENTER; Invalidate(); }
		System::Void uiButton_MouseLeave(System::Object^ sender, System::EventArgs^ e) { UICompState = CS_LEAVE; Invalidate(); }
	};
}


