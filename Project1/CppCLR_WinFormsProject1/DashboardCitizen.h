#ifndef DASHBOARD_CITIZEN_H
#define DASHBOARD_CITIZEN_H
#include "AddCitizen.h"
#include "citizenview.h"
#include "citizen.h"
namespace CppCLR_WinFormsProject1 {
	//ref class citizen;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashboardCitizen
	/// </summary>
	public ref class DashboardCitizen : public System::Windows::Forms::Form
	{
	public:
		DashboardCitizen(String^ username)
		{
			InitializeComponent();
			this->userName = username;
			this->label1->Text = "Hello " + userName; 

			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashboardCitizen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String^ userName; // Variable to store the username of the logged-in citizen
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(48, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(462, 123);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ADD CITIZEN";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DashboardCitizen::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(56, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(453, 117);
			this->button2->TabIndex = 1;
			this->button2->Text = L"VIEW INFORMATION";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &DashboardCitizen::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(62, 470);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(446, 113);
			this->button3->TabIndex = 2;
			this->button3->Text = L"LOGOUT";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(363, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 4;
			this->label2->Click += gcnew System::EventHandler(this, &DashboardCitizen::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(414, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Hello";
			// 
			// DashboardCitizen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 655);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"DashboardCitizen";
			this->Text = L"DashboardCitizen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Code to handle the button click event for adding a citizen
		CppCLR_WinFormsProject1::AddCitizen^ addCitizenForm = gcnew CppCLR_WinFormsProject1::AddCitizen();
		addCitizenForm->ShowDialog(); 
		//MessageBox::Show("Add Citizen button clicked!");
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Code to handle the button click event for viewing information
		this->Hide();
		CppCLR_WinFormsProject1::citizenview^ viewgrid = gcnew CppCLR_WinFormsProject1::citizenview(userName);
		viewgrid->ShowDialog();
		this->Close();
		//MessageBox::Show("View Information button clicked!");
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Logout button clicked!");
		
			this->Hide(); // Hide dashboard

			// Show login form again
		/*	CppCLR_WinFormsProject1::citizen^ loginForm = gcnew CppCLR_WinFormsProject1::citizen();
			loginForm->ShowDialog();*/

			this->Close(); // Close dashboard after login form is shown
		
	}
	
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {

}
};

	}
#endif
	