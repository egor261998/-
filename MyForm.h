#pragma once

namespace пики {

	using namespace std;
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace OpenTK::Platform::Windows;
	using namespace OpenTK::Graphics::OpenGL;
	
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::HScrollBar^ hScrollBar_piki_odin;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::HScrollBar^ hScrollBar_piki_rez;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::HScrollBar^ hScrollBar_pl1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::HScrollBar^ hScrollBar_pl2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::HScrollBar^ hScrollBar_pl3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::HScrollBar^ hScrollBar_cheat;
	private: System::Windows::Forms::Button^ button_learn;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Panel^ panel_metod1;















	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox_metod1_only_div_disp;
	private: System::Windows::Forms::TextBox^ textBox_metod1_only_div_all;
	private: System::Windows::Forms::TextBox^ textBox_metod1_disp;
	private: System::Windows::Forms::TextBox^ textBox_metod1_all;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox_metod1_only;
	private: OpenTK::GLControl^ glControl1;
	private: System::Windows::Forms::Panel^ panel_metod2;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox_metod2_3;
	private: System::Windows::Forms::TextBox^ textBox_metod2_2;
	private: System::Windows::Forms::TextBox^ textBox_metod2_1;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox_metod2_only;
	private: System::Windows::Forms::TextBox^ textBox_metod2_only_div_all;


	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;


