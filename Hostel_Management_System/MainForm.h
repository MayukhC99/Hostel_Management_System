#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "Registration.h"
#include "GuestRegistration.h"
#include "Glob.h"

namespace Hostel_Management_System {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  getInToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loginToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  signupToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  registerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  permanentRegistrationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  localRegistrationToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;


	protected:



	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->getInToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->signupToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->permanentRegistrationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->localRegistrationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->getInToolStripMenuItem,
					this->registerToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(461, 29);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// getInToolStripMenuItem
			// 
			this->getInToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->loginToolStripMenuItem,
					this->signupToolStripMenuItem, this->logoutToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->getInToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->getInToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->getInToolStripMenuItem->Name = L"getInToolStripMenuItem";
			this->getInToolStripMenuItem->Size = System::Drawing::Size(70, 25);
			this->getInToolStripMenuItem->Text = L"Get In";
			// 
			// loginToolStripMenuItem
			// 
			this->loginToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->loginToolStripMenuItem->Name = L"loginToolStripMenuItem";
			this->loginToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->loginToolStripMenuItem->Text = L"Login";
			this->loginToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::loginToolStripMenuItem_Click);
			// 
			// signupToolStripMenuItem
			// 
			this->signupToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->signupToolStripMenuItem->Name = L"signupToolStripMenuItem";
			this->signupToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->signupToolStripMenuItem->Text = L"Signup";
			this->signupToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::signupToolStripMenuItem_Click);
			// 
			// logoutToolStripMenuItem
			// 
			this->logoutToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->logoutToolStripMenuItem->Name = L"logoutToolStripMenuItem";
			this->logoutToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->logoutToolStripMenuItem->Text = L"Logout";
			this->logoutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::logoutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(136, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// registerToolStripMenuItem
			// 
			this->registerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->permanentRegistrationToolStripMenuItem,
					this->localRegistrationToolStripMenuItem
			});
			this->registerToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->registerToolStripMenuItem->Name = L"registerToolStripMenuItem";
			this->registerToolStripMenuItem->Size = System::Drawing::Size(88, 25);
			this->registerToolStripMenuItem->Text = L"Register";
			// 
			// permanentRegistrationToolStripMenuItem
			// 
			this->permanentRegistrationToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->permanentRegistrationToolStripMenuItem->Name = L"permanentRegistrationToolStripMenuItem";
			this->permanentRegistrationToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->permanentRegistrationToolStripMenuItem->Text = L"Registration";
			this->permanentRegistrationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::permanentRegistrationToolStripMenuItem_Click);
			// 
			// localRegistrationToolStripMenuItem
			// 
			this->localRegistrationToolStripMenuItem->ForeColor = System::Drawing::Color::Gold;
			this->localRegistrationToolStripMenuItem->Name = L"localRegistrationToolStripMenuItem";
			this->localRegistrationToolStripMenuItem->Size = System::Drawing::Size(228, 26);
			this->localRegistrationToolStripMenuItem->Text = L"Guest Registration";
			this->localRegistrationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::localRegistrationToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkOrange;
			this->label1->Location = System::Drawing::Point(2, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 25);
			this->label1->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(461, 438);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MyForm_Close);
			this->Load += gcnew System::EventHandler(this, &MainForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void loginToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MyForm1 ^login = gcnew MyForm1();
				 login->Owner = this;
				 //this->WindowState = FormWindowState::Minimized;
				 login->ShowDialog();

				 if (Glob::us->Length != 0){
					 label1->Text = "Welcome " + Glob::us;
					 this->loginToolStripMenuItem->Enabled = false;
					 this->signupToolStripMenuItem->Enabled = false;
					 this->logoutToolStripMenuItem->Enabled = true;
					 this->registerToolStripMenuItem->Enabled = true;

				 }
				 //login->WindowState = FormWindowState::Normal;
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->logoutToolStripMenuItem->Enabled = false;
			 this->registerToolStripMenuItem->Enabled = false;
}
private: System::Void signupToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 MyForm2 ^signup = gcnew MyForm2();
			 signup->Owner = this;
			 signup->ShowDialog();
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
}
private: System::Void MyForm_Close(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void logoutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 label1->Text = "";
			 Glob::us = "";
			 this->logoutToolStripMenuItem->Enabled = false;
			 this->loginToolStripMenuItem->Enabled = true;
			 this->signupToolStripMenuItem->Enabled = true;
			 MessageBox::Show("You have successfully LogedOut !");
}
private: System::Void permanentRegistrationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Registration^ registration = gcnew Registration();
			 registration->Owner = this;
			 Glob::type = "Permanent";
			 registration->ShowDialog();
}
private: System::Void localRegistrationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Registration^ registration = gcnew Registration();
			 registration->Owner = this;
			 Glob::type = "Guest";
			 registration->ShowDialog();
}
};
}
