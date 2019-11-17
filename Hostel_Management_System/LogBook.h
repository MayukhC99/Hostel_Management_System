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
	/// Summary for LogBook
	/// </summary>
	public ref class LogBook : public System::Windows::Forms::Form
	{

		OdbcConnection ^cn;
		OdbcCommand ^cm;
		OdbcDataAdapter ^da;
		DataTable ^dt;
		OdbcDataReader ^dr;

	public:
		LogBook(void)
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
		~LogBook()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(LogBook::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(2, 42);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(118, 29);
			this->comboBox1->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(126, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 29);
			this->textBox2->TabIndex = 6;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &LogBook::textBox2_TextChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(2, 116);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(735, 447);
			this->dataGridView1->TabIndex = 5;
			// 
			// LogBook
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(739, 565);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"LogBook";
			this->Text = L"LogBook";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &LogBook::LogBook_FormClosing);
			this->Load += gcnew System::EventHandler(this, &LogBook::LogBook_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LogBook_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Hide();
				 this->comboBox1->Items->Add("Full_Name");
				 this->comboBox1->Items->Add("InDate_Time");
				 this->comboBox1->Items->Add("OutDate_Time");
				 this->comboBox1->Items->Add("Contact");
				 this->comboBox1->Items->Add("Reg_Type");
				 comboBox1->Text = "Full_Name";
				 this->textBox2->Text = "";
				 //comboBox1->SelectedItem = null;
				 comboBox1->SelectedText = "Full_Name";

				 cm->CommandText = "SELECT * FROM LOGBOOK WHERE UserName='" + Glob::us + "'";
				 da = gcnew OdbcDataAdapter(cm);
				 da->Fill(dt);
				 dataGridView1->DataSource = dt;
				 //dataGridView1->Enabled = false;
	}
	private: System::Void LogBook_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 if (cn->State == ConnectionState::Open)
					 cn->Close();
				 this->Owner->Show();
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 dt->Clear();
			 dataGridView1->DataSource = dt;
			 cm->CommandText = "SELECT * FROM LOGBOOK WHERE " + comboBox1->Text + " LIKE '%" + textBox2->Text + "%' AND Username='" + Glob::us + "'";
			 da = gcnew OdbcDataAdapter(cm);
			 da->Fill(dt);
			 dataGridView1->DataSource = dt;
}
};
}
