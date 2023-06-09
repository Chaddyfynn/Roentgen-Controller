#pragma once
#include "Properties.h"

namespace TestCLRProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: Properties^ dos;
	public:
		MyForm(void)
		{
			InitializeComponent();
			dos = gcnew Properties;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







	private: System::Windows::Forms::SplitContainer^ splitContainer1;

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^ fileButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripDropDownButton^ editButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripDropDownButton^ toolsButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripDropDownButton^ helpButton;



	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ propertiesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ viewDocumentationToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button11;





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
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->fileButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->propertiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->editButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolsButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->viewDocumentationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 34);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label17);
			this->splitContainer1->Panel1->Controls->Add(this->label16);
			this->splitContainer1->Panel1->Controls->Add(this->button8);
			this->splitContainer1->Panel1->Controls->Add(this->button11);
			this->splitContainer1->Panel1->Controls->Add(this->button5);
			this->splitContainer1->Panel1->Controls->Add(this->button4);
			this->splitContainer1->Panel1->Controls->Add(this->textBox4);
			this->splitContainer1->Panel1->Controls->Add(this->button3);
			this->splitContainer1->Panel1->Controls->Add(this->textBox3);
			this->splitContainer1->Panel1->Controls->Add(this->textBox2);
			this->splitContainer1->Panel1->Controls->Add(this->textBox1);
			this->splitContainer1->Panel1->Controls->Add(this->button10);
			this->splitContainer1->Panel1->Controls->Add(this->button9);
			this->splitContainer1->Panel1->Controls->Add(this->button2);
			this->splitContainer1->Panel1->Controls->Add(this->button7);
			this->splitContainer1->Panel1->Controls->Add(this->button6);
			this->splitContainer1->Panel1->Controls->Add(this->label18);
			this->splitContainer1->Panel1->Controls->Add(this->button1);
			this->splitContainer1->Panel1->Controls->Add(this->label15);
			this->splitContainer1->Panel1->Controls->Add(this->label12);
			this->splitContainer1->Panel1->Controls->Add(this->label11);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			this->splitContainer1->Panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel1_Paint);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->label14);
			this->splitContainer1->Panel2->Controls->Add(this->label10);
			this->splitContainer1->Panel2->Controls->Add(this->label9);
			this->splitContainer1->Panel2->Controls->Add(this->label8);
			this->splitContainer1->Panel2->Controls->Add(this->label7);
			this->splitContainer1->Panel2->Controls->Add(this->label5);
			this->splitContainer1->Panel2->Controls->Add(this->label4);
			this->splitContainer1->Panel2->Controls->Add(this->label13);
			this->splitContainer1->Panel2->Controls->Add(this->label6);
			this->splitContainer1->Panel2->Controls->Add(this->label3);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->progressBar3);
			this->splitContainer1->Panel2->Controls->Add(this->progressBar5);
			this->splitContainer1->Panel2->Controls->Add(this->progressBar2);
			this->splitContainer1->Panel2->Controls->Add(this->progressBar4);
			this->splitContainer1->Panel2->Controls->Add(this->progressBar1);
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::splitContainer1_Panel2_Paint);
			this->splitContainer1->Size = System::Drawing::Size(1610, 774);
			this->splitContainer1->SplitterDistance = 535;
			this->splitContainer1->SplitterWidth = 6;
			this->splitContainer1->TabIndex = 1;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(20, 258);
			this->label17->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(104, 25);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Software:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(18, 65);
			this->label16->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(157, 25);
			this->label16->TabIndex = 5;
			this->label16->Text = L"X-RAY Device:";
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Location = System::Drawing::Point(302, 386);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(76, 30);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Set All";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Location = System::Drawing::Point(302, 328);
			this->button11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(48, 30);
			this->button11->TabIndex = 4;
			this->button11->Text = L"Set";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(302, 288);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(48, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Set";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(302, 139);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(48, 30);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Set";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(142, 330);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 26);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Set Time...";
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(302, 100);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(48, 30);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Set";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(142, 290);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 26);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Set Time...";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(142, 143);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Set Voltage...";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(142, 102);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 26);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Set Voltage...";
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(22, 382);
			this->button10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 35);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Advanced";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Location = System::Drawing::Point(24, 190);
			this->button9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 35);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Advanced";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(33, 650);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"PREHEAT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightGreen;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(188, 650);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(146, 42);
			this->button7->TabIndex = 1;
			this->button7->Text = L"RUN";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(188, 695);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(146, 42);
			this->button6->TabIndex = 1;
			this->button6->Text = L"RUN (Delay)";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(20, 335);
			this->label18->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(63, 20);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Delay:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCoral;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(342, 650);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 86);
			this->button1->TabIndex = 1;
			this->button1->Text = L"AZ-5 [SCRAM]";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(20, 295);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(63, 20);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Timer:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(20, 148);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(95, 20);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Electrode:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(20, 106);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(87, 20);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Filament:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Control:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(435, 148);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(14, 20);
			this->label14->TabIndex = 3;
			this->label14->Text = L"-";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(114, 148);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(14, 20);
			this->label10->TabIndex = 3;
			this->label10->Text = L"-";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(789, 65);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(14, 20);
			this->label9->TabIndex = 3;
			this->label9->Text = L"-";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(447, 62);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 20);
			this->label8->TabIndex = 3;
			this->label8->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(99, 62);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(14, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(720, 62);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 20);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Power:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(369, 62);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 20);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Voltage:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(369, 148);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(59, 20);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Dose:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(22, 148);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 20);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Radiation:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(22, 62);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Current:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(21, 18);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Operations:";
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(724, 90);
			this->progressBar3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(318, 35);
			this->progressBar3->TabIndex = 0;
			this->progressBar3->Value = 90;
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(374, 172);
			this->progressBar5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(318, 35);
			this->progressBar5->TabIndex = 0;
			this->progressBar5->Value = 20;
			// 
			// progressBar2
			// 
			this->progressBar2->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar2->Location = System::Drawing::Point(374, 90);
			this->progressBar2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(318, 35);
			this->progressBar2->TabIndex = 0;
			this->progressBar2->Value = 90;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(27, 172);
			this->progressBar4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(318, 35);
			this->progressBar4->TabIndex = 0;
			this->progressBar4->Value = 40;
			// 
			// progressBar1
			// 
			this->progressBar1->BackColor = System::Drawing::SystemColors::Control;
			this->progressBar1->Location = System::Drawing::Point(27, 90);
			this->progressBar1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->progressBar1->Size = System::Drawing::Size(318, 35);
			this->progressBar1->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->progressBar1->TabIndex = 0;
			this->progressBar1->Value = 85;
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->fileButton, this->toolStripSeparator1,
					this->editButton, this->toolStripSeparator2, this->toolsButton, this->toolStripSeparator3, this->helpButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Padding = System::Windows::Forms::Padding(0, 0, 3, 0);
			this->toolStrip1->Size = System::Drawing::Size(1610, 34);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// fileButton
			// 
			this->fileButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->fileButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->propertiesToolStripMenuItem });
			this->fileButton->Name = L"fileButton";
			this->fileButton->Size = System::Drawing::Size(56, 29);
			this->fileButton->Text = L"File";
			this->fileButton->Click += gcnew System::EventHandler(this, &MyForm::fileButton_Click);
			// 
			// propertiesToolStripMenuItem
			// 
			this->propertiesToolStripMenuItem->Name = L"propertiesToolStripMenuItem";
			this->propertiesToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->propertiesToolStripMenuItem->Text = L"Preferences";
			this->propertiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::propertiesToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 34);
			// 
			// editButton
			// 
			this->editButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(60, 29);
			this->editButton->Text = L"Edit";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 34);
			// 
			// toolsButton
			// 
			this->toolsButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolsButton->Name = L"toolsButton";
			this->toolsButton->Size = System::Drawing::Size(71, 29);
			this->toolsButton->Text = L"Tools";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 34);
			// 
			// helpButton
			// 
			this->helpButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->helpButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->viewDocumentationToolStripMenuItem });
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(67, 29);
			this->helpButton->Text = L"Help";
			// 
			// viewDocumentationToolStripMenuItem
			// 
			this->viewDocumentationToolStripMenuItem->Name = L"viewDocumentationToolStripMenuItem";
			this->viewDocumentationToolStripMenuItem->Size = System::Drawing::Size(279, 34);
			this->viewDocumentationToolStripMenuItem->Text = L"View Documentation";
			this->viewDocumentationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::viewDocumentationToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1610, 808);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"Roentgen X-RAY Controller";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void fileButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reduToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void propertiesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((dos->Visible)) {
		dos->Visible = true;
	}
	else {
		Properties^ dos = gcnew Properties;
		dos->Show();
	}
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void viewDocumentationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Diagnostics::Process::Start("https://github.com/Chaddyfynn/Roentgen-Controller");
}
};
}
