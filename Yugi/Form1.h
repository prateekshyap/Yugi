#pragma once
// #include "LiveTrain.h"
#include <msclr\marshal_cppstd.h>
#include "About.h"
#include "FinalProject.h"

namespace Yugi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  liveTrainBtn;
	private: System::Windows::Forms::Button^  liveTestBtn;
	private: System::Windows::Forms::Button^  resetBtn;

	private: System::Windows::Forms::Button^  aboutBtn;
	private: System::Windows::Forms::TextBox^  searchTextBox;
	private: System::Windows::Forms::Button^  searchBtn;
	private: System::Windows::Forms::Label^  searchLabel;
	private: System::Windows::Forms::Button^  recordBtn;
	private: System::Windows::Forms::Button^  doneBtn;
	private: System::Windows::Forms::PictureBox^  yugiIcon;

	private: System::Windows::Forms::Label^  recordLabel;
	private: System::Windows::Forms::TextBox^  Description;
	private: System::Windows::Forms::Label^  doneLabel;
	private: System::Windows::Forms::Label^  searchBarLabel;

	private: System::Windows::Forms::Label^  recordBtnLabel;





	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->liveTrainBtn = (gcnew System::Windows::Forms::Button());
			this->liveTestBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->aboutBtn = (gcnew System::Windows::Forms::Button());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->searchLabel = (gcnew System::Windows::Forms::Label());
			this->recordBtn = (gcnew System::Windows::Forms::Button());
			this->doneBtn = (gcnew System::Windows::Forms::Button());
			this->yugiIcon = (gcnew System::Windows::Forms::PictureBox());
			this->recordLabel = (gcnew System::Windows::Forms::Label());
			this->Description = (gcnew System::Windows::Forms::TextBox());
			this->doneLabel = (gcnew System::Windows::Forms::Label());
			this->searchBarLabel = (gcnew System::Windows::Forms::Label());
			this->recordBtnLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->yugiIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// liveTrainBtn
			// 
			this->liveTrainBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->liveTrainBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->liveTrainBtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->liveTrainBtn->Location = System::Drawing::Point(432, 258);
			this->liveTrainBtn->Name = L"liveTrainBtn";
			this->liveTrainBtn->Size = System::Drawing::Size(142, 44);
			this->liveTrainBtn->TabIndex = 2;
			this->liveTrainBtn->Text = L"Live Train";
			this->liveTrainBtn->UseVisualStyleBackColor = false;
			this->liveTrainBtn->Click += gcnew System::EventHandler(this, &Form1::liveTrainBtn_Click);
			// 
			// liveTestBtn
			// 
			this->liveTestBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->liveTestBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->liveTestBtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->liveTestBtn->Location = System::Drawing::Point(432, 149);
			this->liveTestBtn->Name = L"liveTestBtn";
			this->liveTestBtn->Size = System::Drawing::Size(145, 43);
			this->liveTestBtn->TabIndex = 3;
			this->liveTestBtn->Text = L"Live Test";
			this->liveTestBtn->UseVisualStyleBackColor = false;
			this->liveTestBtn->Click += gcnew System::EventHandler(this, &Form1::liveTestBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->resetBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->resetBtn->ForeColor = System::Drawing::SystemColors::Window;
			this->resetBtn->Location = System::Drawing::Point(429, 33);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(145, 43);
			this->resetBtn->TabIndex = 5;
			this->resetBtn->Text = L"Start / Reset";
			this->resetBtn->UseVisualStyleBackColor = false;
			this->resetBtn->Click += gcnew System::EventHandler(this, &Form1::resetBtn_Click);
			// 
			// aboutBtn
			// 
			this->aboutBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->aboutBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->aboutBtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->aboutBtn->Location = System::Drawing::Point(432, 368);
			this->aboutBtn->Name = L"aboutBtn";
			this->aboutBtn->Size = System::Drawing::Size(142, 44);
			this->aboutBtn->TabIndex = 4;
			this->aboutBtn->Text = L"About";
			this->aboutBtn->UseVisualStyleBackColor = false;
			this->aboutBtn->Click += gcnew System::EventHandler(this, &Form1::aboutBtn_Click);
			// 
			// searchTextBox
			// 
			this->searchTextBox->BackColor = System::Drawing::Color::LightSkyBlue;
			this->searchTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchTextBox->HideSelection = false;
			this->searchTextBox->Location = System::Drawing::Point(39, 79);
			this->searchTextBox->Multiline = true;
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(425, 40);
			this->searchTextBox->TabIndex = 6;
			// 
			// searchBtn
			// 
			this->searchBtn->BackColor = System::Drawing::Color::Transparent;
			this->searchBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"searchBtn.BackgroundImage")));
			this->searchBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->searchBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->searchBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchBtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->searchBtn->Location = System::Drawing::Point(470, 79);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(104, 40);
			this->searchBtn->TabIndex = 7;
			this->searchBtn->UseVisualStyleBackColor = false;
			this->searchBtn->Click += gcnew System::EventHandler(this, &Form1::searchBtn_Click);
			// 
			// searchLabel
			// 
			this->searchLabel->AutoSize = true;
			this->searchLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchLabel->Location = System::Drawing::Point(35, 149);
			this->searchLabel->Name = L"searchLabel";
			this->searchLabel->Size = System::Drawing::Size(95, 20);
			this->searchLabel->TabIndex = 8;
			this->searchLabel->Text = L"search label";
			// 
			// recordBtn
			// 
			this->recordBtn->BackColor = System::Drawing::Color::Transparent;
			this->recordBtn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"recordBtn.BackgroundImage")));
			this->recordBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->recordBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->recordBtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->recordBtn->Location = System::Drawing::Point(244, 239);
			this->recordBtn->Name = L"recordBtn";
			this->recordBtn->Size = System::Drawing::Size(140, 117);
			this->recordBtn->TabIndex = 9;
			this->recordBtn->UseVisualStyleBackColor = false;
			this->recordBtn->Click += gcnew System::EventHandler(this, &Form1::recordBtn_Click);
			// 
			// doneBtn
			// 
			this->doneBtn->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->doneBtn->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->doneBtn->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->doneBtn->Location = System::Drawing::Point(416, 465);
			this->doneBtn->Name = L"doneBtn";
			this->doneBtn->Size = System::Drawing::Size(161, 41);
			this->doneBtn->TabIndex = 10;
			this->doneBtn->Text = L"Done";
			this->doneBtn->UseVisualStyleBackColor = false;
			this->doneBtn->Click += gcnew System::EventHandler(this, &Form1::doneBtn_Click);
			// 
			// yugiIcon
			// 
			this->yugiIcon->BackColor = System::Drawing::Color::White;
			this->yugiIcon->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"yugiIcon.Image")));
			this->yugiIcon->Location = System::Drawing::Point(39, 33);
			this->yugiIcon->Name = L"yugiIcon";
			this->yugiIcon->Size = System::Drawing::Size(318, 379);
			this->yugiIcon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->yugiIcon->TabIndex = 11;
			this->yugiIcon->TabStop = false;
			// 
			// recordLabel
			// 
			this->recordLabel->AutoSize = true;
			this->recordLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->recordLabel->Location = System::Drawing::Point(35, 187);
			this->recordLabel->Name = L"recordLabel";
			this->recordLabel->Size = System::Drawing::Size(96, 20);
			this->recordLabel->TabIndex = 12;
			this->recordLabel->Text = L"record label";
			// 
			// Description
			// 
			this->Description->BackColor = System::Drawing::Color::White;
			this->Description->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Description->Enabled = false;
			this->Description->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Description->Location = System::Drawing::Point(39, 418);
			this->Description->Multiline = true;
			this->Description->Name = L"Description";
			this->Description->Size = System::Drawing::Size(318, 107);
			this->Description->TabIndex = 13;
			this->Description->Text = L"Hi, I am Yugi, your learning guide. I can teach you about some objects like vehic" 
				L"les, fruits, etc. Press Start/Reset button to train me first. It may take few mi" 
				L"ns. ";
			// 
			// doneLabel
			// 
			this->doneLabel->AutoSize = true;
			this->doneLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->doneLabel->Location = System::Drawing::Point(349, 509);
			this->doneLabel->Name = L"doneLabel";
			this->doneLabel->Size = System::Drawing::Size(289, 16);
			this->doneLabel->TabIndex = 14;
			this->doneLabel->Text = L"It may take few mins to update my vocabulary.\r\n";
			// 
			// searchBarLabel
			// 
			this->searchBarLabel->AutoSize = true;
			this->searchBarLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->searchBarLabel->Location = System::Drawing::Point(41, 53);
			this->searchBarLabel->Name = L"searchBarLabel";
			this->searchBarLabel->Size = System::Drawing::Size(290, 23);
			this->searchBarLabel->TabIndex = 15;
			this->searchBarLabel->Text = L"Search the word you want to add";
			// 
			// recordBtnLabel
			// 
			this->recordBtnLabel->AutoSize = true;
			this->recordBtnLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->recordBtnLabel->Location = System::Drawing::Point(285, 356);
			this->recordBtnLabel->Name = L"recordBtnLabel";
			this->recordBtnLabel->Size = System::Drawing::Size(71, 23);
			this->recordBtnLabel->TabIndex = 16;
			this->recordBtnLabel->Text = L"Record";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(658, 573);
			this->Controls->Add(this->recordBtnLabel);
			this->Controls->Add(this->searchBarLabel);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->doneLabel);
			this->Controls->Add(this->Description);
			this->Controls->Add(this->recordLabel);
			this->Controls->Add(this->recordBtn);
			this->Controls->Add(this->searchLabel);
			this->Controls->Add(this->yugiIcon);
			this->Controls->Add(this->doneBtn);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->aboutBtn);
			this->Controls->Add(this->liveTestBtn);
			this->Controls->Add(this->liveTrainBtn);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->yugiIcon))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				searchBtn->Visible = false;
				searchBtn->Enabled = false;
				searchTextBox->Visible = false;
				searchTextBox->Enabled = false;
				searchLabel->Visible = false;
				searchLabel->Enabled = false;
				recordBtn->Visible = false;
				recordBtn->Enabled = false;
				doneBtn->Visible = false;
				doneBtn->Enabled = false;
				recordLabel->Visible = false;
				recordLabel->Enabled = false;
				doneLabel->Visible = false;
				doneLabel->Enabled = false;
				recordBtnLabel->Visible = false;
				searchBarLabel->Visible = false;
			 }

	private: System::Void liveTrainBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 aboutBtn->Visible = false;
				 aboutBtn->Enabled = false;
				 resetBtn->Visible = false;
				 resetBtn->Enabled = false;
				 liveTestBtn->Visible = false;
				 liveTestBtn->Enabled = false;
				 liveTrainBtn->Visible = false;
				 liveTrainBtn->Enabled = false;
				 searchBtn->Visible = true;
				searchBtn->Enabled = true ;
				searchTextBox->Visible = true;
				searchTextBox->Enabled = true;
				searchTextBox->Text = "";
				searchBarLabel->Visible = true;
				recordBtnLabel->Visible = false;
				doneBtn->Visible = true;
				doneBtn->Enabled = true;
				doneLabel->Visible = true;
				doneLabel->Enabled = true;
				yugiIcon->Visible = false;
				Description->Visible = false;
			 }

	private: System::Void liveTestBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			char *str1 = "start https://en.wikipedia.org/wiki/";
			char *str2 = performLiveTesting();
			char *str3 = (char *)malloc(1 + strlen(str1)+ strlen(str2));
			strcpy(str3, str1);
			strcat(str3, str2);
			system(str3);
		}

	private: System::Void aboutBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			About^ about = gcnew About;
			about->ShowDialog();
		}

	private: System::Void resetBtn_Click(System::Object^  sender, System::EventArgs^  e) {
					start();		 
		}

	private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				String^ strr = searchTextBox->Text;
				msclr::interop::marshal_context context;
				std::string str= context.marshal_as<std::string>(strr);
				int found = searchWord(str.c_str());
				if(found == 1) {
					searchLabel->Text = "Word already present in my Vocabulary!";
					recordLabel->Text = "Press the record button to add one utterance into my vocabulary.";
				} else {
					searchLabel->Text = "This is a new word!";
					recordLabel->Text = "Press the record button and add ten utterance to update my vocabulary.";
				}
				searchLabel->Visible = true;
				searchLabel->Enabled = true;
				recordLabel->Visible = true;
				recordLabel->Enabled = true;
				recordBtn->Visible = true;
				recordBtn->Enabled = true;
				recordBtnLabel->Visible = true;
		 }

	private: System::Void recordBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				recordWords();
				recordBtn->Enabled = false;
		 }

	private: System::Void doneBtn_Click(System::Object^  sender, System::EventArgs^  e) {
			performLiveTraining();
			yugiIcon->Visible = true;
			aboutBtn->Visible = true;
			aboutBtn->Enabled = true;
			resetBtn->Visible = true;
			resetBtn->Enabled = true;
			liveTestBtn->Visible = true;
			liveTestBtn->Enabled = true;
			liveTrainBtn->Visible = true;
			liveTrainBtn->Enabled = true;
			searchBtn->Visible = false;
			searchBtn->Enabled = false ;
			searchTextBox->Visible = false;
			searchTextBox->Enabled = false;
			searchLabel->Visible = false;
			searchLabel->Enabled = false;
			recordBtn->Visible = false;
			recordBtn->Enabled = false;
			doneBtn->Visible = false;
			doneBtn->Enabled = false;
			recordLabel->Visible = false;
			recordLabel->Enabled = false;
			doneLabel->Visible = false;
			doneLabel->Enabled = false;
			recordBtnLabel->Visible = false;
			searchBarLabel->Visible = false;
			Description->Visible = true;
		 }
};
}

