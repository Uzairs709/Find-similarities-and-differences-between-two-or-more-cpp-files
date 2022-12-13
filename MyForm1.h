#pragma once
#include <msclr\marshal_cppstd.h>
#include<string>
#include"Backend.h"

namespace Orignalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(std::string a, std::string b, std::string c, std::string d, std::string e) {
			InitializeComponent();

			tab1t1->Text = gcnew String(a.c_str());
			tab2t1->Text = gcnew String(a.c_str());
			tab3t1->Text = gcnew String(a.c_str());
			tab4t1->Text = gcnew String(a.c_str());

			tab1t1->ReadOnly = true;
			tab2t1->ReadOnly = true;
			tab3t1->ReadOnly = true;
			tab4t1->ReadOnly = true;


			tab1t2->Text = gcnew String(b.c_str());
			tab2t2->Text = gcnew String(c.c_str());
			tab3t2->Text = gcnew String(d.c_str());
			tab4t2->Text = gcnew String(e.c_str());
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ tab1t1;
	private: System::Windows::Forms::Button^ tab1b2;


	private: System::Windows::Forms::TextBox^ tab1t2;
	private: System::Windows::Forms::RichTextBox^ tab1rt2;


	private: System::Windows::Forms::RichTextBox^ tab1rt1;

	private: System::Windows::Forms::Button^ tab1b1;
	private: System::Windows::Forms::TextBox^ tab1perNon;
	private: System::Windows::Forms::TextBox^ tab1per;




	private: System::Windows::Forms::Button^ tab2b1;

	private: System::Windows::Forms::TextBox^ tab2t1;
	private: System::Windows::Forms::RichTextBox^ tab2rt1;
	private: System::Windows::Forms::TextBox^ tab2per;



	private: System::Windows::Forms::TextBox^ tab2perNon;

	private: System::Windows::Forms::Button^ tab2b2;

	private: System::Windows::Forms::TextBox^ tab2t2;
	private: System::Windows::Forms::RichTextBox^ tab2rt2;


	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Button^ tab3b1;
	private: System::Windows::Forms::Button^ tab3b2;


	private: System::Windows::Forms::TextBox^ tab3t2;

	private: System::Windows::Forms::TextBox^ tab3t1;
	private: System::Windows::Forms::RichTextBox^ tab3rt2;


	private: System::Windows::Forms::RichTextBox^ tab3rt1;
	private: System::Windows::Forms::TextBox^ tab3per;


	private: System::Windows::Forms::TextBox^ tab3perNon;

	private: System::Windows::Forms::TabPage^ tabPage4;

	private: System::Windows::Forms::Button^ tab4b1;
	private: System::Windows::Forms::Button^ tab4b2;
	private: System::Windows::Forms::TextBox^ tab4t1;
	private: System::Windows::Forms::TextBox^ tab4t2;
	private: System::Windows::Forms::TextBox^ tab4perNon;

	private: System::Windows::Forms::TextBox^ tab4per;

	private: System::Windows::Forms::RichTextBox^ tab4rt2;

