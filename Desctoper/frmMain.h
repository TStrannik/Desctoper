#include <iostream>
#include <Windows.h>
#include <string>

const int DT_POS_LEFT   = 0x00;
const int DT_POS_RIGHT  = 0x01;
const int DT_POS_MIDDLE = 0x02;

const int CS_LEAVE		= 0x00;
const int CS_HOVER		= 0x01;

#pragma once


namespace Desctoper {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ frmMain
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Timer^ tmrDisplayRequired;


	private: System::Windows::Forms::Label^ lblCurrentTime;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pbxClose;
	private: System::Windows::Forms::PictureBox^ pbx2;


	private: System::Windows::Forms::Timer^ tmrTime;
	private: System::Windows::Forms::PictureBox^ pbx3;
	private: System::Windows::Forms::PictureBox^ pbx4;

	private: System::ComponentModel::IContainer^ components;






	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->tmrDisplayRequired = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblCurrentTime = (gcnew System::Windows::Forms::Label());
			this->tmrTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pbxClose = (gcnew System::Windows::Forms::PictureBox());
			this->pbx2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbx3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbx4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbx2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbx3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbx4))->BeginInit();
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->BackColor = System::Drawing::Color::White;
			this->btnClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Marlett", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(498, 0);
			this->btnClose->Margin = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(50, 50);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Visible = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &frmMain::btnClose_Click);
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
			this->lblCurrentTime->Location = System::Drawing::Point(9, 431);
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
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(19, 12);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(310, 182);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			this->chart1->Visible = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Marlett", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(445, 0);
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
			this->label1->Location = System::Drawing::Point(26, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(26, 210);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// pbxClose
			// 
			this->pbxClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pbxClose->BackColor = System::Drawing::Color::Transparent;
			this->pbxClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbxClose.Image")));
			this->pbxClose->Location = System::Drawing::Point(794, 0);
			this->pbxClose->Name = L"pbxClose";
			this->pbxClose->Size = System::Drawing::Size(50, 50);
			this->pbxClose->TabIndex = 7;
			this->pbxClose->TabStop = false;
			this->pbxClose->Click += gcnew System::EventHandler(this, &frmMain::pbxClose_Click);
			this->pbxClose->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbxClose_MouseLeave);
			this->pbxClose->MouseHover += gcnew System::EventHandler(this, &frmMain::pbxClose_MouseHover);
			// 
			// pbx2
			// 
			this->pbx2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pbx2->BackColor = System::Drawing::Color::Transparent;
			this->pbx2->Location = System::Drawing::Point(743, 0);
			this->pbx2->Name = L"pbx2";
			this->pbx2->Size = System::Drawing::Size(50, 50);
			this->pbx2->TabIndex = 8;
			this->pbx2->TabStop = false;
			this->pbx2->Click += gcnew System::EventHandler(this, &frmMain::pbx2_Click);
			this->pbx2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pbx2_Paint);
			this->pbx2->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbx2_MouseLeave);
			this->pbx2->MouseHover += gcnew System::EventHandler(this, &frmMain::pbx2_MouseHover);
			// 
			// pbx3
			// 
			this->pbx3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pbx3->BackColor = System::Drawing::Color::Transparent;
			this->pbx3->Location = System::Drawing::Point(687, 0);
			this->pbx3->Name = L"pbx3";
			this->pbx3->Size = System::Drawing::Size(50, 50);
			this->pbx3->TabIndex = 9;
			this->pbx3->TabStop = false;
			this->pbx3->Click += gcnew System::EventHandler(this, &frmMain::pbx3_Click);
			this->pbx3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pbx3_Paint);
			this->pbx3->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbx3_MouseLeave);
			this->pbx3->MouseHover += gcnew System::EventHandler(this, &frmMain::pbx3_MouseHover);
			// 
			// pbx4
			// 
			this->pbx4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pbx4->BackColor = System::Drawing::Color::Transparent;
			this->pbx4->Location = System::Drawing::Point(631, 0);
			this->pbx4->Name = L"pbx4";
			this->pbx4->Size = System::Drawing::Size(50, 50);
			this->pbx4->TabIndex = 10;
			this->pbx4->TabStop = false;
			this->pbx4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::pbx4_Paint);
			this->pbx4->MouseLeave += gcnew System::EventHandler(this, &frmMain::pbx4_MouseLeave);
			this->pbx4->MouseHover += gcnew System::EventHandler(this, &frmMain::pbx4_MouseHover);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(844, 495);
			this->Controls->Add(this->pbx4);
			this->Controls->Add(this->pbx3);
			this->Controls->Add(this->pbx2);
			this->Controls->Add(this->pbxClose);
			this->Controls->Add(this->lblCurrentTime);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmMain";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->Click += gcnew System::EventHandler(this, &frmMain::frmMain_Click);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &frmMain::frmMain_Paint);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &frmMain::frmMain_KeyPress);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::frmMain_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbxClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbx2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbx3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbx4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool killme;

		int  dateTimePos;
		bool DDIsMove;
		int  UICompState;

		String^ CurrentDir = System::IO::Directory::GetCurrentDirectory();

	private:
		System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
			std::cout << "\tfrmMain start\n";

			//xxxx
			killme = true;

			// DEFAULTS VALUES
			dateTimePos = DT_POS_LEFT; DDIsMove = false; UICompState = CS_LEAVE;
			this->Left = 1920 - this->Width - 5; this->Top = 500;
		}

		System::Void frmMain_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			//g->DrawEllipse(Pens::Black, 10, 10, 75, 50); //g->DrawEllipse(Pens::Red, 90, 10, 75, 75); //g->DrawRectangle(Pens::Blue, 170, 10, 75, 75);

			Graphics^ g = e->Graphics;

			Color^ clr = gcnew Color();
			Brush^ br = gcnew SolidBrush(clr->Black);
			System::Drawing::Font^ fnt = gcnew System::Drawing::Font("Arial", 20, FontStyle::Bold);

			g->DrawString("Desctoper ver 0.1.0", fnt, br, 0, 0);
		
		}



		System::Void pbx2_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
		System::Void pbx2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g	  = e->Graphics;
			Color^ clr    = gcnew Color();
			Brush^ br     = gcnew SolidBrush(clr->Black);
			Pen^   pen3bk = gcnew Pen(clr->Black, 3.0f);
			Pen^   pen1wt = gcnew Pen(clr->White, 1.0f);

			switch (UICompState) {
			case CS_LEAVE:
				g->DrawLine(pen3bk, 10, 10, 40, 40); g->DrawLine(pen3bk, 10, 40, 40, 10);
				break;
			case CS_HOVER:
				g->DrawLine(pen3bk, 10, 10, 40, 40); g->DrawLine(pen3bk, 10, 40, 40, 10);
				g->DrawLine(pen1wt, 10, 10, 40, 40); g->DrawLine(pen1wt, 10, 40, 40, 10);
				break;
			}
		}
		System::Void pbx2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbx2, CS_HOVER);
		}
		System::Void pbx2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbx2, CS_LEAVE);
		}
		
		System::Void pbx3_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
		System::Void pbx3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			Color^ clr = gcnew Color();
			Brush^ br = gcnew SolidBrush(clr->Black);
			Pen^ pen3bk = gcnew Pen(clr->Black, 3.0f);
			Pen^ pen1wt = gcnew Pen(clr->White, 1.0f);

			switch (UICompState) {
			case CS_LEAVE:
				g->DrawLine(pen3bk, 10, 10, 40, 40); g->DrawLine(pen3bk, 10, 40, 40, 10);
				break;
			case CS_HOVER:
				g->DrawLine(pen3bk, 10, 10, 40, 40); g->DrawLine(pen3bk, 10, 40, 40, 10);
				g->DrawLine(pen1wt, 10, 10, 40, 40); g->DrawLine(pen1wt, 10, 40, 40, 10);
				break;
			}
		}
		System::Void pbx3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbx3, CS_HOVER);
		}
		System::Void pbx3_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbx3, CS_LEAVE);
		}		

		System::Void pbx4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;

			Image^ im;
			switch (UICompState) {
			case CS_LEAVE:
				im = Image::FromFile(CurrentDir + "\\Sources\\UI\\bClose_1.png"); break;
			case CS_HOVER:
				im = Image::FromFile(CurrentDir + "\\Sources\\UI\\bClose_2.png"); break;
			}
			g->DrawImage(im, 0, 0, 50, 50);
		}
		System::Void pbx4_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbx4, CS_LEAVE);
		}
		System::Void pbx4_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			UICompStateSwitch(pbx4, CS_HOVER);
		}

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
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			//if (killme) this->WindowState = FormWindowState::Normal; else this->WindowState = FormWindowState::Maximized;
			killme ? this->WindowState = FormWindowState::Normal : this->WindowState = FormWindowState::Maximized;
			killme = !killme;
		}
		System::Void frmMain_Click(System::Object^ sender, System::EventArgs^ e) {
			this->WindowState = FormWindowState::Minimized;
		}
		System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		
		// HOTKEYS
		System::Void frmMain_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
							// 'A' 'b'
			if (e->KeyChar == (char)27) this->Close();
		}

	private:
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

		System::Void frmMain_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			//
		}

		System::Void pbxClose_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}
		System::Void pbxClose_MouseHover(System::Object^ sender, System::EventArgs^ e) {
			pbxResetImg(pbxClose, "\\Sources\\UI\\bClose_2.png");
		}
		System::Void pbxClose_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
			pbxResetImg(pbxClose, "\\Sources\\UI\\bClose_1.png");
		}

		





		









	public:
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










};

}
