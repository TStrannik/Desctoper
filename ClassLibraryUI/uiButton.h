#pragma once

#include <iostream>

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

		
		// property int Radius;
		property int Nejnost;


	

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

		StringFormat^ SF = gcnew StringFormat;

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
			this->Text = L"SampleText";
			this->Size = System::Drawing::Size(100, 30);
			this->Load += gcnew System::EventHandler(this, &uiButton::uiButton_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiButton::uiButton_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void uiButton_Load(System::Object^ sender, System::EventArgs^ e) {
		//
	}

	private: System::Void uiButton_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//this->OnPaint(e);

		Graphics^ g		  = e->Graphics;

		int w = Width - 1, h = Height - 1;
		Pen^	   pen	  = gcnew Pen(BackColor);
		Brush^	   bBrush = gcnew SolidBrush(BackColor);
		Brush^     fBrush = gcnew SolidBrush(ForeColor);
		Rectangle^ rect   = gcnew Rectangle(0, 0, w, h);

		g->SmoothingMode  = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
		g->Clear(Parent->BackColor);				
		g->DrawRectangle(pen, 0, 0, w, h);							// (pen, 0, 0, rect);
		g->FillRectangle(bBrush, 0, 0, w, h);
		g->DrawString(Text, Font, fBrush, (int)w / 2, (int)h / 2, SF);		// Ќе раб rect
		
		
	}

	};

	

}


