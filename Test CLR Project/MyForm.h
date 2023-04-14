#pragma once

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
	public:
		MyForm(void)
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
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ propertiesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reduToolStripMenuItem;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
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
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->propertiesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->editButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->reduToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolsButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpButton = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->viewDocumentationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->splitContainer1->Location = System::Drawing::Point(0, 25);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label17);
			this->splitContainer1->Panel1->Controls->Add(this->label16);
			this->splitContainer1->Panel1->Controls->Add(this->button8);
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
			this->splitContainer1->Size = System::Drawing::Size(1073, 500);
			this->splitContainer1->SplitterDistance = 357;
			this->splitContainer1->TabIndex = 1;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(201, 188);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 20);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Set";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(201, 93);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(32, 20);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Set";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(201, 66);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(32, 20);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Set";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(95, 189);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"Set Time...";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(95, 93);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"Set Voltage...";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Set Voltage...";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightCoral;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(228, 423);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"AZ-5 [SCRAM]";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(13, 192);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(42, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Timer:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(13, 96);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 13);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Electrode:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(13, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 2;
			this->label11->Text = L"Filament:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Control:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(290, 96);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(10, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"-";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(76, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(10, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"-";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(526, 42);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(10, 13);
			this->label9->TabIndex = 3;
			this->label9->Text = L"-";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(298, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"-";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(66, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(10, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(480, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Power:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(246, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Voltage:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(246, 96);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(40, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Dose:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(65, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Radiation:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(15, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Current:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(14, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Operations:";
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(483, 58);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(212, 23);
			this->progressBar3->TabIndex = 0;
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(249, 112);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(212, 23);
			this->progressBar5->TabIndex = 0;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(249, 58);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(212, 23);
			this->progressBar2->TabIndex = 0;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(18, 112);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(212, 23);
			this->progressBar4->TabIndex = 0;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 58);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(212, 23);
			this->progressBar1->TabIndex = 0;
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->fileButton, this->toolStripSeparator1,
					this->editButton, this->toolStripSeparator2, this->toolsButton, this->toolStripSeparator3, this->helpButton
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1073, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// fileButton
			// 
			this->fileButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->fileButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->propertiesToolStripMenuItem
			});
			this->fileButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fileButton.Image")));
			this->fileButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->fileButton->Name = L"fileButton";
			this->fileButton->Size = System::Drawing::Size(38, 22);
			this->fileButton->Text = L"File";
			this->fileButton->Click += gcnew System::EventHandler(this, &MyForm::fileButton_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->openToolStripMenuItem->Text = L"Open";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->saveAsToolStripMenuItem->Text = L"Save as";
			// 
			// propertiesToolStripMenuItem
			// 
			this->propertiesToolStripMenuItem->Name = L"propertiesToolStripMenuItem";
			this->propertiesToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->propertiesToolStripMenuItem->Text = L"Preferences";
			this->propertiesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::propertiesToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 25);
			// 
			// editButton
			// 
			this->editButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->editButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->reduToolStripMenuItem,
					this->undoToolStripMenuItem
			});
			this->editButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"editButton.Image")));
			this->editButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(40, 22);
			this->editButton->Text = L"Edit";
			// 
			// reduToolStripMenuItem
			// 
			this->reduToolStripMenuItem->Name = L"reduToolStripMenuItem";
			this->reduToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->reduToolStripMenuItem->Text = L"Redo";
			this->reduToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::reduToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 25);
			// 
			// toolsButton
			// 
			this->toolsButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolsButton.Image")));
			this->toolsButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolsButton->Name = L"toolsButton";
			this->toolsButton->Size = System::Drawing::Size(47, 22);
			this->toolsButton->Text = L"Tools";
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 25);
			// 
			// helpButton
			// 
			this->helpButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->helpButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->viewDocumentationToolStripMenuItem });
			this->helpButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpButton.Image")));
			this->helpButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(45, 22);
			this->helpButton->Text = L"Help";
			// 
			// viewDocumentationToolStripMenuItem
			// 
			this->viewDocumentationToolStripMenuItem->Name = L"viewDocumentationToolStripMenuItem";
			this->viewDocumentationToolStripMenuItem->Size = System::Drawing::Size(185, 22);
			this->viewDocumentationToolStripMenuItem->Text = L"View Documentation";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(125, 452);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 27);
			this->button6->TabIndex = 1;
			this->button6->Text = L"RUN (Delay)";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::LightGreen;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(125, 423);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 27);
			this->button7->TabIndex = 1;
			this->button7->Text = L"RUN";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(12, 42);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(109, 16);
			this->label16->TabIndex = 5;
			this->label16->Text = L"X-RAY Device:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(13, 168);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 16);
			this->label17->TabIndex = 5;
			this->label17->Text = L"Software:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(13, 218);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(43, 13);
			this->label18->TabIndex = 2;
			this->label18->Text = L"Delay:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(95, 215);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 3;
			this->textBox4->Text = L"Set Time...";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(201, 214);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(32, 20);
			this->button8->TabIndex = 4;
			this->button8->Text = L"Set";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(16, 124);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Advanced";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(15, 248);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 2;
			this->button10->Text = L"Advanced";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(22, 423);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 27);
			this->button2->TabIndex = 1;
			this->button2->Text = L"PREHEAT";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 525);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"MyForm";
			this->Text = L"Roentgen X-RAY Controller";
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
}
private: System::Void splitContainer1_Panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitContainer1_Panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
