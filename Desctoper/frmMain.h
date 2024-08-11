#include <iostream>
#include <Windows.h>
#include <string>

#define DT_POS_LEFT   0x00;
#define DT_POS_RIGHT  0x01;
#define DT_POS_MIDDLE 0x02;


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
	private: System::Windows::Forms::Timer^ tmrTime;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->tmrDisplayRequired = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblCurrentTime = (gcnew System::Windows::Forms::Label());
			this->tmrTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->BackColor = System::Drawing::Color::White;
			this->btnClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Marlett", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(615, -1);
			this->btnClose->Margin = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(44, 44);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
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
			this->lblCurrentTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCurrentTime->Location = System::Drawing::Point(12, 343);
			this->lblCurrentTime->Name = L"lblCurrentTime";
			this->lblCurrentTime->Size = System::Drawing::Size(151, 37);
			this->lblCurrentTime->TabIndex = 1;
			this->lblCurrentTime->Text = L"00:00:00";
			this->lblCurrentTime->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblCurrentTime->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::lblCurrentTime_MouseDoubleClick);
			// 
			// tmrTime
			// 
			this->tmrTime->Enabled = true;
			this->tmrTime->Tick += gcnew System::EventHandler(this, &frmMain::tmrTime_Tick);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(19, 12);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(310, 182);
			this->chart1->TabIndex = 2;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Marlett", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(573, -1);
			this->button1->Margin = System::Windows::Forms::Padding(3, 3, 0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(44, 44);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &frmMain::button1_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(658, 389);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->lblCurrentTime);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmMain";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->Click += gcnew System::EventHandler(this, &frmMain::frmMain_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool killme;

		
		int dateTimePos;

	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout << "\tfrmMain start\n";

		//this->BackgroundImage->FromFile("Sources\\Images\\TStrannik.png");
		// 
		//this->BackgroundImage = Image::FromFile(openDlg->FileName);


		//xxxx
		killme = true;



		// DEFAULTS VALUES
		int dateTimePos = DT_POS_LEFT;
	}



	// System::Threading::Thread::Sleep(1000);
		 

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void frmMain_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void tmrDisplayRequired_Tick(System::Object^ sender, System::EventArgs^ e) {
		std::cout << "\tcall: SetThreadExecutionState\n";
		SetThreadExecutionState(ES_DISPLAY_REQUIRED);						// Display not sleep
	}

	private: System::Void tmrTime_Tick(System::Object^ sender, System::EventArgs^ e) {
		SYSTEMTIME systime;
		GetSystemTime(&systime);
		unsigned int H = (systime.wHour + 3), M = (systime.wMinute), S = (systime.wSecond);		
		String^ time = "";
		if (H < 10) time += "0" + H.ToString(); else time += H.ToString(); time += ":";
		if (M < 10) time += "0" + M.ToString(); else time += M.ToString(); time += ":";
		if (S < 10) time += "0" + S.ToString(); else time += S.ToString();
		lblCurrentTime->Text = time;
	}





	private: System::Void lblCurrentTime_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		switch (dateTimePos)
		{
		case 0x00:
			lblCurrentTime->Font = (
				gcnew System::Drawing::Font(
					lblCurrentTime->Font->FontFamily, 24, lblCurrentTime->Font->Style
				)
			);
			lblCurrentTime->Anchor = (AnchorStyles::Bottom | AnchorStyles::Right);
			lblCurrentTime->Left   = this->Width  - lblCurrentTime->Width  - 5;
			lblCurrentTime->Top    = this->Height - lblCurrentTime->Height - 5;
			dateTimePos			   = DT_POS_RIGHT;
			break;

		case 0x01:
			lblCurrentTime->Font = (
				gcnew System::Drawing::Font(
					lblCurrentTime->Font->FontFamily, 150, lblCurrentTime->Font->Style
				)
			);
			lblCurrentTime->Anchor = (AnchorStyles::None);
			lblCurrentTime->Left   = this->Width  / 2 - lblCurrentTime->Width  / 2;
			lblCurrentTime->Top    = this->Height / 2 - lblCurrentTime->Height / 2 - 5;
			dateTimePos			   = DT_POS_MIDDLE;
			break;

		case 0x02:
			lblCurrentTime->Font = (
				gcnew System::Drawing::Font(
					lblCurrentTime->Font->FontFamily, 24, lblCurrentTime->Font->Style
				)
			);
			lblCurrentTime->Anchor = (AnchorStyles::Bottom | AnchorStyles::Left);
			lblCurrentTime->Left   = 5;
			lblCurrentTime->Top	   = this->Height - lblCurrentTime->Height - 5;
			dateTimePos			   = DT_POS_LEFT;
			break;
		}		
	}


		  
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//if (killme) this->WindowState = FormWindowState::Normal; else this->WindowState = FormWindowState::Maximized;
		killme ? this->WindowState = FormWindowState::Normal : this->WindowState = FormWindowState::Maximized;
		killme = !killme;
	}


};
}
