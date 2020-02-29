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
	private: OpenTK::GLControl^ glControl1;
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
			this->glControl1 = (gcnew OpenTK::GLControl());
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
		
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		m_Main->ReadNext();

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
		FLOAT kfy = 25;

		for (DWORD i = 1; i < m_Main->GetCurCount(); i++)
		{
			CVal Line1 = m_Main->GetValLine(i - 1);
			CVal Line2 = m_Main->GetValLine(i);

			CVal Pik1 = m_Main->GetValPik(i - 1);
			CVal Pik2 = m_Main->GetValPik(i);

			textBox1->Text = StdToSys(m_Main->GetPlayerName());

			if (Line1.show && Line2.show)
			{
				DrawSQ((float)(i - 1) * kfx, (float)(Line1.val * kfy + h / 2.0));
				DrawSQ((float)(i - 0) * kfx, (float)(Line2.val * kfy + h / 2.0));

				GL::Begin(BeginMode::Lines);
				GL::Color3(Color::Red);
				GL::Vertex2((float)(i - 1) * kfx, (float)(Line1.val * kfy + h / 2.0));
				GL::Vertex2((float)(i - 0) * kfx, (float)(Line2.val * kfy + h / 2.0));
				GL::End();
			}

			if (Pik1.show && Pik2.show)
			{
				DrawSQ((float)(i - 1) * kfx, (float)(Pik1.val * kfy + h / 2.0));
				DrawSQ((float)(i - 0) * kfx, (float)(Pik2.val * kfy + h / 2.0));

				GL::Begin(BeginMode::Lines);
				GL::Color3(Color::Green);
				GL::Vertex2((float)(i - 1) * kfx, (float)(Pik1.val * kfy + h / 2.0));
				GL::Vertex2((float)(i - 0) * kfx, (float)(Pik2.val * kfy + h / 2.0));
				GL::End();
			}

			
			CNeuroAnswer ans = m_Main->CalNeuro();

			if (ans.resPik[0] * 100.0 >= 0 && ans.resPik[0] * 100.0 <= 100)
				hScrollBar_piki_odin->Value = ans.resPik[0] * 100.0;
			else  
				hScrollBar_piki_odin->Value = hScrollBar_piki_odin->Maximum;

			if (ans.resPik[1] * 100.0 >= 0 && ans.resPik[1] * 100.0 <= 100)
				hScrollBar_piki_rez->Value = ans.resPik[1] * 100.0;
			else  
				hScrollBar_piki_rez->Value = hScrollBar_piki_rez->Maximum;

			if (ans.resLine[0] * 100.0 >= 0 && ans.resLine[0] * 100.0 <= 100)
				hScrollBar_pl1->Value = ans.resLine[0] * 100.0;
			else  
				hScrollBar_pl1->Value = hScrollBar_pl1->Maximum;

			if (ans.resLine[1] * 100.0 >= 0 && ans.resLine[1] * 100.0 <= 100)
				hScrollBar_pl2->Value = ans.resLine[1] * 100.0;
			else  
				hScrollBar_pl2->Value = hScrollBar_pl2->Maximum;

			if (ans.resLine[2] * 100.0 >= 0 && ans.resLine[2] * 100.0 <= 100)
				hScrollBar_pl3->Value = ans.resLine[2] * 100.0;
			else  
				hScrollBar_pl3->Value = hScrollBar_pl3->Maximum;

		}

		glControl1->SwapBuffers();
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
};
}
