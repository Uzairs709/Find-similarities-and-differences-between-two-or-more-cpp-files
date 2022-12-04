#pragma once
#include <msclr\marshal_cppstd.h>
#include"MyForm1.h"
namespace Orignalproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ File1;
	protected:
	private: System::Windows::Forms::Button^ cpp1file;
	private: System::Windows::Forms::TextBox^ File2;
	private: System::Windows::Forms::TextBox^ File5;
	private: System::Windows::Forms::TextBox^ File3;
	private: System::Windows::Forms::TextBox^ File4;
	private: System::Windows::Forms::Button^ cpp2file;
	private: System::Windows::Forms::Button^ cpp3file;
	private: System::Windows::Forms::Button^ cpp4file;
	private: System::Windows::Forms::Button^ cpp5file;
	private: System::Windows::Forms::Button^ compare;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog3;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->File1 = (gcnew System::Windows::Forms::TextBox());
			this->cpp1file = (gcnew System::Windows::Forms::Button());
			this->File2 = (gcnew System::Windows::Forms::TextBox());
			this->File5 = (gcnew System::Windows::Forms::TextBox());
			this->File3 = (gcnew System::Windows::Forms::TextBox());
			this->File4 = (gcnew System::Windows::Forms::TextBox());
			this->cpp2file = (gcnew System::Windows::Forms::Button());
			this->cpp3file = (gcnew System::Windows::Forms::Button());
			this->cpp4file = (gcnew System::Windows::Forms::Button());
			this->cpp5file = (gcnew System::Windows::Forms::Button());
			this->compare = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog4 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->openFileDialog5 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// File1
			// 
			this->File1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->File1->BackColor = System::Drawing::Color::Khaki;
			this->File1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->File1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->File1->Location = System::Drawing::Point(56, 152);
			this->File1->MaxLength = 150;
			this->File1->Name = L"File1";
			this->File1->ReadOnly = true;
			this->File1->Size = System::Drawing::Size(365, 26);
			this->File1->TabIndex = 0;
			// 
			// cpp1file
			// 
			this->cpp1file->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cpp1file->AutoSize = true;
			this->cpp1file->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->cpp1file->BackColor = System::Drawing::Color::Firebrick;
			this->cpp1file->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cpp1file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpp1file->ForeColor = System::Drawing::Color::White;
			this->cpp1file->Location = System::Drawing::Point(427, 152);
			this->cpp1file->Name = L"cpp1file";
			this->cpp1file->Size = System::Drawing::Size(76, 30);
			this->cpp1file->TabIndex = 1;
			this->cpp1file->Text = L"Browse";
			this->cpp1file->UseVisualStyleBackColor = false;
			this->cpp1file->Click += gcnew System::EventHandler(this, &MyForm::cpp1file_Click);
			// 
			// File2
			// 
			this->File2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->File2->BackColor = System::Drawing::Color::Khaki;
			this->File2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->File2->Location = System::Drawing::Point(56, 228);
			this->File2->MaxLength = 150;
			this->File2->Name = L"File2";
			this->File2->Size = System::Drawing::Size(365, 26);
			this->File2->TabIndex = 2;
			// 
			// File5
			// 
			this->File5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->File5->BackColor = System::Drawing::Color::Khaki;
			this->File5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->File5->Location = System::Drawing::Point(56, 462);
			this->File5->MaxLength = 150;
			this->File5->Name = L"File5";
			this->File5->Size = System::Drawing::Size(365, 26);
			this->File5->TabIndex = 3;
			// 
			// File3
			// 
			this->File3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->File3->BackColor = System::Drawing::Color::Khaki;
			this->File3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->File3->Location = System::Drawing::Point(56, 304);
			this->File3->MaxLength = 150;
			this->File3->Name = L"File3";
			this->File3->Size = System::Drawing::Size(365, 26);
			this->File3->TabIndex = 4;
			// 
			// File4
			// 
			this->File4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->File4->BackColor = System::Drawing::Color::Khaki;
			this->File4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->File4->Location = System::Drawing::Point(56, 386);
			this->File4->MaxLength = 150;
			this->File4->Name = L"File4";
			this->File4->Size = System::Drawing::Size(365, 26);
			this->File4->TabIndex = 5;
			// 
			// cpp2file
			// 
			this->cpp2file->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cpp2file->AutoSize = true;
			this->cpp2file->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->cpp2file->BackColor = System::Drawing::Color::Firebrick;
			this->cpp2file->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cpp2file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpp2file->ForeColor = System::Drawing::Color::White;
			this->cpp2file->Location = System::Drawing::Point(427, 228);
			this->cpp2file->Name = L"cpp2file";
			this->cpp2file->Size = System::Drawing::Size(76, 30);
			this->cpp2file->TabIndex = 6;
			this->cpp2file->Text = L"Browse";
			this->cpp2file->UseVisualStyleBackColor = false;
			this->cpp2file->Click += gcnew System::EventHandler(this, &MyForm::cpp2file_Click);
			// 
			// cpp3file
			// 
			this->cpp3file->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cpp3file->AutoSize = true;
			this->cpp3file->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->cpp3file->BackColor = System::Drawing::Color::Firebrick;
			this->cpp3file->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cpp3file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpp3file->ForeColor = System::Drawing::Color::White;
			this->cpp3file->Location = System::Drawing::Point(427, 304);
			this->cpp3file->Name = L"cpp3file";
			this->cpp3file->Size = System::Drawing::Size(76, 30);
			this->cpp3file->TabIndex = 7;
			this->cpp3file->Text = L"Browse";
			this->cpp3file->UseVisualStyleBackColor = false;
			this->cpp3file->Click += gcnew System::EventHandler(this, &MyForm::cpp3file_Click);
			// 
			// cpp4file
			// 
			this->cpp4file->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cpp4file->AutoSize = true;
			this->cpp4file->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->cpp4file->BackColor = System::Drawing::Color::Firebrick;
			this->cpp4file->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cpp4file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpp4file->ForeColor = System::Drawing::Color::White;
			this->cpp4file->Location = System::Drawing::Point(427, 386);
			this->cpp4file->Name = L"cpp4file";
			this->cpp4file->Size = System::Drawing::Size(76, 30);
			this->cpp4file->TabIndex = 8;
			this->cpp4file->Text = L"Browse";
			this->cpp4file->UseVisualStyleBackColor = false;
			this->cpp4file->Click += gcnew System::EventHandler(this, &MyForm::cpp4file_Click);
			// 
			// cpp5file
			// 
			this->cpp5file->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->cpp5file->AutoSize = true;
			this->cpp5file->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->cpp5file->BackColor = System::Drawing::Color::Firebrick;
			this->cpp5file->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cpp5file->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cpp5file->ForeColor = System::Drawing::Color::White;
			this->cpp5file->Location = System::Drawing::Point(427, 462);
			this->cpp5file->Name = L"cpp5file";
			this->cpp5file->Size = System::Drawing::Size(76, 30);
			this->cpp5file->TabIndex = 9;
			this->cpp5file->Text = L"Browse";
			this->cpp5file->UseVisualStyleBackColor = false;
			this->cpp5file->Click += gcnew System::EventHandler(this, &MyForm::cpp5file_Click);
			// 
			// compare
			// 
			this->compare->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->compare->AutoSize = true;
			this->compare->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->compare->BackColor = System::Drawing::Color::Firebrick;
			this->compare->Cursor = System::Windows::Forms::Cursors::Hand;
			this->compare->Enabled = false;
			this->compare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->compare->ForeColor = System::Drawing::Color::White;
			this->compare->Location = System::Drawing::Point(465, 535);
			this->compare->Name = L"compare";
			this->compare->Size = System::Drawing::Size(87, 30);
			this->compare->TabIndex = 10;
			this->compare->Text = L"Compare";
			this->compare->UseVisualStyleBackColor = false;
			this->compare->Visible = false;
			this->compare->Click += gcnew System::EventHandler(this, &MyForm::compare_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1o";
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
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Silver;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::Maroon;
			this->richTextBox1->Location = System::Drawing::Point(95, 80);
			this->richTextBox1->Multiline = false;
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(326, 32);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"Compare Two or More CPP Files";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(633, 604);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->File1);
			this->Controls->Add(this->compare);
			this->Controls->Add(this->cpp5file);
			this->Controls->Add(this->cpp4file);
			this->Controls->Add(this->cpp3file);
			this->Controls->Add(this->cpp2file);
			this->Controls->Add(this->File4);
			this->Controls->Add(this->File3);
			this->Controls->Add(this->File5);
			this->Controls->Add(this->File2);
			this->Controls->Add(this->cpp1file);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cpp1file_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->Filter = "cpp File|*.cpp";
		openFileDialog1->InitialDirectory = "Documents";
		openFileDialog1->Title = "Open cpp File";
		openFileDialog1->ShowDialog();
		File1->Text = openFileDialog1->FileName;
		std::string a = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::string b = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		std::string c = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		std::string d = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		std::string E = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);

		if ((a != "" && b != ""&&a!="openFileDialog1"&& b != "openFileDialog2") || (a != "" && c != "" && a != "openFileDialog1" && c != "openFileDialog3") || (a != "" && d != "" && a != "openFileDialog1" && d != "openFileDialog4") || (a != "" && E != "" && a != "openFileDialog1" && E != "openFileDialog5")) {
			compare->Visible = true;
			compare->Enabled = true;
		}
	}
	private: System::Void cpp2file_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog2->Filter = "cpp File|*.cpp";
		openFileDialog2->InitialDirectory = "Documents";
		openFileDialog2->Title = "Open cpp File";
		openFileDialog2->ShowDialog();
		File2->Text = openFileDialog2->FileName;
		std::string a = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::string b = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		std::string c = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		std::string d = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		std::string E = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);

		
		if ((a != "" && b != "") || (a != "" && c != "") || (a != "" && d != "") || (a != "" && E != "")) {
			compare->Visible = true;
			compare->Enabled = true;
		}
	}
	private: System::Void cpp3file_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog3->Filter = "cpp File|*.cpp";
		openFileDialog3->InitialDirectory = "Documents";
		openFileDialog3->Title = "Open cpp File";
		openFileDialog3->ShowDialog();
		File3->Text = openFileDialog3->FileName;
		std::string a = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::string b = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		std::string c = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		std::string d = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		std::string E = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);

		if ((a != "" && b != "") || (a != "" && c != "") || (a != "" && d != "") || (a != "" && E != "")) {
			compare->Visible = true;
			compare->Enabled = true;
		}
	}
	private: System::Void cpp4file_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog4->Filter = "cpp File|*.cpp";
		openFileDialog4->InitialDirectory = "Documents";
		openFileDialog4->Title = "Open cpp File";
		openFileDialog4->ShowDialog();
		File4->Text = openFileDialog4->FileName;
		std::string a = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::string b = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		std::string c = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		std::string d = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		std::string E = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);

		if ((a != "" && b != "") || (a != "" && c != "") || (a != "" && d != "") || (a != "" && E != "")) {
			compare->Visible = true;
			compare->Enabled = true;
		}
	}
	private: System::Void cpp5file_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog5->Filter = "cpp File|*.cpp";
		openFileDialog5->InitialDirectory = "Documents";
		openFileDialog5->Title = "Open cpp File";
		openFileDialog5->ShowDialog();
		File5->Text = openFileDialog5->FileName;
		std::string a = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::string b = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		std::string c = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		std::string d = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		std::string E = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);

		if ((a != "" && b != "") || (a != "" && c != "") || (a != "" && d != "") || (a != "" && E != "")) {
			compare->Visible = true;
			compare->Enabled = true;
		}
	}
	private: System::Void compare_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string a = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
		std::string b = msclr::interop::marshal_as<std::string>(openFileDialog2->FileName);
		std::string c = msclr::interop::marshal_as<std::string>(openFileDialog3->FileName);
		std::string d = msclr::interop::marshal_as<std::string>(openFileDialog4->FileName);
		std::string E = msclr::interop::marshal_as<std::string>(openFileDialog5->FileName);


		if (a == "openFileDialog1") {
			a = "";
		}if (b == "openFileDialog2") {
			b = "";
		}if (b == "openFileDialog3") {
			b = "";
		}if (b == "openFileDialog4") {
			b = "";
		}if (b == "openFileDialog5") {
			b = "";
		}
		if (a == "") {
			MessageBox::Show("Selection Of file 1 is compulsary", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		if (a != "") {
			MyForm1^ obj = gcnew MyForm1(a, b, c, d, E);

			this->Hide();
			obj->Show();
		}
	}
	};
}
