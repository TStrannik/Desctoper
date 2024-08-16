#include <iostream>
#include <Windows.h>
#include <string>
//#include <fstream>

const int DT_POS_LEFT   = 0x00;
const int DT_POS_RIGHT  = 0x01;
const int DT_POS_MIDDLE = 0x02;

const int CS_LEAVE		= 0x00;
const int CS_ENTER		= 0x01;
const int CS_HOVER		= 0x02;

#pragma once


namespace Desctoper {



	#pragma	region USING etc

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ tmrDisplayRequired;


	private: System::Windows::Forms::Label^ lblCurrentTime;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::PictureBox^ pbxClose;


	private: System::Windows::Forms::Timer^ tmrTime;
	private: System::Windows::Forms::PictureBox^ pbxFile;
	private: System::Windows::Forms::OpenFileDialog^ ofdBack;
	private: System::Windows::Forms::PictureBox^ pbxSetting;

	private: ClassLibraryUI::uiButton^ uiBtnApply;
	private: ClassLibraryUI::uiPanelMenu^ uiPanelMenu1;




























































  private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
	#pragma	endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->tmrDisplayRequired = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblCurrentTime = (gcnew System::Windows::Forms::Label());
			this->tmrTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pbxClose = (gcnew System::Windows::Forms::PictureBox());
			this->pbxFile = (gcnew System::Windows::Forms::PictureBox());
			this->ofdBack = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pbxSetting = (gcnew System::Windows::Forms::PictureBox());
			this->uiBtnApply = (gcnew ClassLibraryUI::uiButton());
			this->uiPanelMenu1 = (gcnew ClassLibraryUI::uiPanelMenu());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxFile))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxSetting))->BeginInit();
			this->SuspendLayout();
			// 
			// tmrDisplayRequired
			// 
			this->tmrDisplayRequired->Enabled = true;
			this->tmrDisplayRequired->Interval = 50000;
			this->tmrDisplayRequired->Tick += gcnew System::EventHandler(this, &frmMain::tmrDisplayRequired_Tick);
			// 
			// lblCurrentTime
			// 
			this->lblCurrentTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblCurrentTime->AutoSize = true;
			this->lblCurrentTime->BackColor = System::Drawing::Color::Transparent;
			this->lblCurrentTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCurrentTime->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblCurrentTime->Location = System::Drawing::Point(9, 506);
			this->lblCurrentTime->Name = L"lblCurrentTime";
			this->lblCurrentTime->Size = System::Drawing::Size(220, 55);
			this->lblCurrentTime->TabIndex = 1;
			this->lblCurrentTime->Text = L"00:00:00";
			this->lblCurrentTime->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblCurrentTime->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::lblCurrentTime_MouseDoubleClick);
			this->lblCurrentTime->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::lblCurrentTime_MouseDown);
			this->lblCurrentTime->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::lblCurrentTime_MouseMove);
			this->lblCurrentTime->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::lblCurrentTime_MouseUp);
			// 
			// tmrTime
			// 
			this->tmrTime->Enabled = true;
			this->tmrTime->Tick += gcnew System::EventHandler(this, &frmMain::tmrTime_Tick);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Marlett", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(984, 0);
			this->button1->Margin = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 50);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 381);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 394);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(18, 407);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// pbxClose
			// 
			this->pbxClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pbxClose->BackColor = System::Drawing::Color::Transparent;
			this->pbxClose->Location = System::Drawing::Point(1093, 0);
			this->pbxClose->Name = L"pbxClose";
			this->pbxClose->Size = System::Drawing::Size(50, 50);
			this->pbxClose->TabIndex = 8;
			this->pbxClose->TabStop = false;
			this->pbxClose->Click += gcnew System::EventHandler(this, &frmMain::pbxClose_Click);
			this->pbxClose->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pbxClose_Paint);
			this->pbxClose->MouseEnter += gcnew System::EventHandler(this, &frmMain::pbxClose_MouseEnter);
			this->pbxClose->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbxClose_MouseLeave);
			// 
			// pbxFile
			// 
			this->pbxFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pbxFile->BackColor = System::Drawing::Color::Transparent;
			this->pbxFile->Location = System::Drawing::Point(1037, 0);
			this->pbxFile->Name = L"pbxFile";
			this->pbxFile->Size = System::Drawing::Size(50, 50);
			this->pbxFile->TabIndex = 9;
			this->pbxFile->TabStop = false;
			this->pbxFile->Click += gcnew System::EventHandler(this, &frmMain::pbxFile_Click);
			this->pbxFile->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pbxFile_Paint);
			this->pbxFile->MouseEnter += gcnew System::EventHandler(this, &frmMain::pbxFile_MouseEnter);
			this->pbxFile->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbxFile_MouseLeave);
			// 
			// pbxSetting
			// 
			this->pbxSetting->BackColor = System::Drawing::Color::Transparent;
			this->pbxSetting->Location = System::Drawing::Point(0, 0);
			this->pbxSetting->Name = L"pbxSetting";
			this->pbxSetting->Size = System::Drawing::Size(50, 50);
			this->pbxSetting->TabIndex = 10;
			this->pbxSetting->TabStop = false;
			this->pbxSetting->Click += gcnew System::EventHandler(this, &frmMain::pbxSetting_Click);
			this->pbxSetting->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pbxSetting_Paint);
			this->pbxSetting->MouseEnter += gcnew System::EventHandler(this, &frmMain::pbxSetting_MouseEnter);
			this->pbxSetting->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbxSetting_MouseLeave);
			// 
			// uiBtnApply
			// 
			this->uiBtnApply->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->uiBtnApply->BackColor = System::Drawing::Color::Black;
			this->uiBtnApply->BorderRadius = 10;
			this->uiBtnApply->Caption = L"SampleText";
			this->uiBtnApply->ColorEnterBack = System::Drawing::Color::Black;
			this->uiBtnApply->ColorEnterBord = System::Drawing::Color::White;
			this->uiBtnApply->ColorEnterText = System::Drawing::Color::White;
			this->uiBtnApply->ColorLeaveBack = System::Drawing::Color::Transparent;
			this->uiBtnApply->ColorLeaveBord = System::Drawing::Color::Black;
			this->uiBtnApply->ColorLeaveText = System::Drawing::Color::Black;
			this->uiBtnApply->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->uiBtnApply->ForeColor = System::Drawing::Color::White;
			this->uiBtnApply->Location = System::Drawing::Point(1030, 528);
			this->uiBtnApply->Name = L"uiBtnApply";
			this->uiBtnApply->Size = System::Drawing::Size(100, 30);
			this->uiBtnApply->TabIndex = 0;
			this->uiBtnApply->Text = L"Apply";
			this->uiBtnApply->UseVisualStyleBackColor = false;
			// 
			// uiPanelMenu1
			// 
			this->uiPanelMenu1->BackColor = System::Drawing::Color::White;
			this->uiPanelMenu1->BorderRadius = 10;
			this->uiPanelMenu1->Caption = L"Header";
			this->uiPanelMenu1->ColorLeaveBack = System::Drawing::Color::White;
			this->uiPanelMenu1->ColorLeaveBord = System::Drawing::Color::Black;
			this->uiPanelMenu1->ColorLeaveText = System::Drawing::Color::Black;
			this->uiPanelMenu1->Font = (gcnew System::Drawing::Font(L"Arial", 10, System::Drawing::FontStyle::Bold));
			this->uiPanelMenu1->ForeColor = System::Drawing::Color::Black;
			this->uiPanelMenu1->HeightFinal = 300;
			this->uiPanelMenu1->HeightStart = 300;
			this->uiPanelMenu1->Location = System::Drawing::Point(0, 56);
			this->uiPanelMenu1->MenuOpen = true;
			this->uiPanelMenu1->mrazota = true;
			this->uiPanelMenu1->Name = L"uiPanelMenu1";
			this->uiPanelMenu1->Size = System::Drawing::Size(400, 300);
			this->uiPanelMenu1->TabIndex = 11;
			this->uiPanelMenu1->Text = L"Header";
			this->uiPanelMenu1->WidthFinal = 400;
			this->uiPanelMenu1->WidthStart = 20;
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::RosyBrown;
			this->ClientSize = System::Drawing::Size(1142, 570);
			this->Controls->Add(this->uiPanelMenu1);
			this->Controls->Add(this->uiBtnApply);
			this->Controls->Add(this->pbxSetting);
			this->Controls->Add(this->pbxFile);
			this->Controls->Add(this->pbxClose);
			this->Controls->Add(this->lblCurrentTime);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmMain";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->Click += gcnew System::EventHandler(this, &frmMain::frmMain_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::frmMain_Paint);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMain::frmMain_KeyPress);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::frmMain_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxFile))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxSetting))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		////////////// DEFAULTS VALUES:
		int  dateTimePos;
		bool DDIsMove;
		int  UICompState;

		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();

	private:

	#pragma	region VOIDS
		#pragma region FORM
		///////////////////////////////////
		////////////// FORM
		System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
			std::cout << "\tfrmMain start\n";

			SetStyle(
				ControlStyles::AllPaintingInWmPaint |
				ControlStyles::OptimizedDoubleBuffer |
				ControlStyles::ResizeRedraw |
				ControlStyles::SupportsTransparentBackColor |
				ControlStyles::UserPaint, true
			);
			DoubleBuffered = true;

			////////////// DEFAULTS VALUES SET
			dateTimePos = DT_POS_LEFT; DDIsMove = false; UICompState = CS_LEAVE;
			this->Left = 1920 - this->Width - 5; this->Top = 500;

			// CYRILLIC!!!!
			//uiPanelMenu1->Text = u8"Settings";
			// 
			// uiPanelMenu1->HideMenu();
			
		}
		System::Void frmMain_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
		System::Void frmMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			//g->DrawEllipse(Pens::Black, 10, 10, 75, 50); //g->DrawEllipse(Pens::Red, 90, 10, 75, 75); //g->DrawRectangle(Pens::Blue, 170, 10, 75, 75);

			Graphics^ g = e->Graphics;

			Color^ clr = gcnew Color();
			Brush^ br = gcnew SolidBrush(clr->Black);
			System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Arial", 20, FontStyle::Bold);

			//g->DrawString("Desctoper ver 0.2.0", fnt, br, 0, 0);
		
		}
		////////////// HOTKEYS
		System::Void frmMain_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
			// 'A' 'b'
			if (e->KeyChar == (char)27) this->Close();
		}
		////////////// FORM
		///////////////////////////////////
		#pragma endregion

		

		#pragma region CLOSE/FILE
		///////////////////////////////////
		////////////// CLOSE/FILE
		System::Void pbxClose_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
		System::Void pbxClose_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g	  = e->Graphics;
			Color^ clr    = gcnew Color();
			Brush^ br     = gcnew SolidBrush(clr->Black);
			Pen^   pen3bk = gcnew Pen(clr->Black, 3.0f);
			Pen^   pen1wt = gcnew Pen(clr->White, 1.0f);

			switch (UICompState) {
			case CS_LEAVE:
				g->DrawLine(pen3bk, 10, 10, 40, 40); g->DrawLine(pen3bk, 10, 40, 40, 10);
			break;
			case CS_ENTER:
				g->DrawLine(pen3bk, 10, 10, 40, 40); g->DrawLine(pen3bk, 10, 40, 40, 10);
				g->DrawLine(pen1wt, 10, 10, 40, 40); g->DrawLine(pen1wt, 10, 40, 40, 10);
			break;
			}
		}
		System::Void pbxClose_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbxClose, CS_ENTER);
			//Invalidate();
		}
		System::Void pbxClose_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbxClose, CS_LEAVE);
		}

		System::Void pbxFile_Click(System::Object^ sender, System::EventArgs^ e) {
			ofdBack->Filter = "Images|*.jpg;*.jpeg;*.png;*.bmp;";
			ofdBack->InitialDirectory = CurrentDir + L"\\Sources\\Images\\";
			if (ofdBack->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				String^ fname;
				fname = ofdBack->FileName;
				this->BackgroundImage = Image::FromFile(fname);
			}			
		}
		System::Void pbxFile_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			Color^ clr  = gcnew Color();
			Brush^ br   = gcnew SolidBrush(clr->Black);
			Pen^ pen3bk = gcnew Pen(clr->Black, 3.0f);
			Pen^ pen1wt = gcnew Pen(clr->White, 1.0f);


			switch (UICompState) {
			case CS_LEAVE:
				g->DrawLine(pen3bk, 15, 10, 35, 10); g->DrawArc(pen3bk, 30, 10, 10, 10, 260,  100);
				g->DrawLine(pen3bk, 40, 15, 40, 35); g->DrawArc(pen3bk, 30, 30, 10, 10, 350,  100);
				g->DrawLine(pen3bk, 15, 40, 38, 40); g->DrawArc(pen3bk, 10, 30, 10, 10, 170, -90);
				g->DrawLine(pen3bk, 10, 15, 10, 35); g->DrawArc(pen3bk, 10, 10, 10, 10, 180,  80);

				g->DrawLine(pen3bk, 30, 18, 40, 18); g->DrawLine(pen3bk, 25, 10, 30, 18);
			break;
			case CS_ENTER:
				g->DrawLine(pen3bk, 15, 10, 35, 10); g->DrawArc(pen3bk, 30, 10, 10, 10, 260,  100);
				g->DrawLine(pen3bk, 40, 15, 40, 35); g->DrawArc(pen3bk, 30, 30, 10, 10, 350,  100);
				g->DrawLine(pen3bk, 15, 40, 38, 40); g->DrawArc(pen3bk, 10, 30, 10, 10, 190, -100);
				g->DrawLine(pen3bk, 10, 15, 10, 35); g->DrawArc(pen3bk, 10, 10, 10, 10, 180,  90);
				g->DrawLine(pen1wt, 15, 10, 35, 10); g->DrawArc(pen1wt, 30, 10, 10, 10, 260,  100);
				g->DrawLine(pen1wt, 40, 15, 40, 35); g->DrawArc(pen1wt, 30, 30, 10, 10, 350,  100);
				g->DrawLine(pen1wt, 15, 40, 38, 40); g->DrawArc(pen1wt, 10, 30, 10, 10, 190, -100);
				g->DrawLine(pen1wt, 10, 15, 10, 35); g->DrawArc(pen1wt, 10, 10, 10, 10, 180,  90);
			break;
			}
		}
		System::Void pbxFile_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbxFile, CS_ENTER);
			//Invalidate();
		}
		System::Void pbxFile_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbxFile, CS_LEAVE);
		}
		////////////// CLOSE/FILE
		///////////////////////////////////
		#pragma endregion



		#pragma region CLOSE/FILE
		///////////////////////////////////
		////////////// CLOSE/FILE
		System::Void pbxSetting_Click(System::Object^ sender, System::EventArgs^ e) {
			uiPanelMenu1->Toggle();


		}
		System::Void pbxSetting_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			Color^ clr = gcnew Color();
			Brush^ br = gcnew SolidBrush(clr->Black);
			Pen^ pen3bk = gcnew Pen(clr->Black, 3.0f);
			Pen^ pen1wt = gcnew Pen(clr->White, 1.0f);


			switch (UICompState) {
			case CS_LEAVE:
				g->DrawLine(pen3bk, 10, 15, 40, 15);
				g->DrawLine(pen3bk, 10, 25, 40, 25);
				g->DrawLine(pen3bk, 10, 35, 40, 35);
			break;
			case CS_ENTER:
				g->DrawLine(pen3bk, 10, 15, 40, 15); g->DrawLine(pen1wt, 10, 15, 40, 15);
				g->DrawLine(pen3bk, 10, 25, 40, 25); g->DrawLine(pen1wt, 10, 25, 40, 25);
				g->DrawLine(pen3bk, 10, 35, 40, 35); g->DrawLine(pen1wt, 10, 35, 40, 35);
			break;
			}
		}
		System::Void pbxSetting_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbxSetting, CS_LEAVE);
		}
		System::Void pbxSetting_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbxSetting, CS_ENTER);
		}
		////////////// CLOSE/FILE
		///////////////////////////////////
		#pragma endregion



		#pragma region TIMERS
		///////////////////////////////////
		////////////// TIMERS
		System::Void tmrDisplayRequired_Tick(System::Object^ sender, System::EventArgs^ e) {
			SetThreadExecutionState(ES_DISPLAY_REQUIRED);	// The display doesn't go sleep
		}
		System::Void tmrTime_Tick(System::Object^ sender, System::EventArgs^ e) {
			SYSTEMTIME systime;
			GetSystemTime(&systime);
			unsigned int H = (systime.wHour + 3), M = (systime.wMinute), S = (systime.wSecond);
			String^ time = "";
			if (H < 10) time += "0" + H.ToString(); else time += H.ToString(); time += ":";
			if (M < 10) time += "0" + M.ToString(); else time += M.ToString(); time += ":";
			if (S < 10) time += "0" + S.ToString(); else time += S.ToString();
			lblCurrentTime->Text = time;
		}
		////////////// TIMERS
		///////////////////////////////////
		#pragma	endregion



		#pragma region LBL_TIME
		///////////////////////////////////
		////////////// LBL_TIME
		System::Void lblCurrentTime_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			bool cond = e->Button == System::Windows::Forms::MouseButtons::Right;
			if (cond) dateTimePos == DT_POS_LEFT   ? dateTimePos = DT_POS_MIDDLE : dateTimePos--;
			else	  dateTimePos == DT_POS_MIDDLE ? dateTimePos = DT_POS_LEFT   : dateTimePos++;

			switch (dateTimePos)
			{
			case DT_POS_RIGHT:
				lblCurrentTime->Font = (
					gcnew System::Drawing::Font(
						lblCurrentTime->Font->FontFamily, 36, lblCurrentTime->Font->Style
					)
				);
				lblCurrentTime->Anchor = (AnchorStyles::Bottom | AnchorStyles::Right);
				lblCurrentTime->Left = this->Width - lblCurrentTime->Width - 5;
				lblCurrentTime->Top = this->Height - lblCurrentTime->Height - 5;
				break;

			case DT_POS_MIDDLE:
				lblCurrentTime->Font = (
					gcnew System::Drawing::Font(
						lblCurrentTime->Font->FontFamily, 150, lblCurrentTime->Font->Style
					)
				);
				lblCurrentTime->Anchor = (AnchorStyles::None);
				lblCurrentTime->Left = this->Width / 2 - lblCurrentTime->Width / 2;
				lblCurrentTime->Top = this->Height / 2 - lblCurrentTime->Height / 2 - 5;
				break;

			case DT_POS_LEFT:
				lblCurrentTime->Font = (
					gcnew System::Drawing::Font(
						lblCurrentTime->Font->FontFamily, 36, lblCurrentTime->Font->Style
					)
				);
				lblCurrentTime->Anchor = (AnchorStyles::Bottom | AnchorStyles::Left);
				lblCurrentTime->Left = 5;
				lblCurrentTime->Top = this->Height - lblCurrentTime->Height - 5;
				break;
			}
		}
		int DDPosXStart, DDPosYStart;
		int DDPosX, DDPosY;
		System::Void lblCurrentTime_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			tmrTime->Enabled = false; DDIsMove = true;
			DDPosXStart = lblCurrentTime->Left; DDPosYStart = lblCurrentTime->Top;
			DDPosX = e->X; DDPosY = e->Y;
		}
		System::Void lblCurrentTime_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (DDIsMove) {
				lblCurrentTime->Left = this->Cursor->Position.X - DDPosX - this->Left;
				lblCurrentTime->Top = this->Cursor->Position.Y - DDPosY - this->Top;
			}
		}
		System::Void lblCurrentTime_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			DDIsMove = false; tmrTime->Enabled = true; aboardCheck(lblCurrentTime);
		}
		////////////// LBL_TIME
		///////////////////////////////////
		#pragma	endregion



		#pragma region ETC
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = (this->WindowState == FormWindowState::Normal ? FormWindowState::Maximized : FormWindowState::Normal);
		}
		System::Void frmMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			//
		}



		private: System::Void uiButton2_Click(System::Object^ sender, System::EventArgs^ e) {
			MessageBox::Show(L"GAVJA");
		}
		#pragma endregion ETC

	#pragma	endregion


	public:
		#pragma	region USER FUNCTIONS
		///////////////////////////////////
		////////////// USER FUNCTIONS
		bool aboardCheck(System::Windows::Forms::Label^ lbl) {
			bool cond =
				(lbl->Left > this->Width - 10) || (lbl->Top > this->Height - 20);
			if (cond) {
				lbl->Left = DDPosXStart;
				lbl->Top = DDPosYStart;

				return FALSE;
			}
			return TRUE;
		}
		void pbxResetImg(System::Windows::Forms::PictureBox^ pbx, String^ dir) {
			try {
				pbx->Image = Image::FromFile(CurrentDir + dir);
			}
			catch (System::IO::FileNotFoundException^) {
				//std::cout << "\t!! file " << dir << " not found\n";
				std::cout << "\t!! file not found\n";
			}
		}
		void UICompStateSwitch(System::Object^ hover, const int state) {
			PictureBox^ pbx = (PictureBox^)hover;
			UICompState = state;
			pbx->Refresh();
		}
		////////////// USER FUNCTIONS
		///////////////////////////////////
		#pragma	endregion


};

}
