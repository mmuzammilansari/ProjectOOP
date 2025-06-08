#pragma once
#include <fstream>
#include <string>
#include "AddCitizen.h"

namespace CppCLR_WinFormsProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardAdmin
	/// </summary>
	public ref class DashboardAdmin : public System::Windows::Forms::Form
	{
	public:
		DashboardAdmin(void)
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
		~DashboardAdmin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(141, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(339, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Dashboard";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(146, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 69);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ADD CITIZEN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardAdmin::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(151, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(312, 72);
			this->button2->TabIndex = 2;
			this->button2->Text = L"VIEW CITIZEN";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(151, 396);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(310, 83);
			this->button3->TabIndex = 3;
			this->button3->Text = L"VIEW CITIZEN USERNAME";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(533, 146);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(317, 69);
			this->button4->TabIndex = 4;
			this->button4->Text = L"EDIT CITIZEN";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(533, 268);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(317, 67);
			this->button5->TabIndex = 5;
			this->button5->Text = L"DELETE CITIZEN";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(533, 399);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(317, 80);
			this->button6->TabIndex = 6;
			this->button6->Text = L"LOGOUT";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(533, 31);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(317, 63);
			this->button7->TabIndex = 7;
			this->button7->Text = L"ADD ADMIN";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// DashboardAdmin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1121, 628);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"DashboardAdmin";
			this->Text = L"DashboardAdmin";
			this->Load += gcnew System::EventHandler(this, &DashboardAdmin::DashboardAdmin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DashboardAdmin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	CppCLR_WinFormsProject1::AddCitizen^ addCitizenForm = gcnew CppCLR_WinFormsProject1::AddCitizen();
}
};
}
