#pragma once
#include "DiceBox.h"

namespace DiceDice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  PleaseMsgLabel;
	protected:

	private: System::Windows::Forms::Button^  mainbutton;
	protected:


	private: System::Windows::Forms::Label^  titledice;
	private: System::Windows::Forms::RadioButton^  ud2;




	private: System::Windows::Forms::PictureBox^  picDiceInuchi;

	private: System::Windows::Forms::PictureBox^  DiceDispBox1;
	private: System::Windows::Forms::PictureBox^  DiceDispBox2;
	private: System::Windows::Forms::PictureBox^  DiceDispBox3;
	private: System::Windows::Forms::PictureBox^  DiceDispBox4;
	private: System::Windows::Forms::PictureBox^  DiceDispBox5;
	private: System::Windows::Forms::PictureBox^  DiceDispBox6;

	private: System::Windows::Forms::PictureBox^  picwin;
	private: System::Windows::Forms::PictureBox^  piclose;
	private: System::Windows::Forms::RadioButton^  ud1;
	private: System::Windows::Forms::RadioButton^  ud4;

	private: System::Windows::Forms::RadioButton^  ud3;
	private: System::Windows::Forms::RadioButton^  ud5;
	private: System::Windows::Forms::RadioButton^  ud6;
	private: System::Windows::Forms::Label^  PCsLabel;

	private: System::Windows::Forms::Label^  ResultLabel;
	private: System::Windows::Forms::Label^  YourResult;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::ComponentModel::IContainer^  components;










	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->PleaseMsgLabel = (gcnew System::Windows::Forms::Label());
			this->mainbutton = (gcnew System::Windows::Forms::Button());
			this->titledice = (gcnew System::Windows::Forms::Label());
			this->ud2 = (gcnew System::Windows::Forms::RadioButton());
			this->picDiceInuchi = (gcnew System::Windows::Forms::PictureBox());
			this->DiceDispBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DiceDispBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->DiceDispBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->DiceDispBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->DiceDispBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->DiceDispBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->picwin = (gcnew System::Windows::Forms::PictureBox());
			this->piclose = (gcnew System::Windows::Forms::PictureBox());
			this->ud1 = (gcnew System::Windows::Forms::RadioButton());
			this->ud4 = (gcnew System::Windows::Forms::RadioButton());
			this->ud3 = (gcnew System::Windows::Forms::RadioButton());
			this->ud5 = (gcnew System::Windows::Forms::RadioButton());
			this->ud6 = (gcnew System::Windows::Forms::RadioButton());
			this->PCsLabel = (gcnew System::Windows::Forms::Label());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->YourResult = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDiceInuchi))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picwin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piclose))->BeginInit();
			this->SuspendLayout();
			// 
			// PleaseMsgLabel
			// 
			this->PleaseMsgLabel->AutoSize = true;
			this->PleaseMsgLabel->BackColor = System::Drawing::Color::Transparent;
			this->PleaseMsgLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->PleaseMsgLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PleaseMsgLabel->Location = System::Drawing::Point(21, 103);
			this->PleaseMsgLabel->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->PleaseMsgLabel->Name = L"PleaseMsgLabel";
			this->PleaseMsgLabel->Size = System::Drawing::Size(260, 56);
			this->PleaseMsgLabel->TabIndex = 0;
			this->PleaseMsgLabel->Text = L"Please select your num.\r\n (When you\'ll win continuous, \r\n   you can get 2 fold po"
				L"ints.)";
			// 
			// mainbutton
			// 
			this->mainbutton->Font = (gcnew System::Drawing::Font(L"Verdana", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mainbutton->Location = System::Drawing::Point(25, 253);
			this->mainbutton->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->mainbutton->Name = L"mainbutton";
			this->mainbutton->Size = System::Drawing::Size(301, 46);
			this->mainbutton->TabIndex = 1;
			this->mainbutton->Text = L"start button";
			this->mainbutton->UseVisualStyleBackColor = true;
			this->mainbutton->Click += gcnew System::EventHandler(this, &MyForm::mainbutton_Click);
			// 
			// titledice
			// 
			this->titledice->AutoSize = true;
			this->titledice->BackColor = System::Drawing::Color::Transparent;
			this->titledice->Font = (gcnew System::Drawing::Font(L"Cambria", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->titledice->Location = System::Drawing::Point(11, 8);
			this->titledice->Name = L"titledice";
			this->titledice->Size = System::Drawing::Size(441, 75);
			this->titledice->TabIndex = 2;
			this->titledice->Text = L"DiceDice (r1.2)";
			// 
			// ud2
			// 
			this->ud2->AutoSize = true;
			this->ud2->BackColor = System::Drawing::Color::Transparent;
			this->ud2->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ud2->Location = System::Drawing::Point(112, 181);
			this->ud2->Name = L"ud2";
			this->ud2->Size = System::Drawing::Size(43, 29);
			this->ud2->TabIndex = 4;
			this->ud2->TabStop = true;
			this->ud2->Text = L"2";
			this->ud2->UseVisualStyleBackColor = false;
			// 
			// picDiceInuchi
			// 
			this->picDiceInuchi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picDiceInuchi.Image")));
			this->picDiceInuchi->Location = System::Drawing::Point(394, 298);
			this->picDiceInuchi->Name = L"picDiceInuchi";
			this->picDiceInuchi->Size = System::Drawing::Size(170, 157);
			this->picDiceInuchi->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picDiceInuchi->TabIndex = 5;
			this->picDiceInuchi->TabStop = false;
			// 
			// DiceDispBox1
			// 
			this->DiceDispBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiceDispBox1.Image")));
			this->DiceDispBox1->Location = System::Drawing::Point(402, 143);
			this->DiceDispBox1->Name = L"DiceDispBox1";
			this->DiceDispBox1->Size = System::Drawing::Size(50, 50);
			this->DiceDispBox1->TabIndex = 6;
			this->DiceDispBox1->TabStop = false;
			this->DiceDispBox1->Visible = false;
			this->DiceDispBox1->Click += gcnew System::EventHandler(this, &MyForm::DiceDispBox1_Click);
			// 
			// DiceDispBox2
			// 
			this->DiceDispBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiceDispBox2.Image")));
			this->DiceDispBox2->Location = System::Drawing::Point(458, 143);
			this->DiceDispBox2->Name = L"DiceDispBox2";
			this->DiceDispBox2->Size = System::Drawing::Size(50, 50);
			this->DiceDispBox2->TabIndex = 7;
			this->DiceDispBox2->TabStop = false;
			this->DiceDispBox2->Visible = false;
			this->DiceDispBox2->Click += gcnew System::EventHandler(this, &MyForm::DiceDispBox2_Click);
			// 
			// DiceDispBox3
			// 
			this->DiceDispBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiceDispBox3.Image")));
			this->DiceDispBox3->Location = System::Drawing::Point(514, 143);
			this->DiceDispBox3->Name = L"DiceDispBox3";
			this->DiceDispBox3->Size = System::Drawing::Size(50, 50);
			this->DiceDispBox3->TabIndex = 8;
			this->DiceDispBox3->TabStop = false;
			this->DiceDispBox3->Visible = false;
			this->DiceDispBox3->Click += gcnew System::EventHandler(this, &MyForm::DiceDispBox3_Click);
			// 
			// DiceDispBox4
			// 
			this->DiceDispBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiceDispBox4.Image")));
			this->DiceDispBox4->Location = System::Drawing::Point(431, 199);
			this->DiceDispBox4->Name = L"DiceDispBox4";
			this->DiceDispBox4->Size = System::Drawing::Size(50, 50);
			this->DiceDispBox4->TabIndex = 9;
			this->DiceDispBox4->TabStop = false;
			this->DiceDispBox4->Visible = false;
			this->DiceDispBox4->Click += gcnew System::EventHandler(this, &MyForm::DiceDispBox4_Click);
			// 
			// DiceDispBox5
			// 
			this->DiceDispBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiceDispBox5.Image")));
			this->DiceDispBox5->Location = System::Drawing::Point(487, 199);
			this->DiceDispBox5->Name = L"DiceDispBox5";
			this->DiceDispBox5->Size = System::Drawing::Size(50, 50);
			this->DiceDispBox5->TabIndex = 10;
			this->DiceDispBox5->TabStop = false;
			this->DiceDispBox5->Visible = false;
			this->DiceDispBox5->Click += gcnew System::EventHandler(this, &MyForm::DiceDispBox5_Click);
			// 
			// DiceDispBox6
			// 
			this->DiceDispBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DiceDispBox6.Image")));
			this->DiceDispBox6->Location = System::Drawing::Point(543, 199);
			this->DiceDispBox6->Name = L"DiceDispBox6";
			this->DiceDispBox6->Size = System::Drawing::Size(50, 50);
			this->DiceDispBox6->TabIndex = 11;
			this->DiceDispBox6->TabStop = false;
			this->DiceDispBox6->Visible = false;
			this->DiceDispBox6->Click += gcnew System::EventHandler(this, &MyForm::DiceDispBox6_Click);
			// 
			// picwin
			// 
			this->picwin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picwin.Image")));
			this->picwin->Location = System::Drawing::Point(79, 365);
			this->picwin->Name = L"picwin";
			this->picwin->Size = System::Drawing::Size(200, 50);
			this->picwin->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picwin->TabIndex = 13;
			this->picwin->TabStop = false;
			this->picwin->Visible = false;
			// 
			// piclose
			// 
			this->piclose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"piclose.Image")));
			this->piclose->Location = System::Drawing::Point(79, 365);
			this->piclose->Name = L"piclose";
			this->piclose->Size = System::Drawing::Size(200, 50);
			this->piclose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->piclose->TabIndex = 14;
			this->piclose->TabStop = false;
			this->piclose->Visible = false;
			// 
			// ud1
			// 
			this->ud1->AutoSize = true;
			this->ud1->BackColor = System::Drawing::Color::Transparent;
			this->ud1->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ud1->Location = System::Drawing::Point(47, 181);
			this->ud1->Name = L"ud1";
			this->ud1->Size = System::Drawing::Size(43, 29);
			this->ud1->TabIndex = 3;
			this->ud1->TabStop = true;
			this->ud1->Text = L"1";
			this->ud1->UseVisualStyleBackColor = false;
			// 
			// ud4
			// 
			this->ud4->AutoSize = true;
			this->ud4->BackColor = System::Drawing::Color::Transparent;
			this->ud4->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ud4->Location = System::Drawing::Point(80, 211);
			this->ud4->Name = L"ud4";
			this->ud4->Size = System::Drawing::Size(43, 29);
			this->ud4->TabIndex = 16;
			this->ud4->TabStop = true;
			this->ud4->Text = L"4";
			this->ud4->UseVisualStyleBackColor = false;
			// 
			// ud3
			// 
			this->ud3->AutoSize = true;
			this->ud3->BackColor = System::Drawing::Color::Transparent;
			this->ud3->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ud3->Location = System::Drawing::Point(173, 181);
			this->ud3->Name = L"ud3";
			this->ud3->Size = System::Drawing::Size(43, 29);
			this->ud3->TabIndex = 15;
			this->ud3->TabStop = true;
			this->ud3->Text = L"3";
			this->ud3->UseVisualStyleBackColor = false;
			// 
			// ud5
			// 
			this->ud5->AutoSize = true;
			this->ud5->BackColor = System::Drawing::Color::Transparent;
			this->ud5->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ud5->Location = System::Drawing::Point(132, 211);
			this->ud5->Name = L"ud5";
			this->ud5->Size = System::Drawing::Size(43, 29);
			this->ud5->TabIndex = 16;
			this->ud5->TabStop = true;
			this->ud5->Text = L"5";
			this->ud5->UseVisualStyleBackColor = false;
			// 
			// ud6
			// 
			this->ud6->AutoSize = true;
			this->ud6->BackColor = System::Drawing::Color::Transparent;
			this->ud6->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ud6->Location = System::Drawing::Point(184, 211);
			this->ud6->Name = L"ud6";
			this->ud6->Size = System::Drawing::Size(43, 29);
			this->ud6->TabIndex = 16;
			this->ud6->TabStop = true;
			this->ud6->Text = L"6";
			this->ud6->UseVisualStyleBackColor = false;
			// 
			// PCsLabel
			// 
			this->PCsLabel->AutoSize = true;
			this->PCsLabel->BackColor = System::Drawing::Color::Transparent;
			this->PCsLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PCsLabel->Location = System::Drawing::Point(387, 101);
			this->PCsLabel->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->PCsLabel->Name = L"PCsLabel";
			this->PCsLabel->Size = System::Drawing::Size(110, 25);
			this->PCsLabel->TabIndex = 0;
			this->PCsLabel->Text = L"PC\'s Dice";
			// 
			// ResultLabel
			// 
			this->ResultLabel->AutoSize = true;
			this->ResultLabel->BackColor = System::Drawing::Color::Transparent;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResultLabel->Location = System::Drawing::Point(30, 325);
			this->ResultLabel->Margin = System::Windows::Forms::Padding(7, 0, 7, 0);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(87, 25);
			this->ResultLabel->TabIndex = 17;
			this->ResultLabel->Text = L"Result:";
			// 
			// YourResult
			// 
			this->YourResult->AutoSize = true;
			this->YourResult->BackColor = System::Drawing::Color::Transparent;
			this->YourResult->Font = (gcnew System::Drawing::Font(L"いぬちゴシックP", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->YourResult->Location = System::Drawing::Point(80, 433);
			this->YourResult->Name = L"YourResult";
			this->YourResult->Size = System::Drawing::Size(43, 24);
			this->YourResult->TabIndex = 18;
			this->YourResult->Text = L"---";
			this->YourResult->Click += gcnew System::EventHandler(this, &MyForm::YourResult_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 24;
			this->listBox1->Location = System::Drawing::Point(158, 490);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(153, 52);
			this->listBox1->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(822, 611);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->YourResult);
			this->Controls->Add(this->ResultLabel);
			this->Controls->Add(this->ud6);
			this->Controls->Add(this->ud5);
			this->Controls->Add(this->ud4);
			this->Controls->Add(this->ud3);
			this->Controls->Add(this->piclose);
			this->Controls->Add(this->picwin);
			this->Controls->Add(this->DiceDispBox6);
			this->Controls->Add(this->DiceDispBox5);
			this->Controls->Add(this->DiceDispBox4);
			this->Controls->Add(this->DiceDispBox3);
			this->Controls->Add(this->DiceDispBox2);
			this->Controls->Add(this->DiceDispBox1);
			this->Controls->Add(this->picDiceInuchi);
			this->Controls->Add(this->ud2);
			this->Controls->Add(this->ud1);
			this->Controls->Add(this->titledice);
			this->Controls->Add(this->mainbutton);
			this->Controls->Add(this->PCsLabel);
			this->Controls->Add(this->PleaseMsgLabel);
			this->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DiceDice Forecast";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picDiceInuchi))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DiceDispBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picwin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->piclose))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		//DiceBoxClass (added ti)
		DiceBox^ _dice;

	private: System::Void mainbutton_Click(System::Object^  sender, System::EventArgs^  e) {


		//generate
		Random^ randomDice;
		int PCDiceNumber = 0;
		int UserDiceNumber = 0;

		randomDice = gcnew Random();
		PCDiceNumber = randomDice->Next(1, 7);


		//add (ti)
		//Debug::WriteLine("1st: valiable diceNumber is" + diceNumber.ToString() + ".");



		if (this->ud1->Checked == true) {
			UserDiceNumber = 1;
			System::Diagnostics::Debug::WriteLine("User: \"ud1\"が選択されたみたいです");
		}
		else if (this->ud2->Checked == true) {
			UserDiceNumber = 2;
			System::Diagnostics::Debug::WriteLine("User: \"ud2\"が選択されたみたいです");
		}
		else if (this->ud3->Checked == true) {
			UserDiceNumber = 3;
			System::Diagnostics::Debug::WriteLine("User: \"ud3\"が選択されたみたいです");
		}
		else if (this->ud4->Checked == true) {
			UserDiceNumber = 4;
			System::Diagnostics::Debug::WriteLine("User: \"ud4\"が選択されたみたいです");
		}
		else if (this->ud5->Checked == true) {
			UserDiceNumber = 5;
			System::Diagnostics::Debug::WriteLine("User: \"ud5\"が選択されたみたいです");
		}
		else if (this->ud6->Checked == true) {
			UserDiceNumber = 6;
			System::Diagnostics::Debug::WriteLine("User: \"ud6\"が選択されたみたいです");
		}
		else {
			UserDiceNumber = -1;
			MessageBox::Show("どれか選んで...","おねがい。");
			return;
		}

		ShowDice(PCDiceNumber);

		CheckResult(PCDiceNumber, UserDiceNumber);

	}

	private: System::Void ShowDice(int PCDiceNumber) {
		//all disable
		this->DiceDispBox1->Visible = false;
		this->DiceDispBox2->Visible = false;
		this->DiceDispBox3->Visible = false;
		this->DiceDispBox4->Visible = false;
		this->DiceDispBox5->Visible = false;
		this->DiceDispBox6->Visible = false;

		//disp
		switch (PCDiceNumber) {
		case 1:
			this->DiceDispBox1->Visible = true;
			break;
		case 2:
			this->DiceDispBox2->Visible = true;
			break;
		case 3:
			this->DiceDispBox3->Visible = true;
			break;
		case 4:
			this->DiceDispBox4->Visible = true;
			break;
		case 5:
			this->DiceDispBox5->Visible = true;
			break;
		case 6:
			this->DiceDispBox6->Visible = true;
			break;
		default:
			break;

		}


	}

	private: System::Void CheckResult(int PCDiceNumber, int UserDiceNumber){

		{

			System::Diagnostics::Debug::WriteLine("PC:   PCDiceNumber... " + PCDiceNumber.ToString());
			System::Diagnostics::Debug::WriteLine("USER: UserDiceNumber... " + UserDiceNumber.ToString());


			if (PCDiceNumber == UserDiceNumber) {
				isWin();
				System::Diagnostics::Debug::WriteLine("(a) win! ");
			}
			else if (PCDiceNumber != UserDiceNumber) {
				isLose();
				System::Diagnostics::Debug::WriteLine("(b) lose... ");
			}
			else {
				System::Diagnostics::Debug::WriteLine("(1)invalid valuse PCDiceNumber... " + PCDiceNumber.ToString());
				System::Diagnostics::Debug::WriteLine("(2)invalid valuse UserDiceNumber... " + UserDiceNumber.ToString());
				MessageBox::Show("おかしい(3)... " + PCDiceNumber.ToString());
				System::Diagnostics::Debug::WriteLine("--- ---");
				return;
			}
		}
		System::Diagnostics::Debug::WriteLine("---");

	}

	private: System::Void isWin() {
		//picture
		this->picwin->Visible = true;
		this->piclose->Visible = false;

		//text
		this->YourResult->Text = "Nice!";
		this->YourResult->ForeColor = Color::Red;
		this->YourResult->Visible = true;
		return;
	}
	private: System::Void isLose() {
		this->piclose->Visible  = true;
		this->picwin->Visible = false;
		//text
		this->YourResult->Text = "Oh...";
		this->YourResult->ForeColor = Color::Blue;
		this->YourResult->Visible = true;
		return;
	}

private: System::Void DiceDispBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ののの", "ももも");
}
private: System::Void DiceDispBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ほぞん", "ももも", MessageBoxButtons::OKCancel);
}
private: System::Void DiceDispBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ほん", "ももも", MessageBoxButtons::OK);
}
private: System::Void DiceDispBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ぞん", "ももも", MessageBoxButtons::YesNo);
}
private: System::Void DiceDispBox5_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ほ", "ももも", MessageBoxButtons::RetryCancel);
}
private: System::Void DiceDispBox6_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("ん", "ももも", MessageBoxButtons::AbortRetryIgnore);
}


private: System::Void MyForm_FormClosing(System::Object^  sender, 
	System::Windows::Forms::FormClosingEventArgs^  e) {
	if (System::Windows::Forms::DialogResult::Cancel ==
		MessageBox::Show("Finish Game?", "Confirm",
			MessageBoxButtons::OKCancel, MessageBoxIcon::Question))
	{
		e->Cancel = true;
	}
}

private: System::Void YourResult_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("こんにあ");

}


private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	_dice = gcnew DiceBox(6);
	ShowDice(_dice->number);
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	//shake!
	_dice->diceShake();
}
};
}
