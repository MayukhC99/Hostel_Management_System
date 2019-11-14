#pragma once
#include "Glob.h"

namespace Hostel_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Registration
	/// </summary>
	public ref class Registration : public System::Windows::Forms::Form
	{
	public:
		Registration(void)
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
		~Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
			 String^ type;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Registration::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Location = System::Drawing::Point(532, 21);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(109, 173);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(7, 9);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(97, 121);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DodgerBlue;
			this->button1->Location = System::Drawing::Point(7, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 33);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Upload";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registration::button1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->ForeColor = System::Drawing::Color::SpringGreen;
			this->groupBox2->Location = System::Drawing::Point(12, 21);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(514, 373);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Student Registration";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(180, 198);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(327, 26);
			this->comboBox1->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::DarkGreen;
			this->button3->Location = System::Drawing::Point(375, 315);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Registration::button3_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::SeaGreen;
			this->button2->Location = System::Drawing::Point(212, 315);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 46);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Registration::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(178, 253);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(330, 25);
			this->textBox4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(178, 139);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(330, 25);
			this->textBox3->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(178, 88);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(330, 25);
			this->textBox2->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(178, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(330, 25);
			this->textBox1->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Magenta;
			this->label5->Location = System::Drawing::Point(6, 253);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(166, 19);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Registration_Type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Magenta;
			this->label4->Location = System::Drawing::Point(6, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Gender:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Magenta;
			this->label3->Location = System::Drawing::Point(6, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 19);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Contact Number:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Magenta;
			this->label2->Location = System::Drawing::Point(6, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 19);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Email:";
			this->label2->Click += gcnew System::EventHandler(this, &Registration::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Magenta;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Full Name:";
			// 
			// Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(669, 407);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Registration";
			this->ShowInTaskbar = false;
			this->Text = L"Registration";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Registration::Registration_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Registration::Registration_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: static String^ Chosen_File;
		public: static void getfile() {
			Windows::Forms::OpenFileDialog^ openFileDialogAvi = gcnew OpenFileDialog;
			openFileDialogAvi->Title = "Select Image";
			openFileDialogAvi->InitialDirectory = "C:";
			openFileDialogAvi->Filter = "Image files (*.jpeg)|*.jpeg|Image files (*.png)|*.png|Image files (*.jpg)|*.jpg";
			openFileDialogAvi->AutoUpgradeEnabled = true;
			if (openFileDialogAvi->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				Chosen_File = openFileDialogAvi->FileName;
				//String^ inputExt = (Path->GetExtension(Chosen_File).ToLower());
				//MessageBox::Show(Chosen_File);
			}
		}

	private: System::Void Registration_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Owner->Hide();
				 this->comboBox1->Items->Add("Male");
				 this->comboBox1->Items->Add("Female");
				 this->comboBox1->Items->Add("Other");
				 type = Glob::type;
				 Glob::type = "";
				 this->textBox4->Text = type;
	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 Threading::Thread^ threadGetFile = gcnew Threading::Thread(gcnew Threading::ThreadStart(&Registration::getfile));
			 threadGetFile->ApartmentState = Threading::ApartmentState::STA;
			 threadGetFile->Start();
			 threadGetFile->Join();
			 pictureBox1->Image = Image::FromFile(Chosen_File);
			 Chosen_File = "";
			
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Owner->Show();
			 this->Close();

}
private: System::Void Registration_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 this->Owner->Show();
}
};
}
