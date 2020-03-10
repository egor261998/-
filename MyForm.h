#pragma once

namespace пики {

	


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{



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
	private: System::Windows::Forms::TextBox^ textBox_metod2_time;
	private: System::Windows::Forms::TextBox^ textBox_metod1_time;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Panel^ panel1;



	
	private: System::Windows::Forms::Panel^ panel_metod2_n;
	private: System::Windows::Forms::TextBox^ textBox_metod2_time_n;
	private: System::Windows::Forms::TextBox^ textBox_metod2_3_n;
	private: System::Windows::Forms::TextBox^ textBox_metod2_2_n;
	private: System::Windows::Forms::TextBox^ textBox_metod2_1_n;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_time_neuro;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox_metod2_only_div_all_n;
	private: System::Windows::Forms::TextBox^ textBox_metod2_only_n;
	private: System::Windows::Forms::TextBox^ textBox_set;

	private: System::Windows::Forms::Button^ button_set;

	private: System::Windows::Forms::Button^ button_get;
	private: System::Windows::Forms::TextBox^ textBox_get;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox_time_to_learn;
	private: System::Windows::Forms::Button^ button_setdialog;
	private: System::Windows::Forms::Button^ button_savedialog;

	private: System::Windows::Forms::Button^ button_neuro;

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
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::TextBox^ textBox1;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->glControl1 = (gcnew OpenTK::GLControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->panel_metod2_n = (gcnew System::Windows::Forms::Panel());
			this->textBox_metod2_only_div_all_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod2_only_n = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox_metod2_3_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod2_2_n = (gcnew System::Windows::Forms::TextBox());
			this->textBox_metod2_1_n = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_metod2_time_n = (gcnew System::Windows::Forms::TextBox());
			this->panel_metod2 = (gcnew System::Windows::Forms::Panel());
			this->textBox_metod2_time = (gcnew System::Windows::Forms::TextBox());
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
			this->textBox_metod1_time = (gcnew System::Windows::Forms::TextBox());
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
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button_setdialog = (gcnew System::Windows::Forms::Button());
			this->button_savedialog = (gcnew System::Windows::Forms::Button());
			this->button_get = (gcnew System::Windows::Forms::Button());
			this->textBox_get = (gcnew System::Windows::Forms::TextBox());
			this->textBox_set = (gcnew System::Windows::Forms::TextBox());
			this->button_set = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button_neuro = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox_time_neuro = (gcnew System::Windows::Forms::TextBox());
			this->textBox_time_to_learn = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->panel_metod2_n->SuspendLayout();
			this->panel_metod2->SuspendLayout();
			this->panel_metod1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
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
			this->textBox1->Size = System::Drawing::Size(1106, 20);
			this->textBox1->TabIndex = 2;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
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
			this->glControl1->Size = System::Drawing::Size(1174, 612);
			this->glControl1->TabIndex = 18;
			this->glControl1->VSync = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage2->Controls->Add(this->panel_metod2_n);
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
			// panel_metod2_n
			// 
			this->panel_metod2_n->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel_metod2_n->Controls->Add(this->textBox_metod2_only_div_all_n);
			this->panel_metod2_n->Controls->Add(this->textBox_metod2_only_n);
			this->panel_metod2_n->Controls->Add(this->label2);
			this->panel_metod2_n->Controls->Add(this->label3);
			this->panel_metod2_n->Controls->Add(this->label4);
			this->panel_metod2_n->Controls->Add(this->label5);
			this->panel_metod2_n->Controls->Add(this->label6);
			this->panel_metod2_n->Controls->Add(this->textBox_metod2_3_n);
			this->panel_metod2_n->Controls->Add(this->textBox_metod2_2_n);
			this->panel_metod2_n->Controls->Add(this->textBox_metod2_1_n);
			this->panel_metod2_n->Controls->Add(this->label1);
			this->panel_metod2_n->Controls->Add(this->textBox_metod2_time_n);
			this->panel_metod2_n->Location = System::Drawing::Point(618, 6);
			this->panel_metod2_n->Name = L"panel_metod2_n";
			this->panel_metod2_n->Size = System::Drawing::Size(300, 300);
			this->panel_metod2_n->TabIndex = 3;
			// 
			// textBox_metod2_only_div_all_n
			// 
			this->textBox_metod2_only_div_all_n->Location = System::Drawing::Point(81, 100);
			this->textBox_metod2_only_div_all_n->Name = L"textBox_metod2_only_div_all_n";
			this->textBox_metod2_only_div_all_n->Size = System::Drawing::Size(199, 20);
			this->textBox_metod2_only_div_all_n->TabIndex = 15;
			// 
			// textBox_metod2_only_n
			// 
			this->textBox_metod2_only_n->Location = System::Drawing::Point(80, 50);
			this->textBox_metod2_only_n->Name = L"textBox_metod2_only_n";
			this->textBox_metod2_only_n->Size = System::Drawing::Size(200, 20);
			this->textBox_metod2_only_n->TabIndex = 14;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(4, 100);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Only/all";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Only";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 250);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(71, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Плавность 3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(4, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Плавность 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(4, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Плавность 1";
			// 
			// textBox_metod2_3_n
			// 
			this->textBox_metod2_3_n->Location = System::Drawing::Point(81, 250);
			this->textBox_metod2_3_n->Name = L"textBox_metod2_3_n";
			this->textBox_metod2_3_n->Size = System::Drawing::Size(199, 20);
			this->textBox_metod2_3_n->TabIndex = 4;
			// 
			// textBox_metod2_2_n
			// 
			this->textBox_metod2_2_n->Location = System::Drawing::Point(81, 200);
			this->textBox_metod2_2_n->Name = L"textBox_metod2_2_n";
			this->textBox_metod2_2_n->Size = System::Drawing::Size(199, 20);
			this->textBox_metod2_2_n->TabIndex = 3;
			// 
			// textBox_metod2_1_n
			// 
			this->textBox_metod2_1_n->Location = System::Drawing::Point(81, 150);
			this->textBox_metod2_1_n->Name = L"textBox_metod2_1_n";
			this->textBox_metod2_1_n->Size = System::Drawing::Size(199, 20);
			this->textBox_metod2_1_n->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(4, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Metod2_neuro";
			// 
			// textBox_metod2_time_n
			// 
			this->textBox_metod2_time_n->Location = System::Drawing::Point(180, 5);
			this->textBox_metod2_time_n->Name = L"textBox_metod2_time_n";
			this->textBox_metod2_time_n->Size = System::Drawing::Size(100, 20);
			this->textBox_metod2_time_n->TabIndex = 0;
			// 
			// panel_metod2
			// 
			this->panel_metod2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel_metod2->Controls->Add(this->textBox_metod2_time);
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
			this->panel_metod2->Location = System::Drawing::Point(312, 6);
			this->panel_metod2->Name = L"panel_metod2";
			this->panel_metod2->Size = System::Drawing::Size(300, 300);
			this->panel_metod2->TabIndex = 2;
			// 
			// textBox_metod2_time
			// 
			this->textBox_metod2_time->Location = System::Drawing::Point(180, 5);
			this->textBox_metod2_time->Name = L"textBox_metod2_time";
			this->textBox_metod2_time->Size = System::Drawing::Size(100, 20);
			this->textBox_metod2_time->TabIndex = 11;
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
			this->panel_metod1->Controls->Add(this->textBox_metod1_time);
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
			this->panel_metod1->Size = System::Drawing::Size(300, 300);
			this->panel_metod1->TabIndex = 1;
			this->panel_metod1->Tag = L"1";
			// 
			// textBox_metod1_time
			// 
			this->textBox_metod1_time->Location = System::Drawing::Point(170, 5);
			this->textBox_metod1_time->Name = L"textBox_metod1_time";
			this->textBox_metod1_time->Size = System::Drawing::Size(100, 20);
			this->textBox_metod1_time->TabIndex = 23;
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->panel1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1186, 624);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Обучение нейронки";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1180, 618);
			this->panel1->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel3->Controls->Add(this->button_setdialog);
			this->panel3->Controls->Add(this->button_savedialog);
			this->panel3->Controls->Add(this->button_get);
			this->panel3->Controls->Add(this->textBox_get);
			this->panel3->Controls->Add(this->textBox_set);
			this->panel3->Controls->Add(this->button_set);
			this->panel3->Location = System::Drawing::Point(4, 109);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(434, 149);
			this->panel3->TabIndex = 9;
			// 
			// button_setdialog
			// 
			this->button_setdialog->Location = System::Drawing::Point(356, 81);
			this->button_setdialog->Name = L"button_setdialog";
			this->button_setdialog->Size = System::Drawing::Size(75, 23);
			this->button_setdialog->TabIndex = 7;
			this->button_setdialog->Text = L"Обзор";
			this->button_setdialog->UseVisualStyleBackColor = true;
			this->button_setdialog->Click += gcnew System::EventHandler(this, &MyForm::button_setdialog_Click);
			// 
			// button_savedialog
			// 
			this->button_savedialog->Location = System::Drawing::Point(356, 3);
			this->button_savedialog->Name = L"button_savedialog";
			this->button_savedialog->Size = System::Drawing::Size(75, 23);
			this->button_savedialog->TabIndex = 6;
			this->button_savedialog->Text = L"Обзор";
			this->button_savedialog->UseVisualStyleBackColor = true;
			this->button_savedialog->Click += gcnew System::EventHandler(this, &MyForm::button_savedialog_Click);
			// 
			// button_get
			// 
			this->button_get->Location = System::Drawing::Point(3, 3);
			this->button_get->Name = L"button_get";
			this->button_get->Size = System::Drawing::Size(120, 23);
			this->button_get->TabIndex = 3;
			this->button_get->Text = L"Сохранить веса";
			this->button_get->UseVisualStyleBackColor = true;
			this->button_get->Click += gcnew System::EventHandler(this, &MyForm::button_get_Click);
			// 
			// textBox_get
			// 
			this->textBox_get->Location = System::Drawing::Point(5, 32);
			this->textBox_get->Name = L"textBox_get";
			this->textBox_get->Size = System::Drawing::Size(426, 20);
			this->textBox_get->TabIndex = 2;
			this->textBox_get->Text = L"Путь до файла";
			// 
			// textBox_set
			// 
			this->textBox_set->Location = System::Drawing::Point(3, 110);
			this->textBox_set->Name = L"textBox_set";
			this->textBox_set->Size = System::Drawing::Size(428, 20);
			this->textBox_set->TabIndex = 5;
			this->textBox_set->Text = L"Путь до файла";
			// 
			// button_set
			// 
			this->button_set->Location = System::Drawing::Point(3, 81);
			this->button_set->Name = L"button_set";
			this->button_set->Size = System::Drawing::Size(120, 23);
			this->button_set->TabIndex = 4;
			this->button_set->Text = L"Установить веса";
			this->button_set->UseVisualStyleBackColor = true;
			this->button_set->Click += gcnew System::EventHandler(this, &MyForm::button_set_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->panel2->Controls->Add(this->button_neuro);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->textBox_time_neuro);
			this->panel2->Controls->Add(this->textBox_time_to_learn);
			this->panel2->Location = System::Drawing::Point(4, 3);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(300, 100);
			this->panel2->TabIndex = 8;
			// 
			// button_neuro
			// 
			this->button_neuro->Location = System::Drawing::Point(3, 3);
			this->button_neuro->Name = L"button_neuro";
			this->button_neuro->Size = System::Drawing::Size(120, 23);
			this->button_neuro->TabIndex = 0;
			this->button_neuro->Text = L"Обучить нейронку";
			this->button_neuro->UseVisualStyleBackColor = true;
			this->button_neuro->Click += gcnew System::EventHandler(this, &MyForm::button_neuro_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(2, 29);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(262, 39);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Кол-во итераций, в тясячах\r\n10 000 = 10 милионов обучается в среднем 2 часа\r\n\r\n";
			// 
			// textBox_time_neuro
			// 
			this->textBox_time_neuro->Location = System::Drawing::Point(129, 3);
			this->textBox_time_neuro->Name = L"textBox_time_neuro";
			this->textBox_time_neuro->Size = System::Drawing::Size(168, 20);
			this->textBox_time_neuro->TabIndex = 1;
			this->textBox_time_neuro->Text = L"Время обучения...";
			// 
			// textBox_time_to_learn
			// 
			this->textBox_time_to_learn->AcceptsTab = true;
			this->textBox_time_to_learn->Location = System::Drawing::Point(3, 77);
			this->textBox_time_to_learn->Name = L"textBox_time_to_learn";
			this->textBox_time_to_learn->Size = System::Drawing::Size(294, 20);
			this->textBox_time_to_learn->TabIndex = 6;
			this->textBox_time_to_learn->Text = L"10000";
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
			this->tabPage2->ResumeLayout(false);
			this->panel_metod2_n->ResumeLayout(false);
			this->panel_metod2_n->PerformLayout();
			this->panel_metod2->ResumeLayout(false);
			this->panel_metod2->PerformLayout();
			this->panel_metod1->ResumeLayout(false);
			this->panel_metod1->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		CMain* m_Main;
		CGL* m_Gl;
		System::Threading::Thread^ thisThread;
		DOUBLE time = 0.0;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		m_Main->ReadNext();
		textBox1->Text = StdToSys(m_Main->GetPlayerName());
		Draw();
	
		MetodsCalc();
	}

	private: void MetodsCalc()
	{
		Metod1::MyStruct Metod1_answer = m_Main->GetAnsMetod1();

		textBox_metod1_all->Text = Metod1_answer.all + "";
		textBox_metod1_only->Text = Metod1_answer.only + "";
		textBox_metod1_disp->Text = Metod1_answer.disp + "";
		textBox_metod1_only_div_all->Text = Metod1_answer.only_div_all + "";
		textBox_metod1_only_div_disp->Text = Metod1_answer.only_div_disp + "";
		textBox_metod1_time->Text = Metod1_answer.time + "";

		if (Metod1_answer.cheat)
			panel_metod1->BackColor = Color::Red;
		else
			panel_metod1->BackColor = Color::Green;

		Metod2::MyStruct Metod2_answer = m_Main->GetAnsMetod2();

		textBox_metod2_only->Text = Metod2_answer.only + "";
		textBox_metod2_only_div_all->Text = Metod2_answer.only_div_all + "";

		textBox_metod2_1->Text = StdToSys(Metod2_answer.LineList[0]);
		textBox_metod2_2->Text = StdToSys(Metod2_answer.LineList[1]);
		textBox_metod2_3->Text = StdToSys(Metod2_answer.LineList[2]);
		textBox_metod2_time->Text = Metod2_answer.time + "";

		if (Metod2_answer.cheat)
			panel_metod2->BackColor = Color::Red;
		else
			panel_metod2->BackColor = Color::Green;

		Metod2_neuro::MyStruct Metod2_answer_neuro = m_Main->GetAnsMetod2_neuro();

		

		textBox_metod2_1_n->Text = Metod2_answer_neuro.LineDisp[0] +"";
		textBox_metod2_2_n->Text = Metod2_answer_neuro.LineDisp[1] + "";
		textBox_metod2_3_n->Text = Metod2_answer_neuro.LineDisp[2] + "";
		textBox_metod2_time_n->Text = Metod2_answer_neuro.time + "";

		
		textBox_metod2_only_n->Text = Metod2_answer_neuro.only + "";
		
		textBox_metod2_only_div_all_n->Text = Metod2_answer_neuro.only_div_all + "";
		

		if (Metod2_answer_neuro.cheat)
			panel_metod2_n->BackColor = Color::Red;
		else
			panel_metod2_n->BackColor = Color::Green;
	} 

	private: void Draw()
	{	 
		m_Gl->Paint(m_Main);
		glControl1->SwapBuffers();		   
	}

	private: System::String^ StdToSys(std::string StdStr)
	{
		return gcnew System::String(StdStr.c_str());
	}

	private: const string SysToStd(System::String^ SysStr)
	{
		using namespace Runtime::InteropServices;
		char* v = (char*)(Marshal::StringToHGlobalAnsi(SysStr)).ToPointer();
		std::string result = std::string(v);
		Marshal::FreeHGlobal(System::IntPtr((void*)v));
		return result;
	}

	private: Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog OPF;
		if (OPF.ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			m_Main = new CMain(SysToStd(OPF.FileName));

			m_Gl = new CGL(glControl1->Width, glControl1->Height);
		}
		else
			this->Close();	
	}

	private: System::Void tabControl1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		Draw();	
	}

	private: System::Void EnterTime()
	{
		textBox_time_neuro->Text = (int)((time / 1000) / 60) + "m";
	}
		   
	private: System::Void Thread_Start()
	{
		DOUBLE time = m_Main->NeoroLearn(Convert::ToInt32(textBox_time_to_learn->Text) * 1000);
		this->time = time;

		Invoke(gcnew Action(this, &MyForm::EnterTime)); 	
	}

	private: System::Void button_neuro_Click(System::Object^ sender, System::EventArgs^ e) 
	{		
		thisThread = gcnew System::Threading::Thread(gcnew System::Threading::ThreadStart(this, &MyForm::Thread_Start));
		thisThread->IsBackground = true;
		thisThread->Start();		
	}

	private: System::Void button_get_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		m_Main->GetWeightFromNeuroAndSavaToFile(SysToStd(textBox_get->Text));
	}

	private: System::Void button_set_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		m_Main->GetWeightFromFileAndSetToNeuro(SysToStd(textBox_set->Text));
	}

	private: System::Void button_savedialog_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog OPF;
		if (OPF.ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			textBox_get->Text = OPF.FileName;
		}
	}

	private: System::Void button_setdialog_Click(System::Object^ sender, System::EventArgs^ e)
	{		
		OpenFileDialog OPF;
		if (OPF.ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			textBox_set->Text = OPF.FileName;
		}
	}
};
}
