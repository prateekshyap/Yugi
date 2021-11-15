#pragma once
#include <msclr\marshal_cppstd.h>
// #include "FinalProject.h"
namespace Yugi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LiveTrain
	/// </summary>
	public ref class LiveTrain : public System::Windows::Forms::Form
	{
	public:
		LiveTrain(void)
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
		~LiveTrain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  searchBox;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  doneBtn;
	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::Label^  searchStatement;

	private: System::Windows::Forms::Button^  recordBtn;

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
			this->searchBox = (gcnew System::Windows::Forms::TextBox());
			this->doneBtn = (gcnew System::Windows::Forms::Button());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->searchStatement = (gcnew System::Windows::Forms::Label());
			this->recordBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// searchBox
			// 
			this->searchBox->Location = System::Drawing::Point(12, 49);
			this->searchBox->Name = L"searchBox";
			this->searchBox->Size = System::Drawing::Size(277, 22);
			this->searchBox->TabIndex = 0;
			// 
			// doneBtn
			// 
			this->doneBtn->Location = System::Drawing::Point(112, 311);
			this->doneBtn->Name = L"doneBtn";
			this->doneBtn->Size = System::Drawing::Size(187, 49);
			this->doneBtn->TabIndex = 1;
			this->doneBtn->Text = L"Done";
			this->doneBtn->UseVisualStyleBackColor = true;
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(308, 49);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(80, 22);
			this->searchBtn->TabIndex = 2;
			this->searchBtn->Text = L"search";
			this->searchBtn->UseVisualStyleBackColor = true;
			// 
			// searchStatement
			// 
			this->searchStatement->AutoSize = true;
			this->searchStatement->Location = System::Drawing::Point(12, 110);
			this->searchStatement->Name = L"searchStatement";
			this->searchStatement->Size = System::Drawing::Size(121, 17);
			this->searchStatement->TabIndex = 3;
			this->searchStatement->Text = L"Search Statement";
			// 
			// recordBtn
			// 
			this->recordBtn->Location = System::Drawing::Point(126, 167);
			this->recordBtn->Name = L"recordBtn";
			this->recordBtn->Size = System::Drawing::Size(148, 45);
			this->recordBtn->TabIndex = 4;
			this->recordBtn->Text = L"Record";
			this->recordBtn->UseVisualStyleBackColor = true;
			// 
			// LiveTrain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(446, 388);
			this->Controls->Add(this->recordBtn);
			this->Controls->Add(this->searchStatement);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->doneBtn);
			this->Controls->Add(this->searchBox);
			this->Name = L"LiveTrain";
			this->Text = L"LiveTrain";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}
