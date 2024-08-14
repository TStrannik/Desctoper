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

	BackColor = Color::Tomato;
	ForeColor = Color::White;

	SF->Alignment	  = StringAlignment::Center;
	SF->LineAlignment = StringAlignment::Center;


	
}