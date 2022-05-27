#pragma once

namespace onearmedform {

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

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemFile;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemRules;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemSettings;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemGame;

	protected:




	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemPictures;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemRevolves;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemScore;
	private: System::Windows::Forms::ToolStripMenuItem^ ToolStripMenuItemExit;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button;


	private: System::Windows::Forms::Label^ labelRevolves;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonprim1;
	private: System::Windows::Forms::Button^ buttonprim2;
	private: System::Windows::Forms::Button^ buttonprim3;
	private: System::Windows::Forms::Button^ buttonprim4;
	private: System::Windows::Forms::Button^ buttonprim5;
	private: System::Windows::Forms::Button^ buttonprim6;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Timer^ dvig1;
	private: System::Windows::Forms::Timer^ dvig2;
	private: System::Windows::Forms::Timer^ dvig3;
	private: System::Windows::Forms::Timer^ stop1;
	private: System::Windows::Forms::Timer^ stop2;
	private: System::Windows::Forms::Timer^ stop3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Button^ buttonAmount;

	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox12;




	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ Score1;
	private: System::Windows::Forms::Label^ Amount1;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ Amount2;

	private: System::Windows::Forms::Label^ Score2;





	private: System::ComponentModel::IContainer^ components;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ToolStripMenuItemFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemRules = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemSettings = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemPictures = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemRevolves = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemGame = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemScore = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ToolStripMenuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button = (gcnew System::Windows::Forms::Button());
			this->labelRevolves = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonAmount = (gcnew System::Windows::Forms::Button());
			this->buttonprim1 = (gcnew System::Windows::Forms::Button());
			this->buttonprim2 = (gcnew System::Windows::Forms::Button());
			this->buttonprim3 = (gcnew System::Windows::Forms::Button());
			this->buttonprim4 = (gcnew System::Windows::Forms::Button());
			this->buttonprim5 = (gcnew System::Windows::Forms::Button());
			this->buttonprim6 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->dvig1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dvig2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->dvig3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->stop1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->stop2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->stop3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->Score1 = (gcnew System::Windows::Forms::Label());
			this->Amount1 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->Score2 = (gcnew System::Windows::Forms::Label());
			this->Amount2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ToolStripMenuItemFile });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(987, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ToolStripMenuItemFile
			// 
			this->ToolStripMenuItemFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ToolStripMenuItemRules,
					this->ToolStripMenuItemSettings, this->ToolStripMenuItemGame, this->ToolStripMenuItemScore, this->ToolStripMenuItemExit
			});
			this->ToolStripMenuItemFile->Name = L"ToolStripMenuItemFile";
			this->ToolStripMenuItemFile->Size = System::Drawing::Size(59, 24);
			this->ToolStripMenuItemFile->Text = L"Файл";
			// 
			// ToolStripMenuItemRules
			// 
			this->ToolStripMenuItemRules->Name = L"ToolStripMenuItemRules";
			this->ToolStripMenuItemRules->Size = System::Drawing::Size(167, 26);
			this->ToolStripMenuItemRules->Text = L"Правила";
			this->ToolStripMenuItemRules->Click += gcnew System::EventHandler(this, &MyForm::правилаToolStripMenuItem_Click);
			// 
			// ToolStripMenuItemSettings
			// 
			this->ToolStripMenuItemSettings->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ToolStripMenuItemPictures,
					this->ToolStripMenuItemRevolves
			});
			this->ToolStripMenuItemSettings->Name = L"ToolStripMenuItemSettings";
			this->ToolStripMenuItemSettings->Size = System::Drawing::Size(167, 26);
			this->ToolStripMenuItemSettings->Text = L"Настройки";
			// 
			// ToolStripMenuItemPictures
			// 
			this->ToolStripMenuItemPictures->Name = L"ToolStripMenuItemPictures";
			this->ToolStripMenuItemPictures->Size = System::Drawing::Size(249, 26);
			this->ToolStripMenuItemPictures->Text = L"Выбор картинок";
			this->ToolStripMenuItemPictures->Click += gcnew System::EventHandler(this, &MyForm::выборКартинокToolStripMenuItem_Click);
			// 
			// ToolStripMenuItemRevolves
			// 
			this->ToolStripMenuItemRevolves->Name = L"ToolStripMenuItemRevolves";
			this->ToolStripMenuItemRevolves->Size = System::Drawing::Size(249, 26);
			this->ToolStripMenuItemRevolves->Text = L"Количество вращений";
			this->ToolStripMenuItemRevolves->Click += gcnew System::EventHandler(this, &MyForm::количествоВращенийToolStripMenuItem_Click);
			// 
			// ToolStripMenuItemGame
			// 
			this->ToolStripMenuItemGame->Name = L"ToolStripMenuItemGame";
			this->ToolStripMenuItemGame->Size = System::Drawing::Size(167, 26);
			this->ToolStripMenuItemGame->Text = L"Игра";
			this->ToolStripMenuItemGame->Click += gcnew System::EventHandler(this, &MyForm::играToolStripMenuItem_Click);
			// 
			// ToolStripMenuItemScore
			// 
			this->ToolStripMenuItemScore->Name = L"ToolStripMenuItemScore";
			this->ToolStripMenuItemScore->Size = System::Drawing::Size(167, 26);
			this->ToolStripMenuItemScore->Text = L"Счет";
			this->ToolStripMenuItemScore->Click += gcnew System::EventHandler(this, &MyForm::счетToolStripMenuItemScore_Click);
			// 
			// ToolStripMenuItemExit
			// 
			this->ToolStripMenuItemExit->Name = L"ToolStripMenuItemExit";
			this->ToolStripMenuItemExit->Size = System::Drawing::Size(167, 26);
			this->ToolStripMenuItemExit->Text = L"Выход";
			this->ToolStripMenuItemExit->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(6, 21);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(131, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 96);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(259, 21);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 96);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(6, 173);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 96);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 4;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(131, 173);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(100, 96);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 5;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(259, 173);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(100, 96);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 6;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(143, 483);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(146, 44);
			this->button->TabIndex = 7;
			this->button->Text = L"Пуск";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// labelRevolves
			// 
			this->labelRevolves->Location = System::Drawing::Point(6, 33);
			this->labelRevolves->Name = L"labelRevolves";
			this->labelRevolves->Size = System::Drawing::Size(169, 30);
			this->labelRevolves->TabIndex = 10;
			this->labelRevolves->Text = L"Количсетво вращений:";
			this->labelRevolves->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(282, 31);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(121, 22);
			this->numericUpDown2->TabIndex = 11;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown2_ValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonAmount);
			this->groupBox2->Controls->Add(this->labelRevolves);
			this->groupBox2->Controls->Add(this->numericUpDown2);
			this->groupBox2->Location = System::Drawing::Point(23, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(409, 105);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// buttonAmount
			// 
			this->buttonAmount->Location = System::Drawing::Point(155, 66);
			this->buttonAmount->Name = L"buttonAmount";
			this->buttonAmount->Size = System::Drawing::Size(97, 33);
			this->buttonAmount->TabIndex = 12;
			this->buttonAmount->Text = L"Применить";
			this->buttonAmount->UseVisualStyleBackColor = true;
			this->buttonAmount->Visible = false;
			this->buttonAmount->Click += gcnew System::EventHandler(this, &MyForm::buttonAmount_Click);
			// 
			// buttonprim1
			// 
			this->buttonprim1->Location = System::Drawing::Point(6, 132);
			this->buttonprim1->Name = L"buttonprim1";
			this->buttonprim1->Size = System::Drawing::Size(100, 23);
			this->buttonprim1->TabIndex = 14;
			this->buttonprim1->Text = L"Применить";
			this->buttonprim1->UseVisualStyleBackColor = true;
			this->buttonprim1->Visible = false;
			this->buttonprim1->Click += gcnew System::EventHandler(this, &MyForm::buttonprim1_Click);
			// 
			// buttonprim2
			// 
			this->buttonprim2->Location = System::Drawing::Point(131, 132);
			this->buttonprim2->Name = L"buttonprim2";
			this->buttonprim2->Size = System::Drawing::Size(100, 23);
			this->buttonprim2->TabIndex = 15;
			this->buttonprim2->Text = L"Применить";
			this->buttonprim2->UseVisualStyleBackColor = true;
			this->buttonprim2->Visible = false;
			this->buttonprim2->Click += gcnew System::EventHandler(this, &MyForm::buttonprim2_Click);
			// 
			// buttonprim3
			// 
			this->buttonprim3->Location = System::Drawing::Point(259, 132);
			this->buttonprim3->Name = L"buttonprim3";
			this->buttonprim3->Size = System::Drawing::Size(100, 23);
			this->buttonprim3->TabIndex = 16;
			this->buttonprim3->Text = L"Применить";
			this->buttonprim3->UseVisualStyleBackColor = true;
			this->buttonprim3->Visible = false;
			this->buttonprim3->Click += gcnew System::EventHandler(this, &MyForm::buttonprim3_Click);
			// 
			// buttonprim4
			// 
			this->buttonprim4->Location = System::Drawing::Point(6, 275);
			this->buttonprim4->Name = L"buttonprim4";
			this->buttonprim4->Size = System::Drawing::Size(100, 23);
			this->buttonprim4->TabIndex = 17;
			this->buttonprim4->Text = L"Применить";
			this->buttonprim4->UseVisualStyleBackColor = true;
			this->buttonprim4->Visible = false;
			this->buttonprim4->Click += gcnew System::EventHandler(this, &MyForm::buttonprim4_Click);
			// 
			// buttonprim5
			// 
			this->buttonprim5->Location = System::Drawing::Point(131, 275);
			this->buttonprim5->Name = L"buttonprim5";
			this->buttonprim5->Size = System::Drawing::Size(100, 23);
			this->buttonprim5->TabIndex = 18;
			this->buttonprim5->Text = L"Применить";
			this->buttonprim5->UseVisualStyleBackColor = true;
			this->buttonprim5->Visible = false;
			this->buttonprim5->Click += gcnew System::EventHandler(this, &MyForm::buttonprim5_Click);
			// 
			// buttonprim6
			// 
			this->buttonprim6->Location = System::Drawing::Point(259, 275);
			this->buttonprim6->Name = L"buttonprim6";
			this->buttonprim6->Size = System::Drawing::Size(100, 23);
			this->buttonprim6->TabIndex = 19;
			this->buttonprim6->Text = L"Применить";
			this->buttonprim6->UseVisualStyleBackColor = true;
			this->buttonprim6->Visible = false;
			this->buttonprim6->Click += gcnew System::EventHandler(this, &MyForm::buttonprim6_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->pictureBox1);
			this->groupBox3->Controls->Add(this->buttonprim3);
			this->groupBox3->Controls->Add(this->buttonprim6);
			this->groupBox3->Controls->Add(this->buttonprim2);
			this->groupBox3->Controls->Add(this->pictureBox2);
			this->groupBox3->Controls->Add(this->buttonprim5);
			this->groupBox3->Controls->Add(this->pictureBox3);
			this->groupBox3->Controls->Add(this->buttonprim4);
			this->groupBox3->Controls->Add(this->buttonprim1);
			this->groupBox3->Controls->Add(this->pictureBox4);
			this->groupBox3->Controls->Add(this->pictureBox5);
			this->groupBox3->Controls->Add(this->pictureBox6);
			this->groupBox3->Location = System::Drawing::Point(23, 142);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(394, 322);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Выберите картинку:";
			this->groupBox3->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->pictureBox7);
			this->groupBox4->Controls->Add(this->pictureBox8);
			this->groupBox4->Controls->Add(this->pictureBox9);
			this->groupBox4->Location = System::Drawing::Point(12, 142);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(431, 327);
			this->groupBox4->TabIndex = 21;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Барабан";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(9, 85);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 96);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.InitialImage")));
			this->pictureBox8->Location = System::Drawing::Point(166, 85);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(100, 96);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 2;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(325, 85);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(100, 96);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 3;
			this->pictureBox9->TabStop = false;
			// 
			// dvig1
			// 
			this->dvig1->Interval = 250;
			this->dvig1->Tick += gcnew System::EventHandler(this, &MyForm::dvig1_Tick);
			// 
			// dvig2
			// 
			this->dvig2->Interval = 250;
			this->dvig2->Tick += gcnew System::EventHandler(this, &MyForm::dvig2_Tick);
			// 
			// dvig3
			// 
			this->dvig3->Interval = 250;
			this->dvig3->Tick += gcnew System::EventHandler(this, &MyForm::dvig3_Tick);
			// 
			// stop1
			// 
			this->stop1->Interval = 1500;
			this->stop1->Tick += gcnew System::EventHandler(this, &MyForm::stop1_Tick);
			// 
			// stop2
			// 
			this->stop2->Interval = 2500;
			this->stop2->Tick += gcnew System::EventHandler(this, &MyForm::stop2_Tick);
			// 
			// stop3
			// 
			this->stop3->Interval = 3000;
			this->stop3->Tick += gcnew System::EventHandler(this, &MyForm::stop3_Tick);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.InitialImage")));
			this->pictureBox10->Location = System::Drawing::Point(504, 227);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(100, 96);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 22;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.InitialImage")));
			this->pictureBox11->Location = System::Drawing::Point(657, 227);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(100, 96);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 23;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(809, 227);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(100, 96);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 24;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->Amount1);
			this->groupBox6->Controls->Add(this->Score1);
			this->groupBox6->Location = System::Drawing::Point(19, 42);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(418, 71);
			this->groupBox6->TabIndex = 11;
			this->groupBox6->TabStop = false;
			this->groupBox6->Visible = false;
			// 
			// Score1
			// 
			this->Score1->Location = System::Drawing::Point(6, 30);
			this->Score1->Name = L"Score1";
			this->Score1->Size = System::Drawing::Size(143, 23);
			this->Score1->TabIndex = 0;
			this->Score1->Text = L"Счет:";
			// 
			// Amount1
			// 
			this->Amount1->Location = System::Drawing::Point(370, 24);
			this->Amount1->Name = L"Amount1";
			this->Amount1->Size = System::Drawing::Size(42, 23);
			this->Amount1->TabIndex = 1;
			this->Amount1->Text = L"0";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->Amount2);
			this->groupBox7->Controls->Add(this->Score2);
			this->groupBox7->Location = System::Drawing::Point(19, 33);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(426, 86);
			this->groupBox7->TabIndex = 2;
			this->groupBox7->TabStop = false;
			this->groupBox7->Visible = false;
			// 
			// Score2
			// 
			this->Score2->Location = System::Drawing::Point(3, 24);
			this->Score2->Name = L"Score2";
			this->Score2->Size = System::Drawing::Size(100, 23);
			this->Score2->TabIndex = 0;
			this->Score2->Text = L"Счет:";
			this->Score2->Visible = false;
			// 
			// Amount2
			// 
			this->Amount2->Location = System::Drawing::Point(343, 27);
			this->Amount2->Name = L"Amount2";
			this->Amount2->Size = System::Drawing::Size(66, 20);
			this->Amount2->TabIndex = 1;
			this->Amount2->Text = L"0";
			this->Amount2->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(987, 617);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Однорукий бандит!";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->LocationChanged += gcnew System::EventHandler(this, &MyForm::счетToolStripMenuItemScore_Click);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void правилаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выборКартинокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void количествоВращенийToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void играToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void счетToolStripMenuItemScore_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonprim1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonprim2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonprim3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonprim4_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonprim5_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonprim6_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dvig1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dvig2_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void dvig3_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void stop1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void stop2_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void stop3_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonAmount_Click(System::Object^ sender, System::EventArgs^ e);

};
}
