#pragma once


#include <iostream>


const int stFinal = 0x00;
const int stStart = 0x01;
const int stInter = 0x02;

//typedef enum : char { Simple, Expansion } typeAnim;
//typedef enum typeAnim : int { Simple = 0, Expansion = 1 };


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace System::Threading;


namespace ClassLibraryUI {

	
	//public ref class uiPanelMenu : public System::Windows::Forms::UserControl
	public ref class uiPanelMenu : public System::Windows::Forms::Panel
	{
	public:
		uiPanelMenu(void)
		{
			uiCostructor();
			InitializeComponent();
		}
		void uiCostructor();
		bool Toggle();
		bool HideMenu();
		bool OpenMenu();


		//typedef enum { Simple, Expansion } typeAnim;		

	public:
		//property typeAnim AnimType;
		property bool mrazota;

		property int     BorderRadius;
		property String^ Caption;

		property bool	 MenuOpen;
		property int     WidthStart;
		property int     HeightStart;
		property int     WidthFinal;
		property int     HeightFinal;

		property Color   ColorLeaveBack;
		property Color   ColorLeaveBord;
		property Color   ColorLeaveText;

		

	private:
		Thread^ AnimThread;
		StringFormat^ SF = gcnew StringFormat;

		int stateAnim;
		bool rev;


	// Built in manually
	private: 
		System::
			Windows::
				Forms::
					Panel^
						panel1;
					//
				//
			//
		//
	//



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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(400, 100);
			this->panel1->TabIndex = 0;
			// 
			// uiPanelMenu
			// 
			this->Size = System::Drawing::Size(400, 300);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &uiPanelMenu::uiPanelMenu_Paint);
			this->MouseEnter += gcnew System::EventHandler(this, &uiPanelMenu::uiPanelMenu_MouseEnter);
			this->ResumeLayout(false);

		}
#pragma endregion

#pragma region VOIDS
	private: 
		/*System::Void uiPanelMenu_Load(System::Object^ sender, System::EventArgs^ e) {
			Text = Caption;
		}*/

		System::Void uiPanelMenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			
			std::cout << "\tPaint\n";
			
			Text = Caption;


			int w = Width - 1, h = Height - 1;
			int r = BorderRadius;


			Graphics^	  g = e->Graphics;
			Pen^	 lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);

			g->DrawRectangle(lbdPen, 0, 0, w, h);
			g->FillRectangle(lbkBrush, 0, 0, w, h);
	

			g->DrawString(Text, Font, ltxBrush, (int)(w / 2), 5 + Font->Size, SF);


			//	if		(Width == WidthFinal) stateAnim = stFinal;
			//	else if (Width == WidthStart) stateAnim = stStart;
			//	else						  stateAnim = stInter;
			//		if (Width <= WidthFinal) Width += 40;
			//		if (Width >= WidthStart) Width -= 40;
			//Thread::Sleep(5);

			//	g->DrawString(Text, Font, ltxBrush, (int)(w / 2), 5 + Font->Size, SF);
			
			
		}

		System::Void uiPanelMenu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {  }

#pragma endregion VOIDS
	


		


	
	};

	bool uiPanelMenu::Toggle() {
		MenuOpen = !MenuOpen;

		if (!mrazota) MenuOpen ? Show() : Hide();


		Invalidate();
		return MenuOpen;
	}


}
