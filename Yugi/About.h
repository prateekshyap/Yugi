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
			this->SuspendLayout();
			// 
			// okBtn
			// 
			this->okBtn->Location = System::Drawing::Point(99, 216);
			this->okBtn->Name = L"okBtn";
			this->okBtn->Size = System::Drawing::Size(110, 45);
			this->okBtn->TabIndex = 0;
			this->okBtn->Text = L"OK";
			this->okBtn->UseVisualStyleBackColor = true;
			this->okBtn->Click += gcnew System::EventHandler(this, &About::okBtn_Click);
			// 
			// aboutText
			// 
			this->aboutText->Enabled = false;
			this->aboutText->Location = System::Drawing::Point(28, 33);
			this->aboutText->Multiline = true;
			this->aboutText->Name = L"aboutText";
			this->aboutText->Size = System::Drawing::Size(274, 166);
			this->aboutText->TabIndex = 1;
			this->aboutText->Text = resources->GetString(L"aboutText.Text");
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 298);
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
