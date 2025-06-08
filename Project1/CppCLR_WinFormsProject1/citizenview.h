#pragma once

namespace CppCLR_WinFormsProject1 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for citizenview
	/// </summary>
	public ref class citizenview : public System::Windows::Forms::Form
	{
	public:
		citizenview(String^ userName)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->label1->Text = "Hello " + userName; // Display the username in the label
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~citizenview()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(71, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 22);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(343, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"View";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &citizenview::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(72, 226);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(540, 258);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->ColumnCount = 3;
			this->dataGridView1->Columns[0]->Name = "Name";
			this->dataGridView1->Columns[1]->Name = "CNIC";
			this->dataGridView1->Columns[2]->Name = "Status";
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &citizenview::dataGridView1_CellContentClick);
			// 
			// citizenview
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 543);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"citizenview";
			this->Text = L"citizenview";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchName = textBox1->Text->Trim();

	if (searchName == "") {
		MessageBox::Show("Please enter a name to search.", "Input Required", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	dataGridView1->Rows->Clear();

	try {
		StreamReader^ reader = gcnew StreamReader("citizenData.txt");
		String^ line;
		bool found = false;

		while ((line = reader->ReadLine()) != nullptr) {
			array<String^>^ parts = line->Split(',');
			if (parts->Length == 3 && parts[0]->Trim()->ToLower() == searchName->ToLower()) {
				array<String^>^ row = gcnew array<String^>{ parts[0]->Trim(), parts[1]->Trim(), parts[2]->Trim() };
				dataGridView1->Rows->Add(row);
				found = true;
			}
		}
		reader->Close();

		if (!found) {
			MessageBox::Show("No record found for the entered name.", "Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error reading file: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
}