	private: System::Windows::Forms::RichTextBox^ tab4rt1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tab1perNon = (gcnew System::Windows::Forms::TextBox());
			this->tab1per = (gcnew System::Windows::Forms::TextBox());
			this->tab1b2 = (gcnew System::Windows::Forms::Button());
			this->tab1t2 = (gcnew System::Windows::Forms::TextBox());
			this->tab1rt2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab1rt1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab1b1 = (gcnew System::Windows::Forms::Button());
			this->tab1t1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tab2rt2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab2b2 = (gcnew System::Windows::Forms::Button());
			this->tab2t2 = (gcnew System::Windows::Forms::TextBox());
			this->tab2b1 = (gcnew System::Windows::Forms::Button());
			this->tab2t1 = (gcnew System::Windows::Forms::TextBox());
			this->tab2rt1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab2per = (gcnew System::Windows::Forms::TextBox());
			this->tab2perNon = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tab3b1 = (gcnew System::Windows::Forms::Button());
			this->tab3b2 = (gcnew System::Windows::Forms::Button());
			this->tab3t2 = (gcnew System::Windows::Forms::TextBox());
			this->tab3t1 = (gcnew System::Windows::Forms::TextBox());
			this->tab3rt2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab3rt1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab3per = (gcnew System::Windows::Forms::TextBox());
			this->tab3perNon = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tab4perNon = (gcnew System::Windows::Forms::TextBox());
			this->tab4per = (gcnew System::Windows::Forms::TextBox());
			this->tab4rt2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab4rt1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tab4b1 = (gcnew System::Windows::Forms::Button());
			this->tab4b2 = (gcnew System::Windows::Forms::Button());
			this->tab4t1 = (gcnew System::Windows::Forms::TextBox());
			this->tab4t2 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog5 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Location = System::Drawing::Point(1, 4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1090, 749);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Silver;
			this->tabPage1->Controls->Add(this->tab1perNon);
			this->tabPage1->Controls->Add(this->tab1per);
			this->tabPage1->Controls->Add(this->tab1b2);
			this->tabPage1->Controls->Add(this->tab1t2);
			this->tabPage1->Controls->Add(this->tab1rt2);
			this->tabPage1->Controls->Add(this->tab1rt1);
			this->tabPage1->Controls->Add(this->tab1b1);
			this->tabPage1->Controls->Add(this->tab1t1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1082, 720);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm1::tabPage1_Click);
			// 
			// tab1perNon
			// 
			this->tab1perNon->BackColor = System::Drawing::Color::Silver;
			this->tab1perNon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab1perNon->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab1perNon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab1perNon->Location = System::Drawing::Point(8, 690);
			this->tab1perNon->Multiline = true;
			this->tab1perNon->Name = L"tab1perNon";
			this->tab1perNon->ReadOnly = true;
			this->tab1perNon->Size = System::Drawing::Size(173, 30);
			this->tab1perNon->TabIndex = 8;
			this->tab1perNon->Text = L"Similarity percentage: ";
			// 
			// tab1per
			// 
			this->tab1per->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab1per->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab1per->Location = System::Drawing::Point(199, 690);
			this->tab1per->Multiline = true;
			this->tab1per->Name = L"tab1per";
			this->tab1per->ReadOnly = true;
			this->tab1per->Size = System::Drawing::Size(110, 27);
			this->tab1per->TabIndex = 6;
			// 
			// tab1b2
			// 
			this->tab1b2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab1b2->AutoSize = true;
			this->tab1b2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab1b2->BackColor = System::Drawing::Color::Firebrick;
			this->tab1b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab1b2->ForeColor = System::Drawing::Color::White;
			this->tab1b2->Location = System::Drawing::Point(999, 3);
			this->tab1b2->Name = L"tab1b2";
			this->tab1b2->Size = System::Drawing::Size(76, 30);
			this->tab1b2->TabIndex = 5;
			this->tab1b2->Text = L"Browse";
			this->tab1b2->UseVisualStyleBackColor = false;
			this->tab1b2->Click += gcnew System::EventHandler(this, &MyForm1::tab1b2_Click);
			// 
			// tab1t2
			// 
			this->tab1t2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab1t2->BackColor = System::Drawing::Color::Khaki;
			this->tab1t2->Location = System::Drawing::Point(562, 4);
			this->tab1t2->Name = L"tab1t2";
			this->tab1t2->Size = System::Drawing::Size(415, 22);
			this->tab1t2->TabIndex = 4;
			// 
			// tab1rt2
			// 
			this->tab1rt2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab1rt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab1rt2->Location = System::Drawing::Point(562, 32);
			this->tab1rt2->Name = L"tab1rt2";
			this->tab1rt2->ReadOnly = true;
			this->tab1rt2->Size = System::Drawing::Size(513, 648);
			this->tab1rt2->TabIndex = 3;
			this->tab1rt2->Text = L"";
			// 
			// tab1rt1
			// 
			this->tab1rt1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab1rt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab1rt1->Location = System::Drawing::Point(7, 34);
			this->tab1rt1->Name = L"tab1rt1";
			this->tab1rt1->ReadOnly = true;
			this->tab1rt1->Size = System::Drawing::Size(549, 646);
			this->tab1rt1->TabIndex = 2;
			this->tab1rt1->Text = L"";
			// 
			// tab1b1
			// 
			this->tab1b1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab1b1->AutoSize = true;
			this->tab1b1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab1b1->BackColor = System::Drawing::Color::Firebrick;
			this->tab1b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab1b1->ForeColor = System::Drawing::Color::White;
			this->tab1b1->Location = System::Drawing::Point(480, 4);
			this->tab1b1->Name = L"tab1b1";
			this->tab1b1->Size = System::Drawing::Size(76, 30);
			this->tab1b1->TabIndex = 1;
			this->tab1b1->Text = L"Browse";
			this->tab1b1->UseVisualStyleBackColor = false;
			this->tab1b1->Click += gcnew System::EventHandler(this, &MyForm1::tab1b1_Click);
			// 
			// tab1t1
			// 
			this->tab1t1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab1t1->BackColor = System::Drawing::Color::Khaki;
			this->tab1t1->Location = System::Drawing::Point(7, 6);
			this->tab1t1->Name = L"tab1t1";
			this->tab1t1->Size = System::Drawing::Size(455, 22);
			this->tab1t1->TabIndex = 0;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Silver;
			this->tabPage2->Controls->Add(this->tab2rt2);
			this->tabPage2->Controls->Add(this->tab2b2);
			this->tabPage2->Controls->Add(this->tab2t2);
			this->tabPage2->Controls->Add(this->tab2b1);
			this->tabPage2->Controls->Add(this->tab2t1);
			this->tabPage2->Controls->Add(this->tab2rt1);
			this->tabPage2->Controls->Add(this->tab2per);
			this->tabPage2->Controls->Add(this->tab2perNon);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1082, 720);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm1::tabPage2_Click);
			// 
			// tab2rt2
			// 
			this->tab2rt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab2rt2->Location = System::Drawing::Point(538, 44);
			this->tab2rt2->Name = L"tab2rt2";
			this->tab2rt2->ReadOnly = true;
			this->tab2rt2->Size = System::Drawing::Size(530, 640);
			this->tab2rt2->TabIndex = 16;
			this->tab2rt2->Text = L"";
			// 
			// tab2b2
			// 
			this->tab2b2->AutoSize = true;
			this->tab2b2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab2b2->BackColor = System::Drawing::Color::Firebrick;
			this->tab2b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab2b2->ForeColor = System::Drawing::Color::White;
			this->tab2b2->Location = System::Drawing::Point(970, 6);
			this->tab2b2->Name = L"tab2b2";
			this->tab2b2->Size = System::Drawing::Size(76, 30);
			this->tab2b2->TabIndex = 15;
			this->tab2b2->Text = L"Browse";
			this->tab2b2->UseVisualStyleBackColor = false;
			this->tab2b2->Click += gcnew System::EventHandler(this, &MyForm1::tab2b2_Click);
			// 
			// tab2t2
			// 
			this->tab2t2->BackColor = System::Drawing::Color::Khaki;
			this->tab2t2->Location = System::Drawing::Point(538, 12);
			this->tab2t2->Name = L"tab2t2";
			this->tab2t2->Size = System::Drawing::Size(406, 22);
			this->tab2t2->TabIndex = 14;
			// 
			// tab2b1
			// 
			this->tab2b1->AutoSize = true;
			this->tab2b1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab2b1->BackColor = System::Drawing::Color::Firebrick;
			this->tab2b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab2b1->ForeColor = System::Drawing::Color::White;
			this->tab2b1->Location = System::Drawing::Point(434, 6);
			this->tab2b1->Name = L"tab2b1";
			this->tab2b1->Size = System::Drawing::Size(76, 30);
			this->tab2b1->TabIndex = 13;
			this->tab2b1->Text = L"Browse";
			this->tab2b1->UseVisualStyleBackColor = false;
			this->tab2b1->Click += gcnew System::EventHandler(this, &MyForm1::tab2b1_Click);
			// 
			// tab2t1
			// 
			this->tab2t1->BackColor = System::Drawing::Color::Khaki;
			this->tab2t1->Location = System::Drawing::Point(9, 12);
			this->tab2t1->Name = L"tab2t1";
			this->tab2t1->Size = System::Drawing::Size(406, 22);
			this->tab2t1->TabIndex = 12;
			// 
			// tab2rt1
			// 
			this->tab2rt1->BackColor = System::Drawing::Color::White;
			this->tab2rt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab2rt1->Location = System::Drawing::Point(3, 44);
			this->tab2rt1->Name = L"tab2rt1";
			this->tab2rt1->ReadOnly = true;
			this->tab2rt1->Size = System::Drawing::Size(529, 640);
			this->tab2rt1->TabIndex = 11;
			this->tab2rt1->Text = L"";
			// 
			// tab2per
			// 
			this->tab2per->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab2per->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab2per->Location = System::Drawing::Point(182, 690);
			this->tab2per->Multiline = true;
			this->tab2per->Name = L"tab2per";
			this->tab2per->ReadOnly = true;
			this->tab2per->Size = System::Drawing::Size(110, 27);
			this->tab2per->TabIndex = 10;
			// 
			// tab2perNon
			// 
			this->tab2perNon->BackColor = System::Drawing::Color::Silver;
			this->tab2perNon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab2perNon->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab2perNon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab2perNon->Location = System::Drawing::Point(3, 690);
			this->tab2perNon->Multiline = true;
			this->tab2perNon->Name = L"tab2perNon";
			this->tab2perNon->ReadOnly = true;
			this->tab2perNon->Size = System::Drawing::Size(173, 30);
			this->tab2perNon->TabIndex = 9;
			this->tab2perNon->Text = L"Similarity percentage: ";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::Silver;
			this->tabPage3->Controls->Add(this->tab3b1);
			this->tabPage3->Controls->Add(this->tab3b2);
			this->tabPage3->Controls->Add(this->tab3t2);
			this->tabPage3->Controls->Add(this->tab3t1);
			this->tabPage3->Controls->Add(this->tab3rt2);
			this->tabPage3->Controls->Add(this->tab3rt1);
			this->tabPage3->Controls->Add(this->tab3per);
			this->tabPage3->Controls->Add(this->tab3perNon);
			this->tabPage3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1082, 720);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"tabPage3";
			this->tabPage3->Click += gcnew System::EventHandler(this, &MyForm1::tabPage3_Click);
			// 
			// tab3b1
			// 
			this->tab3b1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab3b1->AutoSize = true;
			this->tab3b1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab3b1->BackColor = System::Drawing::Color::Firebrick;
			this->tab3b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab3b1->ForeColor = System::Drawing::Color::White;
			this->tab3b1->Location = System::Drawing::Point(476, 4);
			this->tab3b1->Name = L"tab3b1";
			this->tab3b1->Size = System::Drawing::Size(76, 30);
			this->tab3b1->TabIndex = 2;
			this->tab3b1->Text = L"Browse";
			this->tab3b1->UseVisualStyleBackColor = false;
			this->tab3b1->Click += gcnew System::EventHandler(this, &MyForm1::tab3b1_Click);
			// 
			// tab3b2
			// 
			this->tab3b2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab3b2->AutoSize = true;
			this->tab3b2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab3b2->BackColor = System::Drawing::Color::Firebrick;
			this->tab3b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab3b2->ForeColor = System::Drawing::Color::White;
			this->tab3b2->Location = System::Drawing::Point(995, 4);
			this->tab3b2->Name = L"tab3b2";
			this->tab3b2->Size = System::Drawing::Size(76, 30);
			this->tab3b2->TabIndex = 3;
			this->tab3b2->Text = L"Browse";
			this->tab3b2->UseVisualStyleBackColor = false;
			this->tab3b2->Click += gcnew System::EventHandler(this, &MyForm1::tab3b2_Click);
			// 
			// tab3t2
			// 
			this->tab3t2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab3t2->BackColor = System::Drawing::Color::Khaki;
			this->tab3t2->Location = System::Drawing::Point(558, 7);
			this->tab3t2->Name = L"tab3t2";
			this->tab3t2->Size = System::Drawing::Size(415, 22);
			this->tab3t2->TabIndex = 1;
			// 
			// tab3t1
			// 
			this->tab3t1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab3t1->BackColor = System::Drawing::Color::Khaki;
			this->tab3t1->Location = System::Drawing::Point(7, 6);
			this->tab3t1->Name = L"tab3t1";
			this->tab3t1->Size = System::Drawing::Size(455, 22);
			this->tab3t1->TabIndex = 2;
			// 
			// tab3rt2
			// 
			this->tab3rt2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab3rt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab3rt2->Location = System::Drawing::Point(558, 35);
			this->tab3rt2->Name = L"tab3rt2";
			this->tab3rt2->ReadOnly = true;
			this->tab3rt2->Size = System::Drawing::Size(513, 648);
			this->tab3rt2->TabIndex = 4;
			this->tab3rt2->Text = L"";
			// 
			// tab3rt1
			// 
			this->tab3rt1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab3rt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab3rt1->Location = System::Drawing::Point(3, 35);
			this->tab3rt1->Name = L"tab3rt1";
			this->tab3rt1->ReadOnly = true;
			this->tab3rt1->Size = System::Drawing::Size(549, 646);
			this->tab3rt1->TabIndex = 3;
			this->tab3rt1->Text = L"";
			// 
			// tab3per
			// 
			this->tab3per->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab3per->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab3per->Location = System::Drawing::Point(170, 685);
			this->tab3per->Multiline = true;
			this->tab3per->Name = L"tab3per";
			this->tab3per->ReadOnly = true;
			this->tab3per->Size = System::Drawing::Size(110, 27);
			this->tab3per->TabIndex = 7;
			// 
			// tab3perNon
			// 
			this->tab3perNon->BackColor = System::Drawing::Color::Silver;
			this->tab3perNon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab3perNon->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab3perNon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab3perNon->Location = System::Drawing::Point(3, 687);
			this->tab3perNon->Multiline = true;
			this->tab3perNon->Name = L"tab3perNon";
			this->tab3perNon->ReadOnly = true;
			this->tab3perNon->Size = System::Drawing::Size(173, 30);
			this->tab3perNon->TabIndex = 9;
			this->tab3perNon->Text = L"Similarity percentage: ";
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::Silver;
			this->tabPage4->Controls->Add(this->tab4perNon);
			this->tabPage4->Controls->Add(this->tab4per);
			this->tabPage4->Controls->Add(this->tab4rt2);
			this->tabPage4->Controls->Add(this->tab4rt1);
			this->tabPage4->Controls->Add(this->tab4b1);
			this->tabPage4->Controls->Add(this->tab4b2);
			this->tabPage4->Controls->Add(this->tab4t1);
			this->tabPage4->Controls->Add(this->tab4t2);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1082, 720);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"tabPage4";
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm1::tabPage4_Click);
			// 
			// tab4perNon
			// 
			this->tab4perNon->BackColor = System::Drawing::Color::Silver;
			this->tab4perNon->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab4perNon->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab4perNon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab4perNon->Location = System::Drawing::Point(7, 690);
			this->tab4perNon->Multiline = true;
			this->tab4perNon->Name = L"tab4perNon";
			this->tab4perNon->ReadOnly = true;
			this->tab4perNon->Size = System::Drawing::Size(173, 30);
			this->tab4perNon->TabIndex = 10;
			this->tab4perNon->Text = L"Similarity percentage: ";
			// 
			// tab4per
			// 
			this->tab4per->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tab4per->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->tab4per->Location = System::Drawing::Point(197, 687);
			this->tab4per->Multiline = true;
			this->tab4per->Name = L"tab4per";
			this->tab4per->ReadOnly = true;
			this->tab4per->Size = System::Drawing::Size(110, 27);
			this->tab4per->TabIndex = 8;
			// 
			// tab4rt2
			// 
			this->tab4rt2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab4rt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab4rt2->Location = System::Drawing::Point(534, 34);
			this->tab4rt2->Name = L"tab4rt2";
			this->tab4rt2->ReadOnly = true;
			this->tab4rt2->Size = System::Drawing::Size(542, 646);
			this->tab4rt2->TabIndex = 5;
			this->tab4rt2->Text = L"";
			// 
			// tab4rt1
			// 
			this->tab4rt1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab4rt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab4rt1->Location = System::Drawing::Point(6, 34);
			this->tab4rt1->Name = L"tab4rt1";
			this->tab4rt1->ReadOnly = true;
			this->tab4rt1->Size = System::Drawing::Size(522, 646);
			this->tab4rt1->TabIndex = 4;
			this->tab4rt1->Text = L"";
			// 
			// tab4b1
			// 
			this->tab4b1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab4b1->AutoSize = true;
			this->tab4b1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab4b1->BackColor = System::Drawing::Color::Firebrick;
			this->tab4b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab4b1->ForeColor = System::Drawing::Color::White;
			this->tab4b1->Location = System::Drawing::Point(436, 1);
			this->tab4b1->Name = L"tab4b1";
			this->tab4b1->Size = System::Drawing::Size(76, 30);
			this->tab4b1->TabIndex = 2;
			this->tab4b1->Text = L"Browse";
			this->tab4b1->UseVisualStyleBackColor = false;
			this->tab4b1->Click += gcnew System::EventHandler(this, &MyForm1::tab4b1_Click);
			// 
			// tab4b2
			// 
			this->tab4b2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab4b2->AutoSize = true;
			this->tab4b2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->tab4b2->BackColor = System::Drawing::Color::Firebrick;
			this->tab4b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tab4b2->ForeColor = System::Drawing::Color::White;
			this->tab4b2->Location = System::Drawing::Point(984, 3);
			this->tab4b2->Name = L"tab4b2";
			this->tab4b2->Size = System::Drawing::Size(76, 30);
			this->tab4b2->TabIndex = 3;
			this->tab4b2->Text = L"Browse";
			this->tab4b2->UseVisualStyleBackColor = false;
			this->tab4b2->Click += gcnew System::EventHandler(this, &MyForm1::tab4b2_Click);
			// 
			// tab4t1
			// 
			this->tab4t1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab4t1->BackColor = System::Drawing::Color::Khaki;
			this->tab4t1->Location = System::Drawing::Point(6, 6);
			this->tab4t1->Name = L"tab4t1";
			this->tab4t1->Size = System::Drawing::Size(424, 22);
			this->tab4t1->TabIndex = 1;
			// 
			// tab4t2
			// 
			this->tab4t2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tab4t2->BackColor = System::Drawing::Color::Khaki;
			this->tab4t2->Location = System::Drawing::Point(534, 6);
			this->tab4t2->Name = L"tab4t2";
			this->tab4t2->Size = System::Drawing::Size(444, 22);
			this->tab4t2->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog2";
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog3";
			// 
			// openFileDialog4
			// 
			this->openFileDialog4->FileName = L"openFileDialog4";
			// 
			// openFileDialog5
			// 
			this->openFileDialog5->FileName = L"openFileDialog5";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1103, 753);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void convertBackslash(std::string& a) {
		for (int i = 0; i < a.size(); i++) {
			if (a[i] == '\\') {
				a[i] = '/';
			}
		}
	}

	private: System::Void tab1b1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "cpp File|*.cpp";
		openFileDialog1->InitialDirectory = "Documents";
		openFileDialog1->Title = "Open cpp File";
		openFileDialog1->ShowDialog();
		string tab1text1 = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		if (tab1text1 != "openFileDialog1") {
			tab1t1->Text = openFileDialog1->FileName;
			tab2t1->Text = openFileDialog1->FileName;
			tab3t1->Text = openFileDialog1->FileName;
			tab4t1->Text = openFileDialog1->FileName;
		}
	}
	private: System::Void tab1b2_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog2->Filter = "cpp File|*.cpp";
		openFileDialog2->InitialDirectory = "Documents";
		openFileDialog2->Title = "Open cpp File";
		openFileDialog2->ShowDialog();
		string tab1text2 = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		if (tab1text2 != "openFileDialog2") {
			tab1t2->Text = openFileDialog2->FileName;
		}
	}
	private: System::Void tab2b2_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog3->Filter = "cpp File|*.cpp";
		openFileDialog3->InitialDirectory = "Documents";
		openFileDialog3->Title = "Open cpp File";
		openFileDialog3->ShowDialog();
		string tab1text3 = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		if (tab1text3 != "openFileDialog3") {
			tab2t2->Text = openFileDialog3->FileName;
		}
	}
	private: System::Void tab3b2_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog4->Filter = "cpp File|*.cpp";
		openFileDialog4->InitialDirectory = "Documents";
		openFileDialog4->Title = "Open cpp File";
		openFileDialog4->ShowDialog();
		string tab1text4 = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		if (tab1text4 != "openFileDialog4") {
			tab3t2->Text = openFileDialog4->FileName;
		}
	}
	private: System::Void tab4b2_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog5->Filter = "cpp File|*.cpp";
		openFileDialog5->InitialDirectory = "Documents";
		openFileDialog5->Title = "Open cpp File";
		openFileDialog5->ShowDialog();
		string tab1text5 = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);
		if (tab1text5 != "openFileDialog5") {
			tab4t2->Text = openFileDialog5->FileName;
		}
	}
	
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tab1t1->Text != "" && tab1t2->Text != "" && tab1t1->Text != "openFileDialodg1" && tab1t2->Text != "openFileDialog2") {
			CLL File2Obj;
			CLL ClassGlobalObject;
			std::string tab1Text1 = msclr::interop::marshal_as<std::string>(tab1t1->Text);
			std::string tab1Text2 = msclr::interop::marshal_as<std::string>(tab1t2->Text);
			this->convertBackslash(tab1Text1);
			this->convertBackslash(tab1Text2);
			File2Obj.ReadFromFile(tab1Text2);
			ClassGlobalObject.ReadFromFile(tab1Text1);
			ClassGlobalObject.compare(File2Obj);
			tab1per->Text = gcnew String(std::to_string(ClassGlobalObject.PercentageOfSimilarity()).c_str());
			int index = 0;

			CLL::node* temp = ClassGlobalObject.head;
			std::string s = "";
			while (temp != ClassGlobalObject.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab1rt1->Text = gcnew String(s.c_str());
			String^ tem = tab1rt1->Text;
			tab1rt1->Text = "";
			tab1rt1->Text = tem;

			temp = ClassGlobalObject.head;
			while (temp != ClassGlobalObject.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab1rt1->Find(tem, index, tab1rt1->TextLength, RichTextBoxFinds::None);
					tab1rt1->SelectionColor = Color::Navy;
					index = tab1rt1->Text->IndexOf(tem, index) + 1;
				}

				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab1rt1->Find(tem, index, tab1rt1->TextLength, RichTextBoxFinds::None);
				tab1rt1->SelectionColor = Color::Navy;
				index = tab1rt1->Text->IndexOf(tem, index) + 1;
			}

			index = 0;
			temp = File2Obj.head;
			s = "";
			while (temp != File2Obj.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab1rt2->Text = gcnew String(s.c_str());
			tem = tab1rt2->Text;
			tab1rt2->Text = "";
			tab1rt2->Text = tem;

			temp = File2Obj.head;
			while (temp != File2Obj.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab1rt2->Find(tem, index, tab1rt2->TextLength, RichTextBoxFinds::None);
					tab1rt2->SelectionColor = Color::Navy;
					index = tab1rt2->Text->IndexOf(tem, index) + 1;
				}
				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab1rt2->Find(tem, index, tab1rt2->TextLength, RichTextBoxFinds::None);
				tab1rt2->SelectionColor = Color::Navy;
				index = tab1rt2->Text->IndexOf(tem, index) + 1;
			}
		}
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tab2t1->Text != "" && tab2t2->Text != "" && tab2t1->Text != "openFileDialodg1" && tab2t2->Text != "openFileDialog2") {
			CLL File2Obj;
			CLL ClassGlobalObject;
			std::string tab2Text1 = msclr::interop::marshal_as<std::string>(tab2t1->Text);
			std::string tab2Text2 = msclr::interop::marshal_as<std::string>(tab2t2->Text);
			this->convertBackslash(tab2Text1);
			this->convertBackslash(tab2Text2);
			File2Obj.ReadFromFile(tab2Text2);
			ClassGlobalObject.ReadFromFile(tab2Text1);
			ClassGlobalObject.compare(File2Obj);
			tab2per->Text = gcnew String(std::to_string(ClassGlobalObject.PercentageOfSimilarity()).c_str());
			int index = 0;

			CLL::node* temp = ClassGlobalObject.head;
			std::string s = "";
			while (temp != ClassGlobalObject.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab2rt1->Text = gcnew String(s.c_str());
			String^ tem = tab2rt1->Text;
			tab2rt1->Text = "";
			tab2rt1->Text = tem;

			temp = ClassGlobalObject.head;
			while (temp != ClassGlobalObject.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab2rt1->Find(tem, index, tab2rt1->TextLength, RichTextBoxFinds::None);
					tab2rt1->SelectionColor = Color::Navy;
					index = tab2rt1->Text->IndexOf(tem, index) + 1;
				}

				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab2rt1->Find(tem, index, tab2rt1->TextLength, RichTextBoxFinds::None);
				tab2rt1->SelectionColor = Color::Navy;
				index = tab2rt1->Text->IndexOf(tem, index) + 1;
			}

			index = 0;
			temp = File2Obj.head;
			s = "";
			while (temp != File2Obj.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab2rt2->Text = gcnew String(s.c_str());
			tem = tab2rt2->Text;
			tab2rt2->Text = "";
			tab2rt2->Text = tem;

			temp = File2Obj.head;
			while (temp != File2Obj.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab2rt2->Find(tem, index, tab2rt2->TextLength, RichTextBoxFinds::None);
					tab2rt2->SelectionColor = Color::Navy;
					index = tab2rt2->Text->IndexOf(tem, index) + 1;
				}
				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab2rt2->Find(tem, index, tab2rt2->TextLength, RichTextBoxFinds::None);
				tab2rt2->SelectionColor = Color::Navy;
				index = tab2rt2->Text->IndexOf(tem, index) + 1;
			}

		}
	}
	private: System::Void tabPage3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tab3t1->Text != "" && tab3t2->Text != "" && tab3t1->Text != "openFileDialodg1" && tab3t2->Text != "openFileDialog2") {
			CLL File2Obj;
			CLL ClassGlobalObject;
			std::string tab3Text1 = msclr::interop::marshal_as<std::string>(tab3t1->Text);
			std::string tab3Text2 = msclr::interop::marshal_as<std::string>(tab3t2->Text);
			this->convertBackslash(tab3Text1);
			this->convertBackslash(tab3Text2);
			File2Obj.ReadFromFile(tab3Text2);
			ClassGlobalObject.ReadFromFile(tab3Text1);
			ClassGlobalObject.compare(File2Obj);
			tab3per->Text = gcnew String(std::to_string(ClassGlobalObject.PercentageOfSimilarity()).c_str());
			int index = 0;

			CLL::node* temp = ClassGlobalObject.head;
			std::string s = "";
			while (temp != ClassGlobalObject.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab3rt1->Text = gcnew String(s.c_str());
			String^ tem = tab3rt1->Text;
			tab3rt1->Text = "";
			tab3rt1->Text = tem;

			temp = ClassGlobalObject.head;
			while (temp != ClassGlobalObject.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab3rt1->Find(tem, index, tab3rt1->TextLength, RichTextBoxFinds::None);
					tab3rt1->SelectionColor = Color::Navy;
					index = tab3rt1->Text->IndexOf(tem, index) + 1;
				}

				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab3rt1->Find(tem, index, tab3rt1->TextLength, RichTextBoxFinds::None);
				tab3rt1->SelectionColor = Color::Navy;
				index = tab3rt1->Text->IndexOf(tem, index) + 1;
			}
			index = 0;
			temp = File2Obj.head;
			s = "";
			while (temp != File2Obj.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab3rt2->Text = gcnew String(s.c_str());
			tem = tab3rt2->Text;
			tab3rt2->Text = "";
			tab3rt2->Text = tem;

			temp = File2Obj.head;
			while (temp != File2Obj.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab3rt2->Find(tem, index, tab3rt2->TextLength, RichTextBoxFinds::None);
					tab3rt2->SelectionColor = Color::Navy;
					index = tab3rt2->Text->IndexOf(tem, index) + 1;
				}
				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab3rt2->Find(tem, index, tab3rt2->TextLength, RichTextBoxFinds::None);
				tab3rt2->SelectionColor = Color::Navy;
				index = tab3rt2->Text->IndexOf(tem, index) + 1;
			}
		}
	}
	private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tab4t1->Text != "" && tab4t2->Text != "" && tab4t1->Text != "openFileDialodg1" && tab4t2->Text != "openFileDialog2") {
			CLL File2Obj;
			CLL ClassGlobalObject;
			std::string tab4Text1 = msclr::interop::marshal_as<std::string>(tab4t1->Text);
			std::string tab4Text2 = msclr::interop::marshal_as<std::string>(tab4t2->Text);
			this->convertBackslash(tab4Text1);
			this->convertBackslash(tab4Text2);
			File2Obj.ReadFromFile(tab4Text2);
			ClassGlobalObject.ReadFromFile(tab4Text1);
			ClassGlobalObject.compare(File2Obj);
			tab4per->Text = gcnew String(std::to_string(ClassGlobalObject.PercentageOfSimilarity()).c_str());
			int index = 0;

			CLL::node* temp = ClassGlobalObject.head;
			std::string s = "";
			while (temp != ClassGlobalObject.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab4rt1->Text = gcnew String(s.c_str());
			String^ tem = tab1rt1->Text;
			tab4rt1->Text = "";
			tab4rt1->Text = tem;

			temp = ClassGlobalObject.head;
			while (temp != ClassGlobalObject.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab4rt1->Find(tem, index, tab4rt1->TextLength, RichTextBoxFinds::None);
					tab4rt1->SelectionColor = Color::Navy;
					index = tab4rt1->Text->IndexOf(tem, index) + 1;
				}

				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab4rt1->Find(tem, index, tab4rt1->TextLength, RichTextBoxFinds::None);
				tab4rt1->SelectionColor = Color::Navy;
				index = tab4rt1->Text->IndexOf(tem, index) + 1;
			}
			index = 0;
			temp = File2Obj.head;
			s = "";
			while (temp != File2Obj.tail) {
				s += temp->statement;
				s += "\n";
				temp = temp->next;
			}
			s += temp->statement;
			s += "\0";

			tab4rt2->Text = gcnew String(s.c_str());
			tem = tab4rt2->Text;
			tab4rt2->Text = "";
			tab4rt2->Text = tem;

			temp = File2Obj.head;
			while (temp != File2Obj.tail) {
				if (temp->isMatched) {
					tem = gcnew String(temp->statement.c_str());
					tab4rt2->Find(tem, index, tab4rt2->TextLength, RichTextBoxFinds::None);
					tab4rt2->SelectionColor = Color::Navy;
					index = tab4rt2->Text->IndexOf(tem, index) + 1;
				}
				temp = temp->next;
			}
			if (temp->isMatched) {
				tem = gcnew String(temp->statement.c_str());
				tab4rt2->Find(tem, index, tab4rt2->TextLength, RichTextBoxFinds::None);
				tab4rt2->SelectionColor = Color::Navy;
				index = tab4rt2->Text->IndexOf(tem, index) + 1;
			}
		}
	}

	private: System::Void tab4b1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog5->Filter = "cpp File|*.cpp";
		openFileDialog5->InitialDirectory = "Documents";
		openFileDialog5->Title = "Open cpp File";
		openFileDialog5->ShowDialog();
		string tab4text1 = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);
		if (tab4text1 != "openFileDialog1") {
			tab1t1->Text = openFileDialog5->FileName;
			tab2t1->Text = openFileDialog5->FileName;
			tab3t1->Text = openFileDialog5->FileName;
			tab4t1->Text = openFileDialog5->FileName;
		}
	}
	private: System::Void tab3b1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog4->Filter = "cpp File|*.cpp";
		openFileDialog4->InitialDirectory = "Documents";
		openFileDialog4->Title = "Open cpp File";
		openFileDialog4->ShowDialog();
		string tab3text1 = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		if (tab3text1 != "openFileDialog1") {
			tab1t1->Text = openFileDialog4->FileName;
			tab2t1->Text = openFileDialog4->FileName;
			tab3t1->Text = openFileDialog4->FileName;
			tab4t1->Text = openFileDialog4->FileName;
		}
	}
	private: System::Void tab2b1_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog3->Filter = "cpp File|*.cpp";
		openFileDialog3->InitialDirectory = "Documents";
		openFileDialog3->Title = "Open cpp File";
		openFileDialog3->ShowDialog();
		string tab3text1 = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		if (tab3text1 != "openFileDialog1") {
			tab1t1->Text = openFileDialog3->FileName;
			tab2t1->Text = openFileDialog3->FileName;
			tab3t1->Text = openFileDialog3->FileName;
			tab4t1->Text = openFileDialog3->FileName;
		}
	}
};
}
