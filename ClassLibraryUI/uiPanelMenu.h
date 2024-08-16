#pragma once


#include <iostream>


const int stFinal = 0;
const int stStart = 1;
const int stInter = 2;

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

		
		int stateAnim;

	private:
		Thread^ AnimThread;
		StringFormat^ SF = gcnew StringFormat;

		
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
		System::Void uiPanelMenu_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			//std::cout << "\tPanelMenu_Paint\n";

			Text = Caption;

			int w = Width - 1, h = Height - 1;
			int r = BorderRadius;


			Graphics^	  g = e->Graphics;
			Pen^	 lbdPen = gcnew Pen(ColorLeaveBord);
			Brush^ lbkBrush = gcnew SolidBrush(ColorLeaveBack);
			Brush^ ltxBrush = gcnew SolidBrush(ColorLeaveText);

			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::HighQuality;	// :AntiAlias;
			g->Clear(Parent->BackColor);

			if (r == 0) {
				g->DrawRectangle(lbdPen, 0, 0, w, h);
				g->FillRectangle(lbkBrush, 0, 0, w, h);
			}
			else {
				Drawing2D::GraphicsPath^ gp = gcnew Drawing2D::GraphicsPath();

				g->DrawLine(lbdPen, 0, 0, w - r, 0); g->DrawArc(lbdPen, w - r * 2, 0, r * 2, r * 2, 270, 90);
				g->DrawLine(lbdPen, w, r, w, h - r); g->DrawArc(lbdPen, w - r * 2, h - r * 2, r * 2, r * 2, 360, 90);
				g->DrawLine(lbdPen, w - r, h, 0, h); 
				g->DrawLine(lbdPen, 0, h - r, 0, 0); 

				gp->AddLine(0, 0, w - r, 0);		gp->AddArc(w - r * 2, 0, r * 2, r * 2, 270, 90);
				gp->AddLine(w, r, w, h - r);		gp->AddArc(w - r * 2, h - r * 2, r * 2, r * 2, 360, 90);
				gp->AddLine(w - r, h, 0, h);		
				gp->AddLine(0, h - r, 0, 0);		
				gp->CloseFigure();

				g->FillPath(lbkBrush, gp);
			}


			if (mrazota) {

				// TODO:	calculate step of incr/decr
				if (!MenuOpen) { Width > WidthStart ? Width -= 20 : Hide(); }
				else		   { Width < WidthFinal ? Width += 20 : false;  }
				//Thread::Sleep(2);
			}


			// TODO: on the end of painting
			g->DrawString(Text, Font, ltxBrush, (int)(w / 2), 5 + Font->Size, SF);
			
			




			/*if		(Width == WidthStart) stateAnim = stStart;
			else if (Width == WidthFinal) stateAnim = stFinal;
			else						  stateAnim = stInter;*/
		}

		System::Void uiPanelMenu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {  }

#pragma endregion VOIDS
	


		


	
	};


}
