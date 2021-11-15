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
			this->liveTrainBtn = (gcnew System::Windows::Forms::Button());
			this->liveTestBtn = (gcnew System::Windows::Forms::Button());
			this->resetBtn = (gcnew System::Windows::Forms::Button());
			this->aboutBtn = (gcnew System::Windows::Forms::Button());
			this->searchTextBox = (gcnew System::Windows::Forms::TextBox());
			this->searchBtn = (gcnew System::Windows::Forms::Button());
			this->searchLabel = (gcnew System::Windows::Forms::Label());
			this->recordBtn = (gcnew System::Windows::Forms::Button());
			this->doneBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// liveTrainBtn
			// 
			this->liveTrainBtn->Location = System::Drawing::Point(241, 238);
			this->liveTrainBtn->Name = L"liveTrainBtn";
			this->liveTrainBtn->Size = System::Drawing::Size(142, 44);
			this->liveTrainBtn->TabIndex = 2;
			this->liveTrainBtn->Text = L"Live Train";
			this->liveTrainBtn->UseVisualStyleBackColor = true;
			this->liveTrainBtn->Click += gcnew System::EventHandler(this, &Form1::liveTrainBtn_Click);
			// 
			// liveTestBtn
			// 
			this->liveTestBtn->Location = System::Drawing::Point(60, 238);
			this->liveTestBtn->Name = L"liveTestBtn";
			this->liveTestBtn->Size = System::Drawing::Size(145, 43);
			this->liveTestBtn->TabIndex = 3;
			this->liveTestBtn->Text = L"Live Test";
			this->liveTestBtn->UseVisualStyleBackColor = true;
			this->liveTestBtn->Click += gcnew System::EventHandler(this, &Form1::liveTestBtn_Click);
			// 
			// resetBtn
			// 
			this->resetBtn->Location = System::Drawing::Point(60, 303);
			this->resetBtn->Name = L"resetBtn";
			this->resetBtn->Size = System::Drawing::Size(145, 43);
			this->resetBtn->TabIndex = 5;
			this->resetBtn->Text = L"Start/Reset";
			this->resetBtn->UseVisualStyleBackColor = true;
			this->resetBtn->Click += gcnew System::EventHandler(this, &Form1::resetBtn_Click);
			// 
			// aboutBtn
			// 
			this->aboutBtn->Location = System::Drawing::Point(241, 303);
			this->aboutBtn->Name = L"aboutBtn";
			this->aboutBtn->Size = System::Drawing::Size(142, 44);
			this->aboutBtn->TabIndex = 4;
			this->aboutBtn->Text = L"About";
			this->aboutBtn->UseVisualStyleBackColor = true;
			this->aboutBtn->Click += gcnew System::EventHandler(this, &Form1::aboutBtn_Click);
			// 
			// searchTextBox
			// 
			this->searchTextBox->Location = System::Drawing::Point(30, 31);
			this->searchTextBox->Name = L"searchTextBox";
			this->searchTextBox->Size = System::Drawing::Size(256, 22);
			this->searchTextBox->TabIndex = 6;
			// 
			// searchBtn
			// 
			this->searchBtn->Location = System::Drawing::Point(312, 31);
			this->searchBtn->Name = L"searchBtn";
			this->searchBtn->Size = System::Drawing::Size(87, 21);
			this->searchBtn->TabIndex = 7;
			this->searchBtn->Text = L"Search";
			this->searchBtn->UseVisualStyleBackColor = true;
			this->searchBtn->Click += gcnew System::EventHandler(this, &Form1::searchBtn_Click);
			// 
			// searchLabel
			// 
			this->searchLabel->AutoSize = true;
			this->searchLabel->Location = System::Drawing::Point(37, 81);
			this->searchLabel->Name = L"searchLabel";
			this->searchLabel->Size = System::Drawing::Size(85, 17);
			this->searchLabel->TabIndex = 8;
			this->searchLabel->Text = L"search label";
			// 
			// recordBtn
			// 
			this->recordBtn->Location = System::Drawing::Point(146, 151);
			this->recordBtn->Name = L"recordBtn";
			this->recordBtn->Size = System::Drawing::Size(140, 39);
			this->recordBtn->TabIndex = 9;
			this->recordBtn->Text = L"Record";
			this->recordBtn->UseVisualStyleBackColor = true;
			this->recordBtn->Click += gcnew System::EventHandler(this, &Form1::recordBtn_Click);
			// 
			// doneBtn
			// 
			this->doneBtn->Location = System::Drawing::Point(241, 288);
			this->doneBtn->Name = L"doneBtn";
			this->doneBtn->Size = System::Drawing::Size(142, 41);
			this->doneBtn->TabIndex = 10;
			this->doneBtn->Text = L"Done";
			this->doneBtn->UseVisualStyleBackColor = true;
			this->doneBtn->Click += gcnew System::EventHandler(this, &Form1::doneBtn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(437, 397);
			this->Controls->Add(this->doneBtn);
			this->Controls->Add(this->recordBtn);
			this->Controls->Add(this->searchLabel);
			this->Controls->Add(this->searchBtn);
			this->Controls->Add(this->searchTextBox);
			this->Controls->Add(this->resetBtn);
			this->Controls->Add(this->aboutBtn);
			this->Controls->Add(this->liveTestBtn);
			this->Controls->Add(this->liveTrainBtn);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) { //all the components required for live training are disabled
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
			 }
	//private: System::Void startBtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//			 startBtn->Visible = false;
	//			 liveTestBtn->Visible = true;
	//			 liveTrainBtn->Visible = true;
	//			 aboutBtn->Visible = true;
	//			 resetBtn->Visible = true;
	//		 }

	private: System::Void liveTrainBtn_Click(System::Object^  sender, System::EventArgs^  e) { //disable the previous components and enable the components required for live training
				/*LiveTrain^ liveTrain = gcnew LiveTrain;
				liveTrain->ShowDialog();*/
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
				searchLabel->Visible = true;
				searchLabel->Enabled = true;
				recordBtn->Visible = true;
				recordBtn->Enabled = true;
				doneBtn->Visible = true;
				doneBtn->Enabled = true;
			 }
	private: System::Void liveTestBtn_Click(System::Object^  sender, System::EventArgs^  e) { //browse the wikipedia link for the detected word
			// System::String^ str = gcnew String(res);
			char *str1 = "start https://en.wikipedia.org/wiki/";
			char *str2 = performLiveTesting();
			char *str3 = (char *)malloc(1 + strlen(str1)+ strlen(str2));
			strcpy(str3, str1);
			strcat(str3, str2);
			// System::String^ str = gcnew String(str2);
			// Greeting->Text = str;
			system(str3);
		}
private: System::Void aboutBtn_Click(System::Object^  sender, System::EventArgs^  e) { //for about section
			About^ about = gcnew About;
			about->ShowDialog();
		 }
private: System::Void resetBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				start(); //initial model training
		 }
private: System::Void searchBtn_Click(System::Object^  sender, System::EventArgs^  e) { //search the word and display the number of recordings required
				String^ strr = searchTextBox->Text;
				msclr::interop::marshal_context context;
				std::string str= context.marshal_as<std::string>(strr);
				int found = searchWord(str.c_str());
				if(found == 1) {
					searchLabel->Text = "Record Once";
				} else {
					searchLabel->Text = "Record Ten times";
				}
		 }
private: System::Void recordBtn_Click(System::Object^  sender, System::EventArgs^  e) {
				recordWords();
		 }
private: System::Void doneBtn_Click(System::Object^  sender, System::EventArgs^  e) { //switch the interface to the previous menu
			 performLiveTraining();
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
		 }
};
}