	public:
		CMain* m_Main;
		   
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
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar_piki_odin = (gcnew System::Windows::Forms::HScrollBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar_piki_rez = (gcnew System::Windows::Forms::HScrollBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar_pl1 = (gcnew System::Windows::Forms::HScrollBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar_pl2 = (gcnew System::Windows::Forms::HScrollBar());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar_pl3 = (gcnew System::Windows::Forms::HScrollBar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->hScrollBar_cheat = (gcnew System::Windows::Forms::HScrollBar());
			this->button_learn = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->glControl1 = (gcnew OpenTK::GLControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel_metod2 = (gcnew System::Windows::Forms::Panel());
			this->textBox_metod2_only = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod2_only_div_all = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox_metod2_3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod2_2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod2_1 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel_metod1 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox_metod1_only = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox_metod1_all = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox_metod1_disp = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod1_only_div_disp = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod1_only_div_all = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel_metod2->SuspendLayout();
			this->panel_metod1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Следущий";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(93, 14);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1109, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1030, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Одинаковость пик";
			// 
			// hScrollBar_piki_odin
			// 
			this->hScrollBar_piki_odin->Location = System::Drawing::Point(1021, 22);
			this->hScrollBar_piki_odin->Name = L"hScrollBar_piki_odin";
			this->hScrollBar_piki_odin->Size = System::Drawing::Size(150, 20);
			this->hScrollBar_piki_odin->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1024, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Резкость пик";
			// 
			// hScrollBar_piki_rez
			// 
			this->hScrollBar_piki_rez->Location = System::Drawing::Point(1021, 83);
			this->hScrollBar_piki_rez->Name = L"hScrollBar_piki_rez";
			this->hScrollBar_piki_rez->Size = System::Drawing::Size(150, 20);
			this->hScrollBar_piki_rez->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1024, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Плавность 1ой";
			// 
			// hScrollBar_pl1
			// 
			this->hScrollBar_pl1->Location = System::Drawing::Point(1021, 164);
			this->hScrollBar_pl1->Name = L"hScrollBar_pl1";
			this->hScrollBar_pl1->Size = System::Drawing::Size(150, 20);
			this->hScrollBar_pl1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1024, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Плавность 2ой";
			// 
			// hScrollBar_pl2
			// 
			this->hScrollBar_pl2->Location = System::Drawing::Point(1021, 229);
			this->hScrollBar_pl2->Name = L"hScrollBar_pl2";
			this->hScrollBar_pl2->Size = System::Drawing::Size(150, 20);
			this->hScrollBar_pl2->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1024, 282);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Плавность 3ий";
			// 
			// hScrollBar_pl3
			// 
			this->hScrollBar_pl3->Location = System::Drawing::Point(1021, 295);
			this->hScrollBar_pl3->Name = L"hScrollBar_pl3";
			this->hScrollBar_pl3->Size = System::Drawing::Size(150, 20);
			this->hScrollBar_pl3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1030, 475);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Вероятность читера";
			// 
			// hScrollBar_cheat
			// 
			this->hScrollBar_cheat->Location = System::Drawing::Point(1021, 488);
			this->hScrollBar_cheat->Name = L"hScrollBar_cheat";
			this->hScrollBar_cheat->Size = System::Drawing::Size(150, 20);
			this->hScrollBar_cheat->TabIndex = 8;
			// 
			// button_learn
			// 
			this->button_learn->Location = System::Drawing::Point(1021, 566);
			this->button_learn->Name = L"button_learn";
			this->button_learn->Size = System::Drawing::Size(150, 40);
			this->button_learn->TabIndex = 17;
			this->button_learn->Text = L"Обучить";
			this->button_learn->UseVisualStyleBackColor = true;
			this->button_learn->Click += gcnew System::EventHandler(this, &MyForm::button_learn_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1194, 650);
			this->tabControl1->TabIndex = 19;
			this->tabControl1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::tabControl1_MouseClick);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage1->Controls->Add(this->glControl1);
			this->tabPage1->Controls->Add(this->button_learn);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->hScrollBar_pl3);
			this->tabPage1->Controls->Add(this->hScrollBar_piki_odin);
			this->tabPage1->Controls->Add(this->hScrollBar_pl2);
			this->tabPage1->Controls->Add(this->hScrollBar_piki_rez);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->hScrollBar_pl1);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->hScrollBar_cheat);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1186, 624);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Tag = L"0";
			this->tabPage1->Text = L"Главное";
			// 
			// glControl1
			// 
			this->glControl1->BackColor = System::Drawing::Color::Black;
			this->glControl1->Location = System::Drawing::Point(6, 6);
			this->glControl1->Name = L"glControl1";
			this->glControl1->Size = System::Drawing::Size(1000, 600);
			this->glControl1->TabIndex = 18;
			this->glControl1->VSync = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage2->Controls->Add(this->panel_metod2);
			this->tabPage2->Controls->Add(this->panel_metod1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1186, 624);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Tag = L"1";
			this->tabPage2->Text = L"Методы";
			// 
			// panel_metod2
			// 
			this->panel_metod2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel_metod2->Controls->Add(this->textBox_metod2_only);
			this->panel_metod2->Controls->Add(this->textBox_metod2_only_div_all);
			this->panel_metod2->Controls->Add(this->label18);
			this->panel_metod2->Controls->Add(this->label17);
			this->panel_metod2->Controls->Add(this->textBox_metod2_3);
			this->panel_metod2->Controls->Add(this->textBox_metod2_2);
			this->panel_metod2->Controls->Add(this->textBox_metod2_1);
			this->panel_metod2->Controls->Add(this->label16);
			this->panel_metod2->Controls->Add(this->label15);
			this->panel_metod2->Controls->Add(this->label14);
			this->panel_metod2->Controls->Add(this->label13);
			this->panel_metod2->Location = System::Drawing::Point(298, 6);
			this->panel_metod2->Name = L"panel_metod2";
			this->panel_metod2->Size = System::Drawing::Size(309, 287);
			this->panel_metod2->TabIndex = 2;
			// 
			// textBox_metod2_only
			// 
			this->textBox_metod2_only->Location = System::Drawing::Point(80, 50);
			this->textBox_metod2_only->Name = L"textBox_metod2_only";
			this->textBox_metod2_only->Size = System::Drawing::Size(200, 20);
			this->textBox_metod2_only->TabIndex = 10;
			// 
			// textBox_metod2_only_div_all
			// 
			this->textBox_metod2_only_div_all->Location = System::Drawing::Point(80, 100);
			this->textBox_metod2_only_div_all->Name = L"textBox_metod2_only_div_all";
			this->textBox_metod2_only_div_all->Size = System::Drawing::Size(200, 20);
			this->textBox_metod2_only_div_all->TabIndex = 9;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 100);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(43, 13);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Only/all";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 50);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(28, 13);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Only";
			// 
			// textBox_metod2_3
			// 
			this->textBox_metod2_3->Location = System::Drawing::Point(80, 250);
			this->textBox_metod2_3->Name = L"textBox_metod2_3";
			this->textBox_metod2_3->Size = System::Drawing::Size(200, 20);
			this->textBox_metod2_3->TabIndex = 6;
			// 
			// textBox_metod2_2
			// 
			this->textBox_metod2_2->Location = System::Drawing::Point(80, 200);
			this->textBox_metod2_2->Name = L"textBox_metod2_2";
			this->textBox_metod2_2->Size = System::Drawing::Size(200, 20);
			this->textBox_metod2_2->TabIndex = 5;
			// 
			// textBox_metod2_1
			// 
			this->textBox_metod2_1->Location = System::Drawing::Point(80, 150);
			this->textBox_metod2_1->Name = L"textBox_metod2_1";
			this->textBox_metod2_1->Size = System::Drawing::Size(200, 20);
			this->textBox_metod2_1->TabIndex = 4;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 250);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(71, 13);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Плавность 3";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(3, 200);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(71, 13);
			this->label15->TabIndex = 2;
			this->label15->Text = L"Плавность 2";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(3, 150);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(71, 13);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Плавность 1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 3);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Metod2";
			// 
			// panel_metod1
			// 
			this->panel_metod1->BackColor = System::Drawing::Color::Bisque;
			this->panel_metod1->Controls->Add(this->label12);
			this->panel_metod1->Controls->Add(this->label11);
			this->panel_metod1->Controls->Add(this->textBox_metod1_only);
			this->panel_metod1->Controls->Add(this->label10);
			this->panel_metod1->Controls->Add(this->label7);
			this->panel_metod1->Controls->Add(this->label9);
			this->panel_metod1->Controls->Add(this->textBox_metod1_all);
			this->panel_metod1->Controls->Add(this->label8);
			this->panel_metod1->Controls->Add(this->textBox_metod1_disp);
			this->panel_metod1->Controls->Add(this->textBox_metod1_only_div_disp);
			this->panel_metod1->Controls->Add(this->textBox_metod1_only_div_all);
			this->panel_metod1->Location = System::Drawing::Point(6, 6);
			this->panel_metod1->Name = L"panel_metod1";
			this->panel_metod1->Size = System::Drawing::Size(286, 287);
			this->panel_metod1->TabIndex = 1;
			this->panel_metod1->Tag = L"1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 252);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Only/Disp";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 202);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Only/all";
			// 
			// textBox_metod1_only
			// 
			this->textBox_metod1_only->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox_metod1_only->Location = System::Drawing::Point(70, 50);
			this->textBox_metod1_only->Name = L"textBox_metod1_only";
			this->textBox_metod1_only->Size = System::Drawing::Size(200, 20);
			this->textBox_metod1_only->TabIndex = 12;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 152);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(28, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Disp";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Metod1";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 102);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"All";
			// 
			// textBox_metod1_all
			// 
			this->textBox_metod1_all->Location = System::Drawing::Point(70, 100);
			this->textBox_metod1_all->Name = L"textBox_metod1_all";
			this->textBox_metod1_all->Size = System::Drawing::Size(200, 20);
			this->textBox_metod1_all->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 52);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Only";
			// 
			// textBox_metod1_disp
			// 
			this->textBox_metod1_disp->Location = System::Drawing::Point(70, 150);
			this->textBox_metod1_disp->Name = L"textBox_metod1_disp";
			this->textBox_metod1_disp->Size = System::Drawing::Size(200, 20);
			this->textBox_metod1_disp->TabIndex = 15;
			// 
			// textBox_metod1_only_div_disp
			// 
			this->textBox_metod1_only_div_disp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox_metod1_only_div_disp->Location = System::Drawing::Point(70, 250);
			this->textBox_metod1_only_div_disp->Name = L"textBox_metod1_only_div_disp";
			this->textBox_metod1_only_div_disp->Size = System::Drawing::Size(200, 20);
			this->textBox_metod1_only_div_disp->TabIndex = 17;
			// 
			// textBox_metod1_only_div_all
			// 
			this->textBox_metod1_only_div_all->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->textBox_metod1_only_div_all->Location = System::Drawing::Point(70, 200);
			this->textBox_metod1_only_div_all->Name = L"textBox_metod1_only_div_all";
			this->textBox_metod1_only_div_all->Size = System::Drawing::Size(200, 20);
			this->textBox_metod1_only_div_all->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1218, 704);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->panel_metod2->ResumeLayout(false);
			this->panel_metod2->PerformLayout();
			this->panel_metod1->ResumeLayout(false);
			this->panel_metod1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		m_Main->ReadNext();
		Draw();
		CalcNeuro();

		MetodsCalc();
	}

	void MetodsCalc()
	{
		Metod1::MyStruct Metod1_answer = m_Main->GetAnsMetod1();

		textBox_metod1_all->Text =				Metod1_answer.all+	"";
		textBox_metod1_only->Text =				Metod1_answer.only + "";
		textBox_metod1_disp->Text =				Metod1_answer.disp + "";
		textBox_metod1_only_div_all->Text =		Metod1_answer.only_div_all + "";
		textBox_metod1_only_div_disp->Text =	Metod1_answer.only_div_disp + "";

		if(Metod1_answer.cheat)
			panel_metod1->BackColor = Color::Red;
		else
			panel_metod1->BackColor = Color::Green;

		Metod2::MyStruct Metod2_answer = m_Main->GetAnsMetod2();

		textBox_metod2_only->Text =				Metod2_answer.only + "";
		textBox_metod2_only_div_all->Text =		Metod2_answer.only_div_all + "";

		textBox_metod2_1->Text = StdToSys(Metod2_answer.LineList[0]);
		textBox_metod2_2->Text = StdToSys(Metod2_answer.LineList[1]);
		textBox_metod2_3->Text = StdToSys(Metod2_answer.LineList[2]);

		if (Metod2_answer.cheat)
			panel_metod2->BackColor = Color::Red;
		else
			panel_metod2->BackColor = Color::Green;

	}

	void Draw()
	{
		GL::ClearColor(Color::White);
		int w = glControl1->Width;
		int h = glControl1->Height;
		GL::MatrixMode(MatrixMode::Projection);
		GL::LoadIdentity();
		GL::Ortho(0, w, 0, h, -1, 1); // Верхний левый угол имеет кооординаты(0, 0)
		GL::Viewport(0, 0, w, h); // Использовать всю поверхность GLControl под рисование

		GL::Clear(ClearBufferMask::ColorBufferBit | ClearBufferMask::DepthBufferBit);

		GL::MatrixMode(MatrixMode::Modelview);
		GL::LoadIdentity();

		for (int i = 0; i < h / 50; i++)
		{
			GL::Begin(BeginMode::Lines);
			GL::Color3(Color::Black);

			GL::Vertex2((float)0, (float)(i * 50));

			GL::Vertex2((float)w, (float)(i * 50));

			GL::End();
		}

		GL::Begin(BeginMode::Lines);
		GL::Color3(Color::Brown);

		GL::Vertex2((float)0, (float)(h / 2.0));

		GL::Vertex2((float)w, (float)(h / 2.0));

		GL::End();

		FLOAT kfx = 20;
		FLOAT kfy = 50;
		FLOAT kfySmoth = (FLOAT)(h / 8.0); //h / 2.0

		for (DWORD i = 1; i < m_Main->GetCurCount(); i++)
		{
			CVal Line1 = m_Main->GetValLine(i - 1);
			CVal Line2 = m_Main->GetValLine(i);

			CVal Pik1 = m_Main->GetValPik(i - 1);
			CVal Pik2 = m_Main->GetValPik(i);

			textBox1->Text = StdToSys(m_Main->GetPlayerName());

			if (Line1.show && Line2.show)
			{
				DrawSQ((float)(i - 1) * kfx, (float)(Line1.val * kfy + kfySmoth));
				DrawSQ((float)(i - 0) * kfx, (float)(Line2.val * kfy + kfySmoth));

				GL::Begin(BeginMode::Lines);
				GL::Color3(Color::Red);
				GL::Vertex2((float)(i - 1) * kfx, (float)(Line1.val * kfy + kfySmoth));
				GL::Vertex2((float)(i - 0) * kfx, (float)(Line2.val * kfy + kfySmoth));
				GL::End();
			}

			if (Pik1.show && Pik2.show)
			{
				DrawSQ((float)(i - 1) * kfx, (float)(Pik1.val * kfy + kfySmoth));
				DrawSQ((float)(i - 0) * kfx, (float)(Pik2.val * kfy + kfySmoth));

				GL::Begin(BeginMode::Lines);
				GL::Color3(Color::Green);
				GL::Vertex2((float)(i - 1) * kfx, (float)(Pik1.val * kfy + kfySmoth));
				GL::Vertex2((float)(i - 0) * kfx, (float)(Pik2.val * kfy + kfySmoth));
				GL::End();
			}
		}

		glControl1->SwapBuffers();
	}

	void CalcNeuro()
	{
		CNeuroAnswer ans = m_Main->CalNeuro();

		if (ans.resPik[0] * 100.0 >= 0 && ans.resPik[0] * 100.0 <= 100)
			hScrollBar_piki_odin->Value = (INT)(ans.resPik[0] * 100.0);
		else
			hScrollBar_piki_odin->Value = hScrollBar_piki_odin->Maximum;

		if (ans.resPik[1] * 100.0 >= 0 && ans.resPik[1] * 100.0 <= 100)
			hScrollBar_piki_rez->Value = (INT)(ans.resPik[1] * 100.0);
		else
			hScrollBar_piki_rez->Value = hScrollBar_piki_rez->Maximum;

		if (ans.resLine[0] * 100.0 >= 0 && ans.resLine[0] * 100.0 <= 100)
			hScrollBar_pl1->Value = (INT)(ans.resLine[0] * 100.0);
		else
			hScrollBar_pl1->Value = hScrollBar_pl1->Maximum;

		if (ans.resLine[1] * 100.0 >= 0 && ans.resLine[1] * 100.0 <= 100)
			hScrollBar_pl2->Value = (INT)(ans.resLine[1] * 100.0);
		else
			hScrollBar_pl2->Value = hScrollBar_pl2->Maximum;

		if (ans.resLine[2] * 100.0 >= 0 && ans.resLine[2] * 100.0 <= 100)
			hScrollBar_pl3->Value = (INT)(ans.resLine[2] * 100.0);
		else
			hScrollBar_pl3->Value = hScrollBar_pl3->Maximum;

	}
	
	void DrawSQ(float j, float i)
	{
		float kf = 4.0;
		
		GL::Begin(BeginMode::Quads);
		GL::Color3(Color::Black);
		GL::Vertex2((j)-(float)(kf / 2.0), (i)-(float)(kf / 2.0));
		GL::Vertex2((j)-(float)(kf / 2.0), (i)+(float)(kf / 2.0));
		GL::Vertex2((j)+(float)(kf / 2.0), (i)+(float)(kf / 2.0));
		GL::Vertex2((j)+(float)(kf / 2.0), (i)-(float)(kf / 2.0));
		GL::End();

	}

	static const std::string SysToStd(System::String^ SysStr) {
		using namespace Runtime::InteropServices;
		char* v = (char*)(Marshal::StringToHGlobalAnsi(SysStr)).ToPointer();
		std::string result = std::string(v);
		Marshal::FreeHGlobal(System::IntPtr((void*)v));
		return result;
	}

	static System::String^ StdToSys(std::string StdStr) {
		return gcnew System::String(StdStr.c_str());
	}
	
	private: Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		m_Main = new CMain(
			"c:\\all\\Work\\Универ\\Диплом\\Проги\\Нейронка для пик\\пики\\x64\\Release\\StrafeLOGAhk.log");
		
			
		
	}

	private: System::Void button_learn_Click(System::Object^ sender, System::EventArgs^ e) {
		CNeuroAnswer TrueAns;

		TrueAns.resPik[0] = hScrollBar_piki_odin->Value / 100.0;
		TrueAns.resPik[1] = hScrollBar_piki_rez->Value / 100.0;

		TrueAns.resLine[0] = hScrollBar_pl1->Value / 100.0;
		TrueAns.resLine[1] = hScrollBar_pl2->Value / 100.0;
		TrueAns.resLine[2] = hScrollBar_pl3->Value / 100.0;

		m_Main->CorrectNeuro(TrueAns);
	}


private: System::Void tabControl1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	Draw();
}
};
}
