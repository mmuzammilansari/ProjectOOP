#ifndef CITIZEN_H
#define CITIZEN_H
#include <fstream>
#include <string>
#include "DashboardCitizen.h"
#include "AddCitizen.h"

namespace CppCLR_WinFormsProject1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for citizen
	/// </summary>
	public ref class citizen : public System::Windows::Forms::Form
	{
	public:
		citizen(void)
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
		~citizen()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ labellogin;
	private: System::Windows::Forms::Label^ signuplabel;
	protected:

	protected:

	
	private: System::Windows::Forms::Label^ usernamelogin;

	private: System::Windows::Forms::TextBox^ usernamelogintexbox;

	private: System::Windows::Forms::Label^ passwordlogin;
	private: System::Windows::Forms::Label^ usernamesignup;

	private: System::Windows::Forms::Label^ passwordsignup;
	private: System::Windows::Forms::Label^ cpasswordsignup;





	private: System::Windows::Forms::TextBox^ passwordlogintextbox;
	private: System::Windows::Forms::TextBox^ usernamesignuptextbox;
	private: System::Windows::Forms::TextBox^ passwordsignuptextbox;



	private: System::Windows::Forms::TextBox^ cpasswordsignuptextbox;

	private: System::Windows::Forms::Button^ login;

	private: System::Windows::Forms::Button^ signup;
	private: System::Windows::Forms::Label^ welcome;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		static String^ username = nullptr;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labellogin = (gcnew System::Windows::Forms::Label());
			this->signuplabel = (gcnew System::Windows::Forms::Label());
			this->usernamelogin = (gcnew System::Windows::Forms::Label());
			this->usernamelogintexbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordlogin = (gcnew System::Windows::Forms::Label());
			this->usernamesignup = (gcnew System::Windows::Forms::Label());
			this->passwordsignup = (gcnew System::Windows::Forms::Label());
			this->cpasswordsignup = (gcnew System::Windows::Forms::Label());
			this->passwordlogintextbox = (gcnew System::Windows::Forms::TextBox());
			this->usernamesignuptextbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordsignuptextbox = (gcnew System::Windows::Forms::TextBox());
			this->cpasswordsignuptextbox = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->signup = (gcnew System::Windows::Forms::Button());
			this->welcome = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labellogin
			// 
			this->labellogin->AutoSize = true;
			this->labellogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labellogin->Location = System::Drawing::Point(213, 149);
			this->labellogin->Name = L"labellogin";
			this->labellogin->Size = System::Drawing::Size(101, 32);
			this->labellogin->TabIndex = 1;
			this->labellogin->Text = L"LOGIN";
			// 
			// signuplabel
			// 
			this->signuplabel->AutoSize = true;
			this->signuplabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signuplabel->Location = System::Drawing::Point(854, 149);
			this->signuplabel->Name = L"signuplabel";
			this->signuplabel->Size = System::Drawing::Size(121, 32);
			this->signuplabel->TabIndex = 2;
			this->signuplabel->Text = L"SIGNUP";
			// 
			// usernamelogin
			// 
			this->usernamelogin->AutoSize = true;
			this->usernamelogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamelogin->Location = System::Drawing::Point(70, 232);
			this->usernamelogin->Name = L"usernamelogin";
			this->usernamelogin->Size = System::Drawing::Size(113, 25);
			this->usernamelogin->TabIndex = 3;
			this->usernamelogin->Text = L"Username :";
			// 
			// usernamelogintexbox
			// 
			this->usernamelogintexbox->Location = System::Drawing::Point(186, 235);
			this->usernamelogintexbox->Name = L"usernamelogintexbox";
			this->usernamelogintexbox->Size = System::Drawing::Size(250, 22);
			this->usernamelogintexbox->TabIndex = 4;
			this->usernamelogintexbox->TextChanged += gcnew System::EventHandler(this, &citizen::usernamelogintexbox_TextChanged);
			// 
			// passwordlogin
			// 
			this->passwordlogin->AutoSize = true;
			this->passwordlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordlogin->Location = System::Drawing::Point(74, 299);
			this->passwordlogin->Name = L"passwordlogin";
			this->passwordlogin->Size = System::Drawing::Size(109, 25);
			this->passwordlogin->TabIndex = 5;
			this->passwordlogin->Text = L"Password :";
			// 
			// usernamesignup
			// 
			this->usernamesignup->AutoSize = true;
			this->usernamesignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernamesignup->Location = System::Drawing::Point(677, 231);
			this->usernamesignup->Name = L"usernamesignup";
			this->usernamesignup->Size = System::Drawing::Size(113, 25);
			this->usernamesignup->TabIndex = 6;
			this->usernamesignup->Text = L"Username :";
			// 
			// passwordsignup
			// 
			this->passwordsignup->AutoSize = true;
			this->passwordsignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordsignup->Location = System::Drawing::Point(681, 271);
			this->passwordsignup->Name = L"passwordsignup";
			this->passwordsignup->Size = System::Drawing::Size(109, 25);
			this->passwordsignup->TabIndex = 7;
			this->passwordsignup->Text = L"Password :";
			// 
			// cpasswordsignup
			// 
			this->cpasswordsignup->AutoSize = true;
			this->cpasswordsignup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpasswordsignup->Location = System::Drawing::Point(586, 309);
			this->cpasswordsignup->Name = L"cpasswordsignup";
			this->cpasswordsignup->Size = System::Drawing::Size(204, 25);
			this->cpasswordsignup->TabIndex = 8;
			this->cpasswordsignup->Text = L"Confirmed Password :";
			// 
			// passwordlogintextbox
			// 
			this->passwordlogintextbox->Location = System::Drawing::Point(186, 302);
			this->passwordlogintextbox->Name = L"passwordlogintextbox";
			this->passwordlogintextbox->Size = System::Drawing::Size(250, 22);
			this->passwordlogintextbox->TabIndex = 9;
			this->passwordlogintextbox->TextChanged += gcnew System::EventHandler(this, &citizen::passwordlogintextbox_TextChanged);
			// 
			// usernamesignuptextbox
			// 
			this->usernamesignuptextbox->Location = System::Drawing::Point(829, 229);
			this->usernamesignuptextbox->Name = L"usernamesignuptextbox";
			this->usernamesignuptextbox->Size = System::Drawing::Size(292, 22);
			this->usernamesignuptextbox->TabIndex = 10;
			this->usernamesignuptextbox->TextChanged += gcnew System::EventHandler(this, &citizen::usernamesignuptextbox_TextChanged);
			// 
			// passwordsignuptextbox
			// 
			this->passwordsignuptextbox->Location = System::Drawing::Point(831, 271);
			this->passwordsignuptextbox->Name = L"passwordsignuptextbox";
			this->passwordsignuptextbox->Size = System::Drawing::Size(290, 22);
			this->passwordsignuptextbox->TabIndex = 11;
			this->passwordsignuptextbox->TextChanged += gcnew System::EventHandler(this, &citizen::passwordsignuptextbox_TextChanged);
			// 
			// cpasswordsignuptextbox
			// 
			this->cpasswordsignuptextbox->Location = System::Drawing::Point(829, 309);
			this->cpasswordsignuptextbox->Name = L"cpasswordsignuptextbox";
			this->cpasswordsignuptextbox->Size = System::Drawing::Size(292, 22);
			this->cpasswordsignuptextbox->TabIndex = 12;
			this->cpasswordsignuptextbox->TextChanged += gcnew System::EventHandler(this, &citizen::cpasswordsignuptextbox_TextChanged);
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(69, 366);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(367, 46);
			this->login->TabIndex = 13;
			this->login->Text = L"LOGIN";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &citizen::login_Click);
			// 
			// signup
			// 
			this->signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup->Location = System::Drawing::Point(682, 369);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(367, 43);
			this->signup->TabIndex = 14;
			this->signup->Text = L"SIGNUP";
			this->signup->UseVisualStyleBackColor = true;
			this->signup->Click += gcnew System::EventHandler(this, &citizen::signup_Click);
			// 
			// welcome
			// 
			this->welcome->AutoSize = true;
			this->welcome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcome->Location = System::Drawing::Point(411, 41);
			this->welcome->Name = L"welcome";
			this->welcome->Size = System::Drawing::Size(391, 46);
			this->welcome->TabIndex = 16;
			this->welcome->Text = L"WELCOME CITIZEN";
			// 
			// citizen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1187, 541);
			this->Controls->Add(this->welcome);
			this->Controls->Add(this->signup);
			this->Controls->Add(this->login);
			this->Controls->Add(this->cpasswordsignuptextbox);
			this->Controls->Add(this->passwordsignuptextbox);
			this->Controls->Add(this->usernamesignuptextbox);
			this->Controls->Add(this->passwordlogintextbox);
			this->Controls->Add(this->cpasswordsignup);
			this->Controls->Add(this->passwordsignup);
			this->Controls->Add(this->usernamesignup);
			this->Controls->Add(this->passwordlogin);
			this->Controls->Add(this->usernamelogintexbox);
			this->Controls->Add(this->usernamelogin);
			this->Controls->Add(this->signuplabel);
			this->Controls->Add(this->labellogin);
			this->Name = L"citizen";
			this->Text = L"citizen";
			this->Load += gcnew System::EventHandler(this, &citizen::citizen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void usernamelogintexbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void passwordlogintextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void usernamesignuptextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passwordsignuptextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = usernamelogintexbox->Text;
	String^ password = passwordlogintextbox->Text;

	if (username->Trim() == "" || password->Trim() == "") {
		MessageBox::Show("Please enter both username and password.", "Input Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (!File::Exists("citizen_login.txt")) {
		MessageBox::Show("No accounts found. Please sign up first.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	bool found = false;
	StreamReader^ reader = gcnew StreamReader("citizen_login.txt");
	String^ line;

	while ((line = reader->ReadLine()) != nullptr) {
		array<String^>^ parts = line->Split(',');
		if (parts->Length == 2 && parts[0]->Trim() == username && parts[1]->Trim() == password) {
			found = true;
			break;
		}
	}
	reader->Close();

	if (found) {
		MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Store username in static variable (if needed later)
		citizen::username = username;
		this->Hide();
		CppCLR_WinFormsProject1::DashboardCitizen^ dash = gcnew CppCLR_WinFormsProject1::DashboardCitizen(username);
		dash->Show();

		//this->Show(); 
	}
	else {
		MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void citizen_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void signup_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = usernamesignuptextbox->Text;
	String^ password = passwordsignuptextbox->Text;
	String^ confirmPassword = cpasswordsignuptextbox->Text;

	if (username->Trim() == "" || password->Trim() == "" || confirmPassword->Trim() == "") {
		MessageBox::Show("All fields are required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	if (password != confirmPassword) {
		MessageBox::Show("Password and Confirmed Password must match.", "Signup Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Append credentials to file
	StreamWriter^ writer = gcnew StreamWriter("citizen_login.txt", true);
	writer->WriteLine(username + "," + password);
	writer->Close();

	MessageBox::Show("Signup successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Clear textboxes
	usernamesignuptextbox->Text = "";
	passwordsignuptextbox->Text = "";
	cpasswordsignuptextbox->Text = "";
}
private: System::Void cpasswordsignuptextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
#endif