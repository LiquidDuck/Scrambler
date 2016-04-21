#pragma once

namespace Cipher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  Vigenere;
	private: System::Windows::Forms::TextBox^  KeyWord;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Input;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  Caesar;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Shift;

	private:


	private: System::Windows::Forms::ComboBox^  Direction;
	private: System::Windows::Forms::Button^  Encrypt;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Vigenere = (gcnew System::Windows::Forms::RadioButton());
			this->KeyWord = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Caesar = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Shift = (gcnew System::Windows::Forms::TextBox());
			this->Direction = (gcnew System::Windows::Forms::ComboBox());
			this->Encrypt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Vigenere
			// 
			this->Vigenere->AutoSize = true;
			this->Vigenere->Location = System::Drawing::Point(573, 603);
			this->Vigenere->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Vigenere->Name = L"Vigenere";
			this->Vigenere->Size = System::Drawing::Size(160, 24);
			this->Vigenere->TabIndex = 0;
			this->Vigenere->TabStop = true;
			this->Vigenere->Text = L"Шифр Виженера";
			this->Vigenere->UseVisualStyleBackColor = true;
			this->Vigenere->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Vigenere_CheckedChanged);
			// 
			// KeyWord
			// 
			this->KeyWord->Location = System::Drawing::Point(540, 665);
			this->KeyWord->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->KeyWord->Name = L"KeyWord";
			this->KeyWord->Size = System::Drawing::Size(217, 26);
			this->KeyWord->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(392, 669);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ключевое слово:";
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(72, 88);
			this->Input->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Input->Multiline = true;
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(661, 178);
			this->Input->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 43);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Текст для шифрования:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 369);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(661, 178);
			this->textBox1->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 326);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Зашифрованный текст:";
			// 
			// Caesar
			// 
			this->Caesar->AutoSize = true;
			this->Caesar->Location = System::Drawing::Point(72, 603);
			this->Caesar->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Caesar->Name = L"Caesar";
			this->Caesar->Size = System::Drawing::Size(140, 24);
			this->Caesar->TabIndex = 7;
			this->Caesar->TabStop = true;
			this->Caesar->Text = L"Шифр Цезаря";
			this->Caesar->UseVisualStyleBackColor = true;
			this->Caesar->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Caesar_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 669);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Сдвиг:";
			// 
			// Shift
			// 
			this->Shift->Location = System::Drawing::Point(102, 665);
			this->Shift->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Shift->Name = L"Shift";
			this->Shift->Size = System::Drawing::Size(70, 26);
			this->Shift->TabIndex = 9;
			// 
			// Direction
			// 
			this->Direction->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Direction->FormattingEnabled = true;
			this->Direction->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"влево", L"вправо" });
			this->Direction->Location = System::Drawing::Point(226, 665);
			this->Direction->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Direction->Name = L"Direction";
			this->Direction->Size = System::Drawing::Size(91, 28);
			this->Direction->TabIndex = 10;
			this->Direction->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::Direction_SelectedIndexChanged);
			// 
			// Encrypt
			// 
			this->Encrypt->Location = System::Drawing::Point(279, 740);
			this->Encrypt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Encrypt->Name = L"Encrypt";
			this->Encrypt->Size = System::Drawing::Size(252, 68);
			this->Encrypt->TabIndex = 11;
			this->Encrypt->Text = L"Шифровать";
			this->Encrypt->UseVisualStyleBackColor = true;
			this->Encrypt->Click += gcnew System::EventHandler(this, &MyForm::Encrypt_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 838);
			this->Controls->Add(this->Encrypt);
			this->Controls->Add(this->Direction);
			this->Controls->Add(this->Shift);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Caesar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->KeyWord);
			this->Controls->Add(this->Vigenere);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Шифратор";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Vigenere_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Caesar_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Encrypt_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void Direction_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}