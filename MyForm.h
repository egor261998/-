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
		string* m_myList;
		int m_iCount=0;
		int m_iCountCur = 0;
		int m_iCountCurStart = 0;
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
			this->textBox_input_path->Text = L"c:\\\\all\\\\Work\\\\Универ\\\\Диплом\\\\Проги\\\\Нейронка для пик\\\\пики\\\\x64\\\\Release\\\\"
				L"StrafeLOGAhk.log";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1218, 669);
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
			GL::Vertex2((float)(i - 1-2 - minus) * kfx, aval);
			GL::Vertex2((float)(i - 2 - minus) * kfx, bval);
			GL::End();

			DrawSQ((float)(i - 1 - 2 - minus) * kfx, aval);
			DrawSQ((float)(i - 2 - minus) * kfx, bval);

			if ((a > 0 && b < 0 || a < 0 && b > 0) && ((m_iCountCurStart + 2) <i))
			{
				for (int j = i - 1; j < i+3; j++)
				{
					parse(m_myList[j - 1], &num, &aval, &aval2);
					parse(m_myList[j], &num, &bval, &bval2);
					aval2 = fabs(aval2);
					bval2 = fabs(bval2);

					
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
			}	
			
		}

		glControl1->SwapBuffers();
		
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
		//CNeuro* m_Neuro;
		//INT la[4] = { 9, 4, 3, 2 };
		//this->m_Neuro = new CNeuro(CFunction::Identical, CFunction::IdenticalDx, 0.4f, TRUE,
		//	4, la);
		wifstream file;
		string path;

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
	};
}
