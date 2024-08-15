#include "pch.h"
#include "uiPanelMenu.h"

using namespace ClassLibraryUI;


void uiPanelMenu::uiCostructor() {
	System::Drawing::Size^ Size = System::Drawing::Size(40, 300); //C# Size = new Size(100, 30);

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

	BackColor = Color::Blue;
	ForeColor = Color::White;

	BorderRadius = 10;
	ColorLeaveBord = Color::Black;
	ColorLeaveBack = Color::White;
	ColorLeaveText = Color::Black;

	/*ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;*/

	Text = L"Caption";
	Caption = L"Caption";

	Width = 20;
	Height = 300;

	MenuOpen     = true;
	WidthStart   = 20;
	HeightStart  = 300;
	WidthFinal	 = 400;
	HeightFinal  = 300;
}


bool uiPanelMenu::Toggle() {
	MenuOpen = !MenuOpen;
	Refresh();
	Visible = true;

	return MenuOpen;
}

bool uiPanelMenu::HideMenu() {
	//Width = 20;
	MenuOpen = false;
	Refresh();

	return true;
}