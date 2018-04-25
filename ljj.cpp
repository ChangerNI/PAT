/*
Li  20170318

*图像参数可调
*图像柔和处理，过滤极值
*/
/*#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
#include <algorithm>
//#include <omp.h>

using namespace std;

bool debug = 0;
bool calced = false;

#define PI 3.14159265358
#define MAXNUMBER 999999999

//Image Info
#define	IMAGEPIXEL 200
#define MAGNIFICATION 2
int radius = IMAGEPIXEL / 2;
double ClorGradientCoefficient;

//Matrix Info
#define MATRIXSIZE 12
double Matrix[MATRIXSIZE][MATRIXSIZE] =
{
	0,0.74,0.89,0.61,0.71,0.56,0.35,0.26,0.25,0.53,0.60,0.43,
	0.74,0,0.69,0.55,0.63,0.53,0.37,0.16,0.18,0.45,0.55,0.48,
	0.89,0.69,0,0.45,0.53,0.45,0.48,0.20,0.24,0.40,0.64,0.65,
	0.61,0.55,0.45,0,0.51,0.53,0.61,0.17,0.21,0.34,0.45,0.44,
	0.71,0.63,0.53,0.51,0,0.52,0.62,0.17,0.23,0.22,0.32,0.43,
	0.56,0.53,0.45,0.53,0.52,0,0.54,0.17,0.24,0.22,0.21,0.34,
	0.35,0.37,0.48,0.61,0.62,0.54,0,0.08,0.18,0.18,0.25,0.21,
	0.26,0.16,0.20,0.17,0.17,0.17,0.08,0,0.68,0.23,0.36,0.29,
	0.25,0.18,0.24,0.21,0.23,0.24,0.18,0.69,0,0.28,0.35,0.20,
	0.53,0.45,0.40,0.34,0.22,0.22,0.18,0.23,0.28,0,0.61,0.37,
	0.60,0.55,0.64,0.45,0.32,0.21,0.25,0.36,0.25,0.61,0,0.53,
	0.43,0.48,0.65,0.44,0.43,0.34,0.21,0.29,0.20,0.37,0.53,0

};
double g_MaxWeight = 0, g_MinWeight = 100;

class Pixel
{
public:
	bool validity;
	double SumValue;
	int quantity;

	Pixel()
	{
		validity = false;
		SumValue = 0;
		quantity = 0;
	}
	void AddData(double NewData)
	{
		++quantity;
		SumValue += NewData;
	}
};
Pixel CircleArea[IMAGEPIXEL][IMAGEPIXEL];

struct Area
{
	double weight;
};
Area FilledArea[IMAGEPIXEL][IMAGEPIXEL];

struct vertex
{
	POINT coordinate;
	double weight;
}Vertex[MATRIXSIZE];

void FillCircle(int a, int b, double weight)
{
	if (a == b)
	{
		return;
	}
	int i, j;
	int HeightRange, WidthRange;
	double anotherstep;
	int StartVertex, EndVertex;
	bool xtrueyfalse;

	HeightRange = Vertex[a].coordinate.y - Vertex[b].coordinate.y;
	WidthRange = Vertex[a].coordinate.x - Vertex[b].coordinate.x;

	if (abs(HeightRange) > abs(WidthRange))
	{
		xtrueyfalse = false;
		if (Vertex[a].coordinate.y < Vertex[b].coordinate.y)
		{
			StartVertex = a;
			EndVertex = b;
		}
		else
		{
			StartVertex = b;
			EndVertex = a;
		}
		anotherstep = (double)(Vertex[StartVertex].coordinate.x - Vertex[EndVertex].coordinate.x) / abs(HeightRange);
	}
	else
	{
		anotherstep = HeightRange / abs(WidthRange);
		xtrueyfalse = true;
		if (Vertex[a].coordinate.x < Vertex[b].coordinate.x)
		{
			StartVertex = a;
			EndVertex = b;
		}
		else
		{
			StartVertex = b;
			EndVertex = a;
		}
		anotherstep = (double)(Vertex[EndVertex].coordinate.y - Vertex[StartVertex].coordinate.y) / abs(WidthRange);
	}

	struct
	{
		int x, y;
	}CirclePixelPos;

	if (xtrueyfalse)
	{
		for (i = 0; i <= abs(WidthRange); ++i)
		{
			CirclePixelPos.x = Vertex[StartVertex].coordinate.x + i;
			CirclePixelPos.y = Vertex[StartVertex].coordinate.y + i * anotherstep;
			CircleArea[CirclePixelPos.x][CirclePixelPos.y].SumValue += weight;
			++CircleArea[CirclePixelPos.x][CirclePixelPos.y].quantity;
		}
	}
	else
	{
		for (i = 0; i <= abs(HeightRange); ++i)
		{
			CirclePixelPos.y = Vertex[StartVertex].coordinate.y + i;
			CirclePixelPos.x = Vertex[StartVertex].coordinate.x - i * anotherstep;
			CircleArea[CirclePixelPos.x][CirclePixelPos.y].SumValue += weight;
			++CircleArea[CirclePixelPos.x][CirclePixelPos.y].quantity;
		}
	}
}

COLORREF CalcColor(double weight)
{
	int r, g, b;
	g = 255 - (g_MaxWeight - weight) * ClorGradientCoefficient;
	r = (g_MaxWeight - weight) * ClorGradientCoefficient;

	if (r > g)
	{
		g = 255.0 / r * g;
		r = 255;
	}
	else
	{
		r = 255.0 / g * r;
		g = 255;

	}

	return (RGB(r, g, 0));
}

int cmp(const void* a, const void* b)
{
	return(*(double*)a > *(double*)b ? 1 : -1);
}

bool cmp1(const double &a, const double &b)
{
	return a < b;
}

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{
	HWND hWnd;
	MSG Msg;
	WNDCLASS wndclass;
	char lpszClassName[] = "Win32 App";
	char lpszTitle[] = "Additional   Li 20170317";

	wndclass.style = 0;
	wndclass.lpfnWndProc = WndProc;
	wndclass.cbClsExtra = 0;
	wndclass.cbWndExtra = 0;
	wndclass.hInstance = hInstance;
	wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	wndclass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	wndclass.lpszMenuName = NULL;
	wndclass.lpszClassName = lpszClassName;

	if (!RegisterClass(&wndclass))
	{
		MessageBeep(0);
		return FALSE;
	}
	hWnd = CreateWindow(
		lpszClassName,
		lpszTitle,
		WS_OVERLAPPEDWINDOW ^ WS_THICKFRAME,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		1000, 550,
		NULL,
		NULL,
		hInstance,
		NULL);

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	while (GetMessage(&Msg, NULL, 0, 0))
	{
		TranslateMessage(&Msg);
		DispatchMessage(&Msg);
	}
	return Msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM  wParam, LPARAM lParam)
{
	RECT rect;
	int i, j;
	int m, n;
	int k;

	double WeightSumTemp;
	int QuantityTemp;
	int NeutralizeRange = IMAGEPIXEL / 4;
	double SaveWeight[5000];
	int SWPos;

	switch (message)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_CREATE:
		//define circle area.
		for (i = 0; i < IMAGEPIXEL; ++i)
		{
			for (j = 0; j < IMAGEPIXEL; ++j)
			{
				if (sqrt(pow((radius - i), 2) + pow((radius - j), 2)) <= radius)
				{
					CircleArea[i][j].validity = true;
				}
				else
				{
					continue;
				}
			}
		}

		//define vertex.
		for (i = 0; i < MATRIXSIZE; ++i)
		{
			Vertex[i].coordinate.x = radius + cos((90 - 360.0 / MATRIXSIZE * (i)) / 180 * PI) * radius;
			Vertex[i].coordinate.y = radius - sin((90 - 360.0 / MATRIXSIZE * (i)) / 180 * PI) * radius;
		}

		//bulid weighted line.
		for (i = 0; i < MATRIXSIZE; ++i)
		{
			for (j = 0; j < MATRIXSIZE; ++j)
			{
				FillCircle(i, j, Matrix[i][j]);
			}
		}
		break;
	case WM_PAINT:
	{
		GetClientRect(hWnd, &rect);

		HDC hDC;
		PAINTSTRUCT PtStr;
		HBRUSH hBrush;
		HPEN hPen;
		HFONT hFont;
		LPCTSTR str;
		POINT CursorPos;
		TEXTMETRIC tm;
		SIZE TextSize;

		hDC = BeginPaint(hWnd, &PtStr);
		SetMapMode(hDC, MM_TEXT);
		GetClientRect(hWnd, &rect);

		if (!calced)
		{
			double precent = 0;
			char PrecentDisplay[] = "                    ";
			char Processing1[] = "         Mass of data";
			char Processing2[] = "Please do not close the program";
			char Processing3[] = "         Processing...";

			hFont = CreateFont(
				20,
				0,
				0,
				0,
				900,
				0,
				0,
				0,
				ANSI_CHARSET,
				OUT_DEFAULT_PRECIS,
				CLIP_DEFAULT_PRECIS,
				DEFAULT_QUALITY,
				DEFAULT_PITCH | FF_DONTCARE,
				"Cambria"
			);
			SetTextColor(hDC, RGB(0, 0, 0));
			SelectObject(hDC, hFont);
			GetTextMetrics(hDC, &tm);

			GetTextExtentPoint32(hDC, Processing1, strlen(Processing1), &TextSize);
			TextOut(hDC, 140, 100, Processing1, strlen(Processing1));
			TextOut(hDC, 120, 130, Processing2, strlen(Processing2));
			TextOut(hDC, 140, 160, Processing3, strlen(Processing3));
			DeleteObject(hFont);

			hFont = CreateFont(
				50,
				0,
				0,
				0,
				900,
				0,
				0,
				0,
				ANSI_CHARSET,
				OUT_DEFAULT_PRECIS,
				CLIP_DEFAULT_PRECIS,
				DEFAULT_QUALITY,
				DEFAULT_PITCH | FF_DONTCARE,
				"Cambria"
			);
			SetTextColor(hDC, RGB(255, 0, 0));
			SelectObject(hDC, hFont);

			g_MinWeight = MAXNUMBER;
			g_MaxWeight = 0;
			for (i = 0; i < IMAGEPIXEL; ++i)
			{
				precent += 1.0 / IMAGEPIXEL;
				sprintf(PrecentDisplay, "     %.2lf %%", precent * 100);
				TextOut(hDC, 120, 210, PrecentDisplay, strlen(PrecentDisplay));
				for (j = 0; j < IMAGEPIXEL; ++j)
				{



					QuantityTemp = 0;
					WeightSumTemp = 0;
					SWPos = 0;
					if (CircleArea[i][j].validity)
					{
						//#pragma omp parallel for num_threads(8)
						for (m = -NeutralizeRange; m <= NeutralizeRange; ++m)
						{
							//#pragma omp parallel for num_threads(8)
							for (n = -NeutralizeRange; n <= NeutralizeRange; ++n)
							{
								if (i + m < 0 || i + m > IMAGEPIXEL || j + n < 0 || j + n > IMAGEPIXEL)
									continue;
								if (CircleArea[i + m][j + n].validity == false)
									continue;
								if (CircleArea[i + m][j + n].quantity == 0)
									continue;
								if (sqrt(pow((m), 2) + pow((n), 2)) > (NeutralizeRange / 2))
									continue;
								SaveWeight[SWPos++] = CircleArea[i + m][j + n].SumValue / CircleArea[i + m][j + n].quantity;
							}
						}
						sort(SaveWeight, SaveWeight + SWPos);
						//qsort(SaveWeight, SWPos, sizeof(double), cmp);
						for (k = SWPos / 5; k < SWPos; ++k)
						{
							WeightSumTemp += SaveWeight[k];
							QuantityTemp++;
						}
						FilledArea[i][j].weight = WeightSumTemp / QuantityTemp;
						if (FilledArea[i][j].weight > g_MaxWeight)
						{
							g_MaxWeight = FilledArea[i][j].weight;
						}
						if (FilledArea[i][j].weight < g_MinWeight)
						{
							g_MinWeight = FilledArea[i][j].weight;
						}
					}
				}
			}
			ClorGradientCoefficient = 255 / (g_MaxWeight - g_MinWeight);
			calced = true;
			DeleteObject(hFont);
			hBrush = CreateSolidBrush(RGB(255, 255, 255));
			hPen = CreatePen(PS_SOLID, 1, RGB(255, 255, 255));
			SelectObject(hDC, hPen);
			SelectObject(hDC, hBrush);
			Rectangle(hDC, rect.left, rect.top, rect.right, rect.bottom);
			DeleteObject(hPen);
			DeleteObject(hBrush);
		}
		hFont = CreateFont(
			30,
			0,
			0,
			0,
			900,
			0,
			0,
			0,
			ANSI_CHARSET,
			OUT_DEFAULT_PRECIS,
			CLIP_DEFAULT_PRECIS,
			DEFAULT_QUALITY,
			DEFAULT_PITCH | FF_DONTCARE,
			"Cambria"
		);
		SetTextColor(hDC, RGB(0, 0, 0));
		SelectObject(hDC, hFont);
		GetTextMetrics(hDC, &tm);

		int FontStartX = IMAGEPIXEL * MAGNIFICATION + 150;
		int FontStartY = 130;
		char resolution[] = "Resolution :      ";
		char magnification[] = "Magnification :      ";
		char measuring[] = "Measuring points :      ";
		char neutralize[] = "Neutralize Range :      ";

		GetTextExtentPoint32(hDC, resolution, strlen(resolution), &TextSize);
		TextOut(hDC, FontStartX, FontStartY, resolution, strlen(resolution));

		sprintf(resolution, "%d * %d", IMAGEPIXEL, IMAGEPIXEL);
		TextOut(hDC, FontStartX + TextSize.cx, FontStartY, resolution, strlen(resolution));
		FontStartY += TextSize.cy;

		TextOut(hDC, FontStartX, FontStartY, magnification, strlen(magnification));
		GetTextExtentPoint32(hDC, magnification, strlen(magnification), &TextSize);
		sprintf(magnification, "%dX", MAGNIFICATION);
		TextOut(hDC, FontStartX + TextSize.cx, FontStartY, magnification, strlen(magnification));
		FontStartY += TextSize.cy;

		TextOut(hDC, FontStartX, FontStartY, measuring, strlen(measuring));
		GetTextExtentPoint32(hDC, measuring, strlen(measuring), &TextSize);
		sprintf(measuring, "%d", MATRIXSIZE);
		TextOut(hDC, FontStartX + TextSize.cx, FontStartY, measuring, strlen(measuring));
		FontStartY += TextSize.cy;

		TextOut(hDC, FontStartX, FontStartY, neutralize, strlen(neutralize));
		GetTextExtentPoint32(hDC, neutralize, strlen(neutralize), &TextSize);
		sprintf(neutralize, "%d", NeutralizeRange);
		TextOut(hDC, FontStartX + TextSize.cx, FontStartY, neutralize, strlen(neutralize));
		FontStartY += TextSize.cy;

		DeleteObject(hFont);

		for (i = 0; i < IMAGEPIXEL; ++i)
		{
			for (j = 0; j < IMAGEPIXEL; ++j)
			{
				if (CircleArea[i][j].validity)
				{
					hPen = CreatePen(PS_SOLID, MAGNIFICATION, CalcColor(FilledArea[i][j].weight));
					SelectObject(hDC, hPen);
					Rectangle(hDC, 50 + i * MAGNIFICATION, 50 + j * MAGNIFICATION, 50 + i * MAGNIFICATION + MAGNIFICATION * 2, 50 + j * MAGNIFICATION + MAGNIFICATION * 2);
					DeleteObject(hPen);
				}
			}
		}

		EndPaint(hWnd, &PtStr);
		break;
	}
	case WM_SIZE:
		InvalidateRect(hWnd, NULL, true);
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
		break;
	}
	return 0;
}*/