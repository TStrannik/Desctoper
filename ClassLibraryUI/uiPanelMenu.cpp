#include "pch.h"
#include "uiPanelMenu.h"

using namespace ClassLibraryUI;


void uiPanelMenu::uiCostructor() {
	System::Drawing::Size^ Size = System::Drawing::Size(400, 300); //C# Size = new Size(100, 30);

	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;


	SF->Alignment = StringAlignment::Center;
	SF->LineAlignment = StringAlignment::Center;

	Font = (gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold));

	BorderRadius = 10;
	ColorLeaveBord = Color::Black;
	ColorLeaveBack = Color::White;
	ColorLeaveText = Color::Black;

	/*ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;*/

	BackColor = ColorLeaveBack;
	ForeColor = ColorLeaveText;

	Text = L"Header";
	Caption = L"Header";

	/*Text = (Name);
	Caption = Text;*/

	Width = 400; Height = 300;

	WidthStart   = 20;  HeightStart  = 300;
	WidthFinal	 = 400; HeightFinal  = 300;


	Visible = true;
	MenuOpen = true;
	stateAnim = MenuOpen ? stStart : stFinal;


	//AnimType = Expansion;
	mrazota = false;

}

//bool uiPanelMenu::Toggle()   { 
//	MenuOpen = !MenuOpen; 
//	Invalidate(); 
//	return MenuOpen;
//}



bool uiPanelMenu::HideMenu() { MenuOpen = false;	 Invalidate(); return true; }
bool uiPanelMenu::OpenMenu() { MenuOpen = true;		 Invalidate(); return true; }
bool uiPanelMenu::Toggle() {
	MenuOpen = !MenuOpen;
	Show();
	if (!mrazota) MenuOpen ? Show() : Hide();
	Invalidate();
	return MenuOpen;
}