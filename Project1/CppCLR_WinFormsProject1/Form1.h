#pragma once
#include "citizen.h"
#include "admin.h"
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mainwelcome;
	private: System::Windows::Forms::Label^ mainlogin;
	private: System::Windows::Forms::Button^ citizenmain;
	private: System::Windows::Forms::Button^ adminmain;


	protected:




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->mainwelcome = (gcnew System::Windows::Forms::Label());
			this->mainlogin = (gcnew System::Windows::Forms::Label());
			this->citizenmain = (gcnew System::Windows::Forms::Button());
			this->adminmain = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mainwelcome
			// 
			this->mainwelcome->AutoSize = true;
			this->mainwelcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainwelcome->Location = System::Drawing::Point(32, 35);
			this->mainwelcome->Name = L"mainwelcome";
			this->mainwelcome->Size = System::Drawing::Size(1120, 46);
			this->mainwelcome->TabIndex = 0;
			this->mainwelcome->Text = L"WELCOME TO DIGITAL IDENTITY MANAGEMENT SYSTEM";
			// 
			// mainlogin
			// 
			this->mainlogin->AutoSize = true;
			this->mainlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainlogin->Location = System::Drawing::Point(535, 149);
			this->mainlogin->Name = L"mainlogin";
			this->mainlogin->Size = System::Drawing::Size(143, 46);
			this->mainlogin->TabIndex = 1;
			this->mainlogin->Text = L"LOGIN";
			// 
			// citizenmain
			// 
			this->citizenmain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->citizenmain->Location = System::Drawing::Point(119, 285);
			this->citizenmain->Name = L"citizenmain";
			this->citizenmain->Size = System::Drawing::Size(268, 114);
			this->citizenmain->TabIndex = 2;
			this->citizenmain->Text = L"CITIZEN";
			this->citizenmain->UseVisualStyleBackColor = true;
			this->citizenmain->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// adminmain
			// 
			this->adminmain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adminmain->Location = System::Drawing::Point(782, 285);
			this->adminmain->Name = L"adminmain";
			this->adminmain->Size = System::Drawing::Size(269, 114);
			this->adminmain->TabIndex = 3;
			this->adminmain->Text = L"ADMIN";
			this->adminmain->UseVisualStyleBackColor = true;
			this->adminmain->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1234, 531);
			this->Controls->Add(this->adminmain);
			this->Controls->Add(this->citizenmain);
			this->Controls->Add(this->mainlogin);
			this->Controls->Add(this->mainwelcome);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		CppCLR_WinFormsProject1::citizen^ citiform = gcnew CppCLR_WinFormsProject1::citizen();
		citiform->Show();
	} 
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		CppCLR_WinFormsProject1::admin^ adminForm = gcnew CppCLR_WinFormsProject1::admin();
		adminForm->Show();
}

};
}
