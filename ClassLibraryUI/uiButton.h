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
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;		// :None;
			this->Name = L"uiButton";
			this->Text = L"uiButton";
			this->Size = System::Drawing::Size(100, 30);
			this->Font = gcnew System::Drawing::Font("Arial", 8, FontStyle::Italic);
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

		Graphics^ g		 = e->Graphics;
		g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
		g->Clear(Parent->BackColor);												// Color::Black)
		Pen^	   pen   = gcnew Pen(BackColor);
		Brush^     brush = gcnew SolidBrush(BackColor);
		RectangleF^ rect  = gcnew RectangleF(0.0f, 0.0f, Width - 1, Height - 1);
		//g->DrawRectangle(pen, rect);
		g->DrawRectangle(pen, 0, 0, Width - 1, Height - 1);							// (pen, 0, 0, rect);
		g->FillRectangle(brush, 0, 0, Width - 1, Height - 1);


		int w = Width - 1;
		int h = Height - 1;

		//System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Arial", 20, FontStyle::Bold);

		//g->DrawString(Text, Font, gcnew SolidBrush(ForeColor), rect, SF);


		//std::cout << Text << std::endl;

		g->DrawString(Text, Font, gcnew SolidBrush(ForeColor), 0, 0, SF);

		/*g->DrawString(
			this->Text,
			this->Font,
			gcnew SolidBrush(ForeColor),
			gcnew Rectangle(0, 0, Width - 1, Height - 1),
			SF
		);*/
		
	}

	};

	

}


