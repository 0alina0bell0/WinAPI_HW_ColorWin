#include<Windows.h>

LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

int APIENTRY wWinMain( HINSTANCE hInstance,HINSTANCE hPrevInstance, LPWSTR lpCmdStr,int nCmdShow)

{
	WNDCLASS wndClassBlue;
	wndClassBlue.style = 0;
	wndClassBlue.lpfnWndProc = WndProc;
	wndClassBlue.cbClsExtra = 0;
	wndClassBlue.cbWndExtra = 0;
	wndClassBlue.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(0, 0, 255));
	wndClassBlue.hCursor = LoadCursor(NULL, IDC_CROSS);
	wndClassBlue.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassBlue.hInstance = hInstance;
	wndClassBlue.lpszClassName = L"MainWndClassBlue";
	wndClassBlue.lpszMenuName = NULL;

	WNDCLASS wndClassOrange;
	wndClassOrange.style = 0;
	wndClassOrange.lpfnWndProc = WndProc;
	wndClassOrange.cbClsExtra = 0;
	wndClassOrange.cbWndExtra = 0;
	wndClassOrange.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(255, 140, 0));
	wndClassOrange.hCursor = LoadCursor(NULL, IDC_HAND);
	wndClassOrange.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassOrange.hInstance = hInstance;
	wndClassOrange.lpszClassName = L"MainWndClassOrange";
	wndClassOrange.lpszMenuName = NULL;

	WNDCLASS wndClassGreen;
	wndClassGreen.style = 0;
	wndClassGreen.lpfnWndProc = WndProc;
	wndClassGreen.cbClsExtra = 0;
	wndClassGreen.cbWndExtra = 0;
	wndClassGreen.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(125, 255, 0));
	wndClassGreen.hCursor = LoadCursor(NULL, IDC_HAND);
	wndClassGreen.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassGreen.hInstance = hInstance;
	wndClassGreen.lpszClassName = L"MainWndClassGreen";
	wndClassGreen.lpszMenuName = NULL;

	WNDCLASS wndClassPink;
	wndClassPink.style = 0;
	wndClassPink.lpfnWndProc = WndProc;
	wndClassPink.cbClsExtra = 0;
	wndClassPink.cbWndExtra = 0;
	wndClassPink.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(255, 100, 100));
	wndClassPink.hCursor = LoadCursor(NULL, IDC_HAND);
	wndClassPink.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassPink.hInstance = hInstance;
	wndClassPink.lpszClassName = L"MainWndClassPink";
	wndClassPink.lpszMenuName = NULL;

	WNDCLASS wndClassSteelBlue;
	wndClassSteelBlue.style = 0;
	wndClassSteelBlue.lpfnWndProc = WndProc;
	wndClassSteelBlue.cbClsExtra = 0;
	wndClassSteelBlue.cbWndExtra = 0;
	wndClassSteelBlue.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(70, 130, 180));
	wndClassSteelBlue.hCursor = LoadCursor(NULL, IDC_HAND);
	wndClassSteelBlue.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassSteelBlue.hInstance = hInstance;
	wndClassSteelBlue.lpszClassName = L"MainWndClassSteelBlue";
	wndClassSteelBlue.lpszMenuName = NULL;

	WNDCLASS wndClassYellow;
	wndClassYellow.style = 0;
	wndClassYellow.lpfnWndProc = WndProc;
	wndClassYellow.cbClsExtra = 0;
	wndClassYellow.cbWndExtra = 0;
	wndClassYellow.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(255, 255, 0));
	wndClassYellow.hCursor = LoadCursor(NULL, IDC_HAND);
	wndClassYellow.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassYellow.hInstance = hInstance;
	wndClassYellow.lpszClassName = L"MainWndClassYellow";
	wndClassYellow.lpszMenuName = NULL;

	WNDCLASS wndClassSea;
	wndClassSea.style = 0;
	wndClassSea.lpfnWndProc = WndProc;
	wndClassSea.cbClsExtra = 0;
	wndClassSea.cbWndExtra = 0;
	wndClassSea.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(46, 139, 87));
	wndClassSea.hCursor = LoadCursor(NULL, IDC_CROSS);
	wndClassSea.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassSea.hInstance = hInstance;
	wndClassSea.lpszClassName = L"MainWndSea";
	wndClassSea.lpszMenuName = NULL;

	WNDCLASS wndClassGoldenrod;
	wndClassGoldenrod.style = 0;
	wndClassGoldenrod.lpfnWndProc = WndProc;
	wndClassGoldenrod.cbClsExtra = 0;
	wndClassGoldenrod.cbWndExtra = 0;
	wndClassGoldenrod.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(218, 165, 32));
	wndClassGoldenrod.hCursor = LoadCursor(NULL, IDC_CROSS);
	wndClassGoldenrod.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassGoldenrod.hInstance = hInstance;
	wndClassGoldenrod.lpszClassName = L"MainWndClassGoldenrod";
	wndClassGoldenrod.lpszMenuName = NULL;

	WNDCLASS wndClassPurple;
	wndClassPurple.style = 0;
	wndClassPurple.lpfnWndProc = WndProc;
	wndClassPurple.cbClsExtra = 0;
	wndClassPurple.cbWndExtra = 0;
	wndClassPurple.hbrBackground = (HBRUSH)CreateSolidBrush(RGB(153, 0, 153));
	wndClassPurple.hCursor = LoadCursor(NULL, IDC_CROSS);
	wndClassPurple.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wndClassPurple.hInstance = hInstance;
	wndClassPurple.lpszClassName = L"MainWndClassPurple";
	wndClassPurple.lpszMenuName = NULL;

	RegisterClass(&wndClassBlue);
	RegisterClass(&wndClassOrange);
	RegisterClass(&wndClassGreen);
	RegisterClass(&wndClassPink);
	RegisterClass(&wndClassSteelBlue);
	RegisterClass(&wndClassYellow);
	RegisterClass(&wndClassSea);
	RegisterClass(&wndClassGoldenrod);
	RegisterClass(&wndClassPurple);

	HWND hwndBlue = CreateWindow(L"MainWndClassBlue",L"Blue",
		WS_OVERLAPPEDWINDOW,10,10,300,200,NULL,NULL,hInstance,0);

	HWND hwndOrange = CreateWindow(L"MainWndClassOrange", L"Orange",
		WS_OVERLAPPEDWINDOW, 310, 10, 300, 200, NULL, NULL, hInstance, 0);

	HWND hwndGreen = CreateWindow(L"MainWndClassGreen", L"Green",
		WS_OVERLAPPEDWINDOW, 610, 10, 300, 200, NULL, NULL, hInstance, 0);



	HWND hwndPink = CreateWindow(L"MainWndClassPink", L"Pink",
		WS_OVERLAPPEDWINDOW, 10, 210, 300, 200, NULL, NULL, hInstance, 0);

	HWND hwndSteelBlue = CreateWindow(L"MainWndClassSteelBlue", L"SteelBlue",
		WS_OVERLAPPEDWINDOW, 310, 210, 300, 200, NULL, NULL, hInstance, 0);

	HWND hwndYellow = CreateWindow(L"MainWndClassYellow", L"Yellow",
		WS_OVERLAPPEDWINDOW, 610, 210, 300, 200, NULL, NULL, hInstance, 0);



	HWND hwndSea = CreateWindow(L"MainWndClassSea", L"Sea",
		WS_OVERLAPPEDWINDOW, 10, 410, 300, 200, NULL, NULL, hInstance, 0);

	HWND hwndGoldenrod = CreateWindow(L"MainWndClassGoldenrod", L"Goldenrod",
		WS_OVERLAPPEDWINDOW, 310, 410, 300, 200, NULL, NULL, hInstance, 0);

	HWND hwndPurple = CreateWindow(L"MainWndClassPurple", L"Purple",
		WS_OVERLAPPEDWINDOW, 610, 410, 300, 200, NULL, NULL, hInstance, 0);

	if (!hwndBlue && !hwndOrange && !hwndGreen && !hwndPink && !hwndSteelBlue
		&& !hwndYellow && !hwndSea && !hwndGoldenrod && !hwndPurple)
	{
		return FALSE;
	}

	ShowWindow(hwndBlue, SW_NORMAL);
	ShowWindow(hwndOrange, SW_NORMAL);
	ShowWindow(hwndGreen, SW_NORMAL);
	ShowWindow(hwndPink, SW_NORMAL);
	ShowWindow(hwndSteelBlue, SW_NORMAL);
	ShowWindow(hwndYellow, SW_NORMAL);
	ShowWindow(hwndSea, SW_NORMAL);
	ShowWindow(hwndGoldenrod, SW_NORMAL);
	ShowWindow(hwndPurple, SW_NORMAL);

	UpdateWindow(hwndBlue);
	UpdateWindow(hwndOrange);
	UpdateWindow(hwndGreen);
	UpdateWindow(hwndPink);
	UpdateWindow(hwndSteelBlue);
	UpdateWindow(hwndYellow);
	UpdateWindow(hwndSea);
	UpdateWindow(hwndGoldenrod);
	UpdateWindow(hwndPurple);

	MSG msg;

	while (GetMessage(&msg, hwndBlue, 0, 0) == TRUE
		|| GetMessage(&msg, hwndOrange, 0, 0) == TRUE
		|| GetMessage(&msg, hwndGreen, 0, 0) == TRUE
		|| GetMessage(&msg, hwndPink, 0, 0) == TRUE
		|| GetMessage(&msg, hwndSteelBlue, 0, 0) == TRUE
		|| GetMessage(&msg, hwndYellow, 0, 0) == TRUE
		|| GetMessage(&msg, hwndSea, 0, 0) == TRUE
		|| GetMessage(&msg, hwndGoldenrod, 0, 0) == TRUE
		|| GetMessage(&msg, hwndPurple, 0, 0) == TRUE)
	{
		DispatchMessage(&msg);
	}

	return msg.wParam;
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CREATE:
		return 0;
	case WM_DESTROY:
		PostQuitMessage(0);
		return(0);
	default:
		return DefWindowProc(hwnd, message, wParam, lParam);
	}
}