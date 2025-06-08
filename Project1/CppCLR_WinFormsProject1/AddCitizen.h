#pragma once
using namespace System::IO;


namespace CppCLR_WinFormsProject1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddCitizen
	/// </summary>
	public ref class AddCitizen : public System::Windows::Forms::Form
	{
	public:
		AddCitizen(void)
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
		~AddCitizen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ citiformname;
	private: System::Windows::Forms::TextBox^ citiformcnic;
	private: System::Windows::Forms::Button^ button1;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->citiformname = (gcnew System::Windows::Forms::TextBox());
			this->citiformcnic = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADD CITIZEN FORM";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(52, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"NAME : ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(55, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(70, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"CNIC NO : ";
			// 
			// citiformname
			// 
			this->citiformname->Location = System::Drawing::Point(121, 103);
			this->citiformname->Name = L"citiformname";
			this->citiformname->Size = System::Drawing::Size(246, 22);
			this->citiformname->TabIndex = 3;
			this->citiformname->TextChanged += gcnew System::EventHandler(this, &AddCitizen::citiformname_TextChanged);
			// 
			// citiformcnic
			// 
			this->citiformcnic->Location = System::Drawing::Point(133, 154);
			this->citiformcnic->Name = L"citiformcnic";
			this->citiformcnic->Size = System::Drawing::Size(234, 22);
			this->citiformcnic->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(65, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 74);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddCitizen::button1_Click);
			// 
			// AddCitizen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(795, 602);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->citiformcnic);
			this->Controls->Add(this->citiformname);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddCitizen";
			this->Text = L"AddCitizen";
			this->Load += gcnew System::EventHandler(this, &AddCitizen::AddCitizen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddCitizen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void citiformname_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = citiformname->Text->Trim();
	String^ cnic = citiformcnic->Text->Trim();

	// Basic validation
	if (name == "" || cnic == "") {
		MessageBox::Show("Please enter both name and CNIC.", "Missing Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// File save logic (no error handling)
	StreamWriter^ writer = gcnew StreamWriter("citizenData.txt", true); // append mode
	String^ status = "Pending"; 
	writer->WriteLine(name + "," + cnic + "," + status);
	writer->Close();

	MessageBox::Show("Citizen data saved successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Clear fields
	citiformname->Text = "";
	citiformcnic->Text = "";
}
};
}
