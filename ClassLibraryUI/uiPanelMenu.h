#pragma once

#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace System::Threading;


namespace ClassLibraryUI {

	
	public ref class uiPanelMenu : public System::Windows::Forms::UserControl
	{
	public:
		uiPanelMenu(void)
		{
			uiCostructor();
			InitializeComponent();
		}
		void uiCostructor();

	public:
		bool			 MenuOpen;
		property int     WidthStart;
		property int     HeightStart;
		property int     WidthFinal;
		property int     HeightFinal;

		property int     BorderRadius;
		property String^ Caption;
		property Color   ColorLeaveBack;
		property Color   ColorLeaveBord;
		property Color   ColorLeaveText;

	private:
		Thread^ AnimThread;



#pragma region DESTR
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~uiPanelMenu()
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
#pragma endregion DESTR

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// uiPanelMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"uiPanelMenu";
			this->Size = System::Drawing::Size(10, 10);
			this->Load += gcnew System::EventHandler(this, &uiPanelMenu::uiPanelMenu_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiPanelMenu::uiPanelMenu_Paint);
			this->MouseEnter += gcnew System::EventHandler(this, &uiPanelMenu::uiPanelMenu_MouseEnter);
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region VOIDS
	private: 
		System::Void uiPanelMenu_Load(System::Object^ sender, System::EventArgs^ e) {
			//
		}
		System::Void uiPanelMenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;

			int w = Width - 1, h = Height - 1;
			int r = BorderRadius;

			Pen^	 lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);
			g->DrawRectangle(lbdPen, 0, 0, w, h);
			g->FillRectangle(lbkBrush, 0, 0, w, h);
	


			//Width  = (MenuOpen ? WidthFinal  : WidthStart );
			//Height = (MenuOpen ? HeightFinal : HeightStart);

			if (MenuOpen) {
				if (Width <= WidthFinal) Width += WidthFinal / 16;
				if (Height <= HeightFinal) Height += HeightFinal / 16;
			}
			else {
				if (Width >= WidthStart) Width -= WidthFinal / 16;
				if (Height >= HeightStart) Height -= HeightFinal / 16;
			}

			Thread::Sleep(5);

			//g->DrawString(Text, Font, ltxBrush, (int)(w / 2), (int)(h / 2));
			
		}

		System::Void uiPanelMenu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			//MenuOpen = true;
			std::cout << "\tuiPanelMenu_MouseEnter\n";

			

			Invalidate();


		}

#pragma endregion VOIDS

	
	
	};
}
