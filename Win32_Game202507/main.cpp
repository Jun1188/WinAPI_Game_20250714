#include <windows.h>
#include <objidl.h>
#include <gdiplus.h>
#include "PlayerClass.h"
using namespace Gdiplus;
#pragma comment (lib,"Gdiplus.lib")



void OnPaint(HDC hdc) {



}

HINSTANCE g_hInst;
LPCTSTR lpszClass = L"Window Class Name";
LPCTSTR lpszWindowName = L"Anipang_cpy";
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam);
void CALLBACK TimerProc(HWND, UINT, UINT, DWORD);
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdParam, int nCmdShow)
{
	HWND hWnd;
	HMENU hMymenu;
	MSG Message;
	WNDCLASSEX WndClass;
	g_hInst = hInstance;
	WndClass.cbSize = sizeof(WndClass);
	WndClass.style = CS_HREDRAW | CS_VREDRAW;
	WndClass.lpfnWndProc = (WNDPROC)WndProc;
	WndClass.cbClsExtra = 0;
	WndClass.cbWndExtra = 0;
	WndClass.hInstance = hInstance;
	WndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
	WndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
	WndClass.lpszMenuName = NULL;
	WndClass.lpszClassName = lpszClass;
	WndClass.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	RegisterClassEx(&WndClass);
	hWnd = CreateWindow(lpszClass, lpszWindowName, WS_OVERLAPPEDWINDOW, 0, 0, 815, 639, NULL, (HMENU)NULL, hInstance, NULL);
	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);
	while (GetMessage(&Message, 0, 0, 0))
	{
		TranslateMessage(&Message);
		DispatchMessage(&Message);
	}
	return Message.wParam;
}
LRESULT CALLBACK WndProc(HWND hWnd, UINT iMessage, WPARAM wParam, LPARAM lParam)
{
	HDC hDC, mDC, hMemDC;
	HBRUSH hBrush, oldBrush;
	PAINTSTRUCT ps;

	
	switch (iMessage)
	{
	case WM_CREATE:
		
		break;
	case WM_PAINT: // 맵에 그릴 오브젝트(플레이어나 몬스터 같은)는 mDC에, 비트맵은 hMemDC에서 mDC로 그리기
		

		break;
	case WM_CHAR:


		break;
	case WM_MOUSEMOVE:
		

		break;
	case WM_LBUTTONDOWN:
		

		break;
	case WM_DESTROY:

		PostQuitMessage(0);
		return 0;
	}
	return (DefWindowProc(hWnd, iMessage, wParam, lParam));
}
void CALLBACK TimerProc(HWND hWnd, UINT iMsg, UINT idEvent, DWORD dwTime) // 타이머는 play가 TRUE일 때만 작동함
{
	
	switch (idEvent)
	{
	
	}
}