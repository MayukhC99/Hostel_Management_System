#pragma once
#include "Glob.h"

namespace Hostel_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Odbc;

	/// <summary>
	/// Summary for CheckOut
	/// </summary>
	public ref class CheckOut : public System::Windows::Forms::Form
	{
		OdbcConnection ^cn;
		OdbcCommand ^cm;
		OdbcDataAdapter ^da;
		DataTable ^dt;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
			 OdbcDataReader ^dr;

	public:
		CheckOut(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			cn = gcnew OdbcConnection("dsn=MyDsn1");
			cn->Open();
			cm = cn->CreateCommand();
			dt = gcnew DataTable();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CheckOut()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckOut::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 139);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(744, 447);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CheckOut::dataGridView1_CellContentClick);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(136, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 29);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &CheckOut::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(12, 99);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(118, 29);
			this->textBox3->TabIndex = 3;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 44);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(118, 29);
			this->comboBox1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(655, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 29);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Salmon;
			this->label1->Location = System::Drawing::Point(578, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Reg_ID :";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Salmon;
			this->button1->Location = System::Drawing::Point(655, 71);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 30);
			this->button1->TabIndex = 7;
			this->button1->Text = L"CheckOut";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CheckOut::button1_Click);
			// 
			// CheckOut
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(751, 586);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"CheckOut";
			this->Text = L"CheckOut";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CheckOut::CheckOut_FormClosing);
			this->Load += gcnew System::EventHandler(this, &CheckOut::CheckOut_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CheckOut_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Hide();
				 this->comboBox1->Items->Add("Full_Name");
				 this->comboBox1->Items->Add("Date_Time");
				 this->comboBox1->Items->Add("Contact");
				 comboBox1->Text = "Full_Name";
				 this->textBox2->Text = "";
				 //comboBox1->SelectedItem = null;
				 comboBox1->SelectedText = "Full_Name";
				 this->textBox3->Text = Glob::type;
				 Glob::type = "";

				 cm->CommandText = "SELECT * FROM REGISTRATION WHERE Reg_Type='" + textBox3->Text + "' AND Username='" + Glob::us + "'";
				 da = gcnew OdbcDataAdapter(cm);
				 da->Fill(dt);
				 dataGridView1->DataSource = dt;
				 //dataGridView1->Enabled = false;
	}
	private: System::Void CheckOut_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 if (cn->State == ConnectionState::Open)
					 cn->Close();
				 this->Owner->Show();
	}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 dt->Clear();
			 dataGridView1->DataSource = dt;
			 cm->CommandText = "SELECT * FROM REGISTRATION WHERE " + comboBox1->Text + " LIKE '%" + textBox2->Text + "%' AND Reg_Type= '" + textBox3->Text + "' AND Username='" + Glob::us + "'";
			 da = gcnew OdbcDataAdapter(cm);
			 da->Fill(dt);
			 dataGridView1->DataSource = dt;
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != ""){
				 cm->CommandText = "SELECT * FROM REGISTRATION where Reg_ID=" + textBox1->Text + " AND Username='" + Glob::us + "'";
				 //MessageBox::Show(cm->CommandText);
				 dr = cm->ExecuteReader();
				 if (dr->Read())
				 {
										//MessageBox::Show("check 1");
					 String^ regid = textBox1->Text;
					 String^ username = Glob::us;
					 String^ fullname = dr->GetString(2);//dr["Full_Name"]->ToString();
					 String^ email = dr->GetString(3);//dr["Email"]->ToString();
					 String^ gender = dr->GetString(4);//dr["Gender"]->ToString();
					 String^ contact = dr->GetString(5);//dr["Contact"]->ToString();
					 String^ image = dr->GetString(6);//dr["Image"]->ToString();
					 String^ regtype = dr->GetString(7);//dr["Reg_Type"]->ToString();
					 String^ indate = dr->GetString(8);//dr["Date_Time"]->ToString();
					 DateTime^ dat = DateTime::Now;
					 String^ outdate = dat->ToString("dd-MM-yyyy hh:mm:ss");

					 dr->Close();
										//MessageBox::Show("check 2");
					 String^ ext= "INSERT INTO LogBook (Reg_ID,Username,Full_Name,Email,Gender,Contact,Image,Reg_Type,InDate_Time,OutDate_Time) VALUES (" + regid + ", '" + username + "', '" + fullname + "', '" + email + "', '" + gender + "', '" + contact + "', '" + image + "', '" + regtype + "', '" + indate + "', '" + outdate + "')";
											//MessageBox::Show(ext);
					 cm->CommandText = ext;
					 cm->ExecuteNonQuery();
										//MessageBox::Show("check 3");
					 cm->CommandText = "DELETE FROM REGISTRATION WHERE Reg_ID=" + textBox1->Text;
					 cm->ExecuteNonQuery();

					 //textBox2->Text = "";
					 dt->Clear();
					 dataGridView1->DataSource = dt;
					 cm->CommandText = "SELECT * FROM REGISTRATION WHERE " + comboBox1->Text + " LIKE '%" + textBox2->Text + "%' AND Reg_Type= '" + textBox3->Text + "' AND Username='" + Glob::us + "'";
					 da = gcnew OdbcDataAdapter(cm);
					 da->Fill(dt);
					 dataGridView1->DataSource = dt;

					 MessageBox::Show("Candidate has been CheckedOut !");
				 }
				 else {
					 dr->Close();
					 MessageBox::Show("Wrong Entry !");
				 }
			 }
}
};
}
