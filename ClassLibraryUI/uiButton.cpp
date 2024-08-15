#include "pch.h"
#include "uiButton.h"

using namespace ClassLibraryUI;

void uiButton::uiCostructor() {
	//System::Drawing::Size^ Size = System::Drawing::Size(30, 100); //C# Size = new Size(100, 30);

	SetStyle(
		ControlStyles::AllPaintingInWmPaint |
		ControlStyles::OptimizedDoubleBuffer |
		ControlStyles::ResizeRedraw |
		ControlStyles::SupportsTransparentBackColor |
		ControlStyles::UserPaint, true
	);
	DoubleBuffered = true;

	BackColor = Color::Black;
	ForeColor = Color::White;

	SF->Alignment	  = StringAlignment::Center;
	SF->LineAlignment = StringAlignment::Center;

	Font = (gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold));

	Text = L"SampleText";
	Caption = L"SampleText";
	BorderRadius = 10;
	ColorLeaveBord = Color::Tomato;
	ColorLeaveBack = Color::Transparent;
	ColorLeaveText = Color::Tomato;

	ColorEnterBord = Color::White;
	ColorEnterBack = Color::Tomato;
	ColorEnterText = Color::White;
	
}