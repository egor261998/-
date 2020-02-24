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
	
	#define MAXLEN 128
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:		
		CNeuro* m_Neuro;
		CNeuro* m_NeuroPik;
		string* m_myList;
		int m_iCount=0;
		int m_iCountCur = 0;
		int m_iCountCurStart = 0;
		ClassEntryVal* m_EntryVal;
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
	public:

	public:












		   int m_iCountCurEnd = 0;
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
	private: OpenTK::GLControl^ glControl1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox_input_path;


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
			this->glControl1 = (gcnew OpenTK::GLControl());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_input_path = (gcnew System::Windows::Forms::TextBox());
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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 23);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Следущий";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// glControl1
			// 
			this->glControl1->BackColor = System::Drawing::Color::Black;
			this->glControl1->Location = System::Drawing::Point(27, 52);
			this->glControl1->Name = L"glControl1";
			this->glControl1->Size = System::Drawing::Size(1000, 600);
			this->glControl1->TabIndex = 1;
			this->glControl1->VSync = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(122, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(536, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox_input_path
			// 
			this->textBox_input_path->Location = System::Drawing::Point(664, 23);
			this->textBox_input_path->Name = L"textBox_input_path";
			this->textBox_input_path->Size = System::Drawing::Size(542, 20);
			this->textBox_input_path->TabIndex = 3;
			this->textBox_input_path->Text = L"c:\\\\all\\\\Work\\\\Универ\\\\Диплом\\\\Проги\\\\Нейронка для пик\\\\пики\\\\x64\\\\Release\\\\Straf"
				L"eLOGAhk.log";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1041, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Одинаковость пик";
			// 
			// hScrollBar_piki_odin
			// 
			this->hScrollBar_piki_odin->Location = System::Drawing::Point(1044, 65);
			this->hScrollBar_piki_odin->Name = L"hScrollBar_piki_odin";
			this->hScrollBar_piki_odin->Size = System::Drawing::Size(162, 27);
			this->hScrollBar_piki_odin->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1041, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Резкость пик";
			// 
			// hScrollBar_piki_rez
			// 
			this->hScrollBar_piki_rez->Location = System::Drawing::Point(1044, 127);
			this->hScrollBar_piki_rez->Name = L"hScrollBar_piki_rez";
			this->hScrollBar_piki_rez->Size = System::Drawing::Size(162, 25);
			this->hScrollBar_piki_rez->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1044, 261);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Плавность 1ой";
			// 
			// hScrollBar_pl1
			// 
			this->hScrollBar_pl1->Location = System::Drawing::Point(1044, 277);
			this->hScrollBar_pl1->Name = L"hScrollBar_pl1";
			this->hScrollBar_pl1->Size = System::Drawing::Size(162, 29);
			this->hScrollBar_pl1->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(1047, 338);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Плавность 2ой";
			// 
			// hScrollBar_pl2
			// 
			this->hScrollBar_pl2->Location = System::Drawing::Point(1047, 354);
			this->hScrollBar_pl2->Name = L"hScrollBar_pl2";
			this->hScrollBar_pl2->Size = System::Drawing::Size(159, 29);
			this->hScrollBar_pl2->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1050, 423);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Плавность 3ий";
			// 
			// hScrollBar_pl3
			// 
			this->hScrollBar_pl3->Location = System::Drawing::Point(1047, 439);
			this->hScrollBar_pl3->Name = L"hScrollBar_pl3";
			this->hScrollBar_pl3->Size = System::Drawing::Size(159, 29);
			this->hScrollBar_pl3->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1041, 545);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(109, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Вероятность читера";
			// 
			// hScrollBar_cheat
			// 
			this->hScrollBar_cheat->Location = System::Drawing::Point(1044, 558);
			this->hScrollBar_cheat->Name = L"hScrollBar_cheat";
			this->hScrollBar_cheat->Size = System::Drawing::Size(162, 30);
			this->hScrollBar_cheat->TabIndex = 8;
			// 
			// button_learn
			// 
			this->button_learn->Location = System::Drawing::Point(1044, 592);
			this->button_learn->Name = L"button_learn";
			this->button_learn->Size = System::Drawing::Size(162, 38);
			this->button_learn->TabIndex = 17;
			this->button_learn->Text = L"Обучить";
			this->button_learn->UseVisualStyleBackColor = true;
			this->button_learn->Click += gcnew System::EventHandler(this, &MyForm::button_learn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1218, 669);
			this->Controls->Add(this->button_learn);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->hScrollBar_pl3);
			this->Controls->Add(this->hScrollBar_pl2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->hScrollBar_cheat);
			this->Controls->Add(this->hScrollBar_pl1);
			this->Controls->Add(this->hScrollBar_piki_rez);
			this->Controls->Add(this->hScrollBar_piki_odin);
			this->Controls->Add(this->textBox_input_path);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->glControl1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	void parse(string str, PINT num, PFLOAT val, PFLOAT val2)
	{
		WCHAR buf[4][MAXLEN] = { L"\0" };
		int iC = 0;
		int iCNum = 0;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] != ' ')
			{
				buf[iC][iCNum] = str[i];
				iCNum++;
			}
			else
			{
				iCNum = 0;
				iC++;
			}

		}

		(*num) = _wtoi(buf[0]);
		(*val) = _wtof(buf[1]);
		(*val2) = _wtof(buf[2]);
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

	void ReadNext()
	{
		if (m_iCountCur >= m_iCount)
			m_iCountCur = 0;

		m_iCountCurStart = m_iCountCur;
		while (m_myList[m_iCountCur].compare("[end]"))
		{
			m_iCountCur++;
		} 
		m_iCountCur+=1;
		m_iCountCurEnd = m_iCountCur;
		
		
	}
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		ReadNext();


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

		for (int i = 0; i < h/50; i++)
		{
			GL::Begin(BeginMode::Lines);
			GL::Color3(Color::Black);

			GL::Vertex2((float)0, (float)(i*50));
	
			GL::Vertex2((float)w, (float)(i*50));

			GL::End();
		}

		GL::Begin(BeginMode::Lines);
		GL::Color3(Color::Brown);

		GL::Vertex2((float)0, (float)(h/2.0));

		GL::Vertex2((float)w, (float)(h / 2.0));

		GL::End();

		
		int kfy = 25;
		int kfx = 20;
		int num;
		float aval;
		float aval2;
		float bval;
		float bval2;
		textBox1->Text = StdToSys(m_myList[m_iCountCurStart]);
		int minus = m_iCountCurStart-1;

		int iCurNum = -1;
		int iCurStartFill = 0;
		int iCount = 0;
		int iCountPik = 0;
		
		for (int i = m_iCountCurStart+2; i < (m_iCountCurEnd -1); i++)
		{
			
			parse(m_myList[i - 1], &num, &aval, &aval2);
			parse(m_myList[i], &num, &bval, &bval2);

			float a = aval;
			float b = bval;

			aval = aval * kfy + h / 2.0;
			aval2 = aval2 * kfy + h / 2.0;
			bval = bval * kfy + h / 2.0;
			bval2 = bval2 * kfy + h / 2.0;

			GL::Begin(BeginMode::Lines);
			GL::Color3(Color::Red);
			GL::Vertex2((float)(i - 1 - 2 - minus) * kfx, aval);
			GL::Vertex2((float)(i - 2 - minus) * kfx, bval);
			GL::End();

			DrawSQ((float)(i - 1 - 2 - minus) * kfx, aval);
			DrawSQ((float)(i - 2 - minus) * kfx, bval);

			if (iCurNum >= 0 && iCurStartFill<=i)
			{
				m_EntryVal->iCountPl[iCurNum] = iCount;
				m_EntryVal->MasPl[iCurNum][iCount] = fabs(b);
				iCount++;
			}

			if ((a > 0 && b < 0 || a < 0 && b > 0) && ((m_iCountCurStart + 2) <i))
			{
				if (iCurNum >= 0)
				{
					m_EntryVal->iCountPl[iCurNum] -= 2;
					for (int j = m_EntryVal->iCountPl[iCurNum]; j < 20;j++)
					{
						m_EntryVal->MasPl[iCurNum][j] = 0.0;
					}
				}
				iCount = 0;
				iCurNum++;
				iCurStartFill = i + 3;
				
				float bb;
				for (int j = i - 1; j < i+3; j++)
				{
					parse(m_myList[j - 1], &num, &aval, &aval2);
					parse(m_myList[j], &num, &bval, &bval2);
					aval2 = fabs(aval2);
					bval2 = fabs(bval2);
					bb = bval2;
					m_EntryVal->MasPik[iCountPik] = aval2;
					iCountPik++;
					aval2 = aval2 * kfy + h / 2.0;
					
					bval2 = bval2 * kfy + h / 2.0;

					GL::Begin(BeginMode::Lines);
					GL::Color3(Color::Green);
					GL::Vertex2((float)(j - 1 - 2 - minus) * kfx, aval2);
					GL::Vertex2((float)(j - 2 - minus) * kfx, bval2);
					GL::End();

					DrawSQ((float)(j - 1 - 2 - minus) * kfx, aval2);
					DrawSQ((float)(j - 2 - minus) * kfx, bval2);
					
				}

				m_EntryVal->MasPik[iCountPik] = bb;
				iCountPik++;
			}	
			
		}

		glControl1->SwapBuffers();
		DOUBLE* res = m_NeuroPik->CalcNeuro(20, m_EntryVal->MasPik);
		if (res)
		{
			hScrollBar_piki_odin->Value = res[0] * 100 <0 ? 0 : (res[0] * 100);
			hScrollBar_piki_rez->Value = res[1] * 100 < 0 ? 0 : (res[1] * 100);
		}
		DOUBLE* res1 = m_Neuro->CalcNeuro(20, m_EntryVal->MasPl[0]);
		DOUBLE* res2 = m_Neuro->CalcNeuro(20, m_EntryVal->MasPl[1]);
		DOUBLE* res3 = m_Neuro->CalcNeuro(20, m_EntryVal->MasPl[2]);

		if (res1 && res2 && res3)
		{
			hScrollBar_pl1->Value = res1[0] * 100 < 0 ? 0 : (res1[0] * 100);
			hScrollBar_pl2->Value = res2[0] * 100 < 0 ? 0 : (res2[0] * 100);
			hScrollBar_pl3->Value = res3[0] * 100 < 0 ? 0 : (res3[0] * 100);
		}
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

	int get_file_numstr(string filename)
	{
		wifstream file;
		int iCount=0;

		file.open(filename);

		if (file.is_open())
		{


			while (file.ignore(1000, '\n'))
			{

				iCount++;
			}
		}
		return iCount;	
	}

	private: Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
		INT la[4] = { 20, 12, 8, 2 };
		INT la1[4] = { 20, 12, 8, 1 };
		m_NeuroPik = new CNeuro(CFunction::Identical, CFunction::IdenticalDx, 0.4f, TRUE, 4, la);
		m_Neuro = new CNeuro(CFunction::Identical, CFunction::IdenticalDx, 0.4f, TRUE, 4, la1);
		wifstream file;
		string path;
		m_EntryVal = new ClassEntryVal();
		auto pathform = textBox_input_path->Text;

		path = SysToStd(pathform);
		file.open(path);

		if (file.is_open())
		{
			m_myList = new string[get_file_numstr(path)];
			WCHAR buf[MAXLEN];
			m_iCount = 0;
			while (file.getline(buf, sizeof(buf)))
			{
				String^ strNew = gcnew String(buf);
				m_myList[m_iCount] = SysToStd(strNew);
				m_iCount++;
			}
		}
		
	}
	private: System::Void button_learn_Click(System::Object^ sender, System::EventArgs^ e) {
		DOUBLE pik[2] = {
			(DOUBLE)(hScrollBar_piki_odin->Value / 100.0),
			(DOUBLE)(hScrollBar_piki_rez->Value / 100.0) };

		DOUBLE pl1 = (DOUBLE)(hScrollBar_pl1->Value / 100.0);
		DOUBLE pl2 = (DOUBLE)(hScrollBar_pl2->Value / 100.0);
		DOUBLE pl3 = (DOUBLE)(hScrollBar_pl3->Value / 100.0);
		m_NeuroPik->CalcNeuroError(2, pik);
		m_NeuroPik->CalcNeuroCorrect();

		m_Neuro->CalcNeuroError(1, &pl1);
		m_Neuro->CalcNeuroCorrect();
		m_Neuro->CalcNeuroError(1, &pl2);
		m_Neuro->CalcNeuroCorrect();
		m_Neuro->CalcNeuroError(1, &pl3);
		m_Neuro->CalcNeuroCorrect();

	}
};
}
