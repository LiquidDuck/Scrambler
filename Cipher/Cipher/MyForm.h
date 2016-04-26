#pragma once
#include "VigError.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>

namespace Cipher {

	using namespace std;
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::RadioButton^  Caesar;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  Direction;
	private: System::Windows::Forms::Button^  Encrypt;
	private: System::Windows::Forms::TextBox^  Shift;
	private: System::Windows::Forms::TextBox^  Output;
	private: System::Windows::Forms::TextBox^  Input;



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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Caesar = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Direction = (gcnew System::Windows::Forms::ComboBox());
			this->Encrypt = (gcnew System::Windows::Forms::Button());
			this->Shift = (gcnew System::Windows::Forms::TextBox());
			this->Output = (gcnew System::Windows::Forms::TextBox());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Vigenere
			// 
			this->Vigenere->AutoSize = true;
			this->Vigenere->Location = System::Drawing::Point(382, 392);
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
			this->KeyWord->Location = System::Drawing::Point(360, 432);
			this->KeyWord->Name = L"KeyWord";
			this->KeyWord->Size = System::Drawing::Size(146, 20);
			this->KeyWord->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(261, 435);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ключевое слово:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Текст для шифрования:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(45, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Зашифрованный текст:";
			// 
			// Caesar
			// 
			this->Caesar->AutoSize = true;
			this->Caesar->Location = System::Drawing::Point(48, 392);
			this->Caesar->Name = L"Caesar";
			this->Caesar->Size = System::Drawing::Size(95, 17);
			this->Caesar->TabIndex = 7;
			this->Caesar->TabStop = true;
			this->Caesar->Text = L"Шифр Цезаря";
			this->Caesar->UseVisualStyleBackColor = true;
			this->Caesar->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Caesar_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(22, 435);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(40, 13);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Сдвиг:";
			// 
			// Direction
			// 
			this->Direction->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Direction->FormattingEnabled = true;
			this->Direction->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"влево", L"вправо" });
			this->Direction->Location = System::Drawing::Point(151, 432);
			this->Direction->Name = L"Direction";
			this->Direction->Size = System::Drawing::Size(62, 21);
			this->Direction->TabIndex = 10;
			// 
			// Encrypt
			// 
			this->Encrypt->Location = System::Drawing::Point(186, 481);
			this->Encrypt->Name = L"Encrypt";
			this->Encrypt->Size = System::Drawing::Size(168, 44);
			this->Encrypt->TabIndex = 11;
			this->Encrypt->Text = L"Шифровать";
			this->Encrypt->UseVisualStyleBackColor = true;
			this->Encrypt->Click += gcnew System::EventHandler(this, &MyForm::Encrypt_Click);
			// 
			// Shift
			// 
			this->Shift->Location = System::Drawing::Point(68, 432);
			this->Shift->Name = L"Shift";
			this->Shift->Size = System::Drawing::Size(48, 20);
			this->Shift->TabIndex = 12;
			// 
			// Output
			// 
			this->Output->Location = System::Drawing::Point(48, 246);
			this->Output->Multiline = true;
			this->Output->Name = L"Output";
			this->Output->ReadOnly = true;
			this->Output->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Output->Size = System::Drawing::Size(442, 117);
			this->Output->TabIndex = 13;
			// 
			// Input
			// 
			this->Input->Location = System::Drawing::Point(48, 60);
			this->Input->Multiline = true;
			this->Input->Name = L"Input";
			this->Input->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Input->Size = System::Drawing::Size(442, 123);
			this->Input->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 574);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->Output);
			this->Controls->Add(this->Shift);
			this->Controls->Add(this->Encrypt);
			this->Controls->Add(this->Direction);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Caesar);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
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
		this->KeyWord->Enabled = true;
		this->Shift->Enabled = false;
		this->Direction->Enabled = false;
	}
	private: System::Void Caesar_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		this->KeyWord->Enabled = false;
		this->Shift->Enabled = true;
		this->Direction->Enabled = true;
	}

	private: bool KeyWordError(string kw) {
		if (kw.size() == 0) {
			return true;
		} 
		for (int i = 0; i < kw.size(); i++) {
			if (!((int)kw[i] >= 65 && (int)kw[i] <= 90 || (int)kw[i] >= 97 && (int)kw[i] <= 122)) {
				return true;
			}
		} 
		return false;
	}

	const int Alim = 65, Zlim = 90, alim = 97, zlim = 122, alphSize = 26;

	private: char ToBig(char c) {
		if (c <= Zlim) {
			return c;
		}
		else {
			return c - 32;
		}
	}

	private: char ToSmall(char c) {
		if (c >= alim) {
			return c;
		}
		else {
			return c + 32;
		}
	}

	private: bool IsSmall(char c) {
		if (c >= alim && c <= zlim) {
			return true;
		}
		else {
			return false;
		}
	}

	private: bool IsBig(char c) {
		if (c >= Alim && c <= Zlim) {
			return true;
		}
		else {
			return false;
		}
	}

	private: void VigenereEncryption() {
		string kw = msclr::interop::marshal_as<string>(KeyWord->Text); 

		if (KeyWordError(kw)) {
			VigError^ error = gcnew VigError();
			error->ShowDialog();
			return;
		}

		int i, k = 0, shift;

		string res = msclr::interop::marshal_as<string>(Input->Text); 
		for (i = 0; i < res.size(); i++) {
			if (IsBig(res[i]) || IsSmall(res[i])) {
				if (IsBig(res[i])) {
					shift = ToBig(kw[k]) - Alim;
					if (res[i] + shift <= Zlim) {
						res[i] = res[i] + shift;
					}
					else {
						res[i] = res[i] + shift - alphSize;
					}
				}
				else
					if (IsSmall(res[i])) {
						shift = ToSmall(kw[k]) - alim;
						if (res[i] + shift <= zlim) {
							res[i] = res[i] + shift;
						}
						else {
							res[i] = res[i] + shift - alphSize;
						}
					}
				if (k + 1 == kw.size()) {
					k = 0;
				}
				else {
					k++;
				}
			}
		}

		Output->Text = gcnew String(res.c_str());
	}

	private: System::Void Encrypt_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Vigenere->Checked == true) {
			VigenereEncryption();
		}
	}
};
}