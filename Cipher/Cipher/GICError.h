#pragma once

namespace Cipher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для GICError
	/// </summary>
	public ref class GICError : public System::Windows::Forms::Form
	{
	public:
		GICError(void)
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
		~GICError()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  OK;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(105, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(327, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Неверный формат ввода.";
			// 
			// OK
			// 
			this->OK->Location = System::Drawing::Point(185, 148);
			this->OK->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(147, 34);
			this->OK->TabIndex = 2;
			this->OK->Text = L"ОК";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &GICError::OK_Click);
			// 
			// GICError
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(531, 244);
			this->Controls->Add(this->OK);
			this->Controls->Add(this->label1);
			this->Name = L"GICError";
			this->Text = L"Ошибка";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	};
}

