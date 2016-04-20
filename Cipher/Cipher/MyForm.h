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
			this->SuspendLayout();
			// 
			// Vigenere
			// 
			this->Vigenere->AutoSize = true;
			this->Vigenere->Location = System::Drawing::Point(331, 67);
			this->Vigenere->Name = L"Vigenere";
			this->Vigenere->Size = System::Drawing::Size(108, 17);
			this->Vigenere->TabIndex = 0;
			this->Vigenere->TabStop = true;
			this->Vigenere->Text = L"Шифр Виженера";
			this->Vigenere->UseVisualStyleBackColor = true;
			this->Vigenere->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Vigenere_CheckedChanged);
			// 
			// KeyWord
			// 
			this->KeyWord->Location = System::Drawing::Point(367, 115);
			this->KeyWord->Name = L"KeyWord";
			this->KeyWord->Size = System::Drawing::Size(146, 20);
			this->KeyWord->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(268, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ключевое слово:";
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(48, 235);
			this->Input->Multiline = true;
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(442, 117);
			this->Input->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 206);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Текст для шифрования:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 574);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->KeyWord);
			this->Controls->Add(this->Vigenere);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
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
};
}
