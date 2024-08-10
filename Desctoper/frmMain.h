#include <iostream>
#include <Windows.h>
#include <chrono>
#include <ctime>


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->tmrDisplayRequired = (gcnew System::Windows::Forms::Timer(this->components));
			this->lblCurrentTime = (gcnew System::Windows::Forms::Label());
			this->tmrTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->BackColor = System::Drawing::Color::White;
			this->btnClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Marlett", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(395, -1);
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
			this->tmrDisplayRequired->Interval = 20000;
			this->tmrDisplayRequired->Tick += gcnew System::EventHandler(this, &frmMain::tmrDisplayRequired_Tick);
			// 
			// lblCurrentTime
			// 
			this->lblCurrentTime->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblCurrentTime->AutoSize = true;
			this->lblCurrentTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCurrentTime->Location = System::Drawing::Point(12, 214);
			this->lblCurrentTime->Name = L"lblCurrentTime";
			this->lblCurrentTime->Size = System::Drawing::Size(151, 37);
			this->lblCurrentTime->TabIndex = 1;
			this->lblCurrentTime->Text = L"00:00:00";
			this->lblCurrentTime->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// tmrTime
			// 
			this->tmrTime->Enabled = true;
			this->tmrTime->Interval = 1;
			this->tmrTime->Tick += gcnew System::EventHandler(this, &frmMain::tmrTime_Tick);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(438, 260);
			this->Controls->Add(this->lblCurrentTime);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"frmMain";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->Click += gcnew System::EventHandler(this, &frmMain::frmMain_Click);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void frmMain_Load(System::Object^ sender, System::EventArgs^ e) {
		std::cout << "\tfrmMain start\n";


		
		//this->BackgroundImage->FromFile("Sources\\Images\\TStrannik.png");
		// 
		//this->BackgroundImage = Image::FromFile(openDlg->FileName);

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
		SetThreadExecutionState(ES_DISPLAY_REQUIRED);
	}

	private: System::Void tmrTime_Tick(System::Object^ sender, System::EventArgs^ e) {
		auto start = std::chrono::system_clock::now();
		// Some computation here
		auto end = std::chrono::system_clock::now();
		std::chrono::duration<double> elapsed_seconds = end - start;
		std::time_t end_time = std::chrono::system_clock::to_time_t(end);
		std::cout << "finished computation at " << std::ctime(&end_time)
			<< "elapsed time: " << elapsed_seconds.count() << "s"
			<< std::endl;
	}

};
}
