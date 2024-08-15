#include "pch.h"
#include "uiPanelMenu.h"

using namespace ClassLibraryUI;

void uiPanelMenu::uiCostructor() {
	//System::Drawing::Size^ Size = System::Drawing::Size(30, 100); //C# Size = new Size(100, 30);

	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;

	//BackColor = Color::Transparent;
	/*BackColor = Color::LavenderBlush;*/
	BackColor = Color::Blue;
	ForeColor = Color::White;

	BorderRadius = 10;
	ColorLeaveBord = Color::Tomato;
	ColorLeaveBack = Color::Transparent;
	ColorLeaveText = Color::Tomato;

	/*ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;*/

	MenuOpen     = false;
	WidthStart   = 10;
	HeightStart  = 10;
	WidthFinal	 = 400;
	HeightFinal  = 300;

}