#pragma once
using namespace std;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace OpenTK::Platform::Windows;
using namespace OpenTK::Graphics::OpenGL;

#include "stdafx.h"
#include "main.h"
class CGL
{
private:
	INT w;
	INT h;
	
public:
	CGL(INT w, INT h)
	{
		this->w = w;
		this->h = h;
	}

	VOID Paint(CMain* m_Main)
	{
		GL::ClearColor(Color::White);
	
		GL::MatrixMode(MatrixMode::Projection);
		GL::LoadIdentity();
		GL::Ortho(0, w, 0, h, -1, 1); // ¬ерхний левый угол имеет кооординаты(0, 0)
		GL::Viewport(0, 0, w, h); // »спользовать всю поверхность GLControl под рисование

		GL::Clear(ClearBufferMask::ColorBufferBit | ClearBufferMask::DepthBufferBit);

		GL::MatrixMode(MatrixMode::Modelview);
		GL::LoadIdentity();

		for (int i = 0; i < h / 50; i++)
		{
			GL::Begin(PrimitiveType::Lines);
			GL::Color3(Color::Black);

			GL::Vertex2((float)0, (float)(i * 50));

			GL::Vertex2((float)w, (float)(i * 50));

			GL::End();
		}



		FLOAT kfx = 20;
		FLOAT kfy = 50;
		FLOAT kfySmoth = (FLOAT)(h / 8.0); //h / 2.0

		for (DWORD i = 1; i < m_Main->GetCurCount(); i++)
		{
			CVal Line1 = m_Main->GetValLine(i - 1);
			CVal Line2 = m_Main->GetValLine(i);

			CVal Pik1 = m_Main->GetValPik(i - 1);
			CVal Pik2 = m_Main->GetValPik(i);

			

			if (Line1.show && Line2.show)
			{
				DrawSQ((float)(i - 1) * kfx, (float)(Line1.val * kfy + kfySmoth));
				DrawSQ((float)(i - 0) * kfx, (float)(Line2.val * kfy + kfySmoth));

				GL::Begin(PrimitiveType::Lines);
				GL::Color3(Color::Red);
				GL::Vertex2((float)(i - 1) * kfx, (float)(Line1.val * kfy + kfySmoth));
				GL::Vertex2((float)(i - 0) * kfx, (float)(Line2.val * kfy + kfySmoth));
				GL::End();
			}

			if (Pik1.show && Pik2.show)
			{
				DrawSQ((float)(i - 1) * kfx, (float)(Pik1.val * kfy + kfySmoth));
				DrawSQ((float)(i - 0) * kfx, (float)(Pik2.val * kfy + kfySmoth));

				GL::Begin(PrimitiveType::Lines);
				GL::Color3(Color::Green);
				GL::Vertex2((float)(i - 1) * kfx, (float)(Pik1.val * kfy + kfySmoth));
				GL::Vertex2((float)(i - 0) * kfx, (float)(Pik2.val * kfy + kfySmoth));
				GL::End();
			}
		}

	
	}
private:
	void DrawSQ(float j, float i)
	{
		float kf = 4.0;

		GL::Begin(PrimitiveType::Quads);
		GL::Color3(Color::Black);
		GL::Vertex2((j)-(float)(kf / 2.0), (i)-(float)(kf / 2.0));
		GL::Vertex2((j)-(float)(kf / 2.0), (i)+(float)(kf / 2.0));
		GL::Vertex2((j)+(float)(kf / 2.0), (i)+(float)(kf / 2.0));
		GL::Vertex2((j)+(float)(kf / 2.0), (i)-(float)(kf / 2.0));
		GL::End();

	}

};

