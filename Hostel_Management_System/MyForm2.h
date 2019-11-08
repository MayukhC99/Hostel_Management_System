#pragma once

namespace Hostel_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
			 OdbcConnection ^cn;
			 OdbcCommand ^cm;
			 OdbcDataReader ^ dr;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button1->Location = System::Drawing::Point(331, 273);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 34);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Signup";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(179, 226);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(242, 29);
			this->textBox2->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(179, 186);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(242, 29);
			this->textBox1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Yellow;
			this->label2->Location = System::Drawing::Point(56, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 24);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Password: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(56, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 24);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Username: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(32, 153);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(136, 24);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Hostel Name:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(179, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(242, 29);
			this->textBox3->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(56, 390);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 12;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(529, 499);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"MyForm2";
			this->Text = L"Signup";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm2::MyForm2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Hide();
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "")){
				 //this->ActiveControl = textBox3;//focus is set to textBox3
				 cn = gcnew OdbcConnection("dsn=MyDsn1");
				 cn->Open();
				 cm = cn->CreateCommand();

				 cm->CommandText = "SELECT * FROM SIGNUP WHERE USERNAME='" + textBox1->Text + "'";
				 dr = cm->ExecuteReader();
				 if (dr->Read()){
					 MessageBox::Show("Username already exists. Choose a different username.");
					 textBox1->Text = "";
					 textBox2->Text = "";
					 textBox3->Text = "";
					 dr->Close();
					 cn->Close();
				 }
				 else{
					 dr->Close();
					 String ^Cmd = "INSERT INTO SIGNUP (USERNAME, PASSWORD, HOSTEL_NAME) VALUES ('" + textBox1->Text + "', '" + textBox2->Text + "', '" + textBox3->Text + "')";
					 cm->CommandText = Cmd;
					 cm->ExecuteNonQuery();

					 MessageBox::Show("Your account has been successfully created");

					 cn->Close();
					 this->Owner->Show();//Shows the parent form 
					 this->Close();//closes itself
				 }
			 }
			 else{
				 label4->Text = "Caution: Please fill all the fields properly !";
			 }
}
private: System::Void MyForm2_Closing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
}
private: System::Void MyForm2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 this->Owner->Show();
}
};
}
