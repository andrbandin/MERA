// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <tchar.h>

long __stdcall WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

HINSTANCE g_hInstance; // ��������� ���������� ���������� g_hInstance, ���� ����� ���� ������������ hInstance � �-����, ������ WinMain.
const int width = 600;
const int height = 300;

int __stdcall _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nShowCmd)

	WNDCLASS wc;
	MSG msg;
	TCHAR* lpClassName = TEXT("SplashWindow");

	g_hInstance = hInstance;
	memset(&wc, 0, sizeof(wc));
	wc.hbrBackground = (HBRUSH)5;
	wc.hCursor = LoadCursor(0, IDC_ARROW);
	wc.hIcon = LoadIcon(0, IDI_APPLICATION);
	wc.hInstance = hInstance;
	wc.lpfnWndProc = WindowProc;
	wc.lpszClassName = lpClassName;
	wc.style = CS_HREDRAW | CS_VREDRAW;

	RegisterClass(&wc);

	int x = (GetSystemMetrics(SM_CXSCREEN) - width) / 2; // ��������� ���������� ��� ���, ����� ���� ���� ����������� �� ������
	int y = (GetSystemMetrics(SM_CYSCREEN) - height) / 2; // �� �� ����� ��� ����� (GetSystemMetrics(SM_CYSCREEN) ���������� ������� ���������� �� ���������
														  // SM_CXSCREEN �� �� �����, �� �� �����������)
	CreateWindowEx(0, lpClassName, 0, WS_POPUP | WS_VISIBLE, x, y, width, height, NULL, 0, hInstance, 0); // ����� ����� WS_POPUP(����� ���� ���� ��� ��������� � �.�.)

	while (GetMessage(&msg, NULL, 0, 0)) {
		DispatchMessage(&msg);
	}

	return 0;