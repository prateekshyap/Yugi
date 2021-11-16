#pragma once

namespace Yugi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
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
		~About()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  okBtn;
	protected: 
	private: System::Windows::Forms::TextBox^  aboutText;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->okBtn = (gcnew System::Windows::Forms::Button());
			this->aboutText = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// okBtn
			// 
			this->okBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->okBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->okBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->okBtn->Location = System::Drawing::Point(267, 435);
			this->okBtn->Name = L"okBtn";
			this->okBtn->Size = System::Drawing::Size(110, 45);
			this->okBtn->TabIndex = 0;
			this->okBtn->Text = L"OK";
			this->okBtn->UseVisualStyleBackColor = false;
			this->okBtn->Click += gcnew System::EventHandler(this, &About::okBtn_Click);
			// 
			// aboutText
			// 
			this->aboutText->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->aboutText->Enabled = false;
			this->aboutText->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->aboutText->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->aboutText->Location = System::Drawing::Point(74, 66);
			this->aboutText->Multiline = true;
			this->aboutText->Name = L"aboutText";
			this->aboutText->Size = System::Drawing::Size(507, 317);
			this->aboutText->TabIndex = 1;
			this->aboutText->Text = resources->GetString(L"aboutText.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(102, 508);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(443, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"--->> Made with 💖 by Prateekshya and Rohan <<--";
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(658, 573);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->aboutText);
			this->Controls->Add(this->okBtn);
			this->Name = L"About";
			this->Text = L"About";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void okBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				Form::Close();
			 }
	};
}
