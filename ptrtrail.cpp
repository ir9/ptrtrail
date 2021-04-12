// ptrtrail.cpp : アプリケーション用のエントリ ポイントの定義
//

#include "stdafx.h"

int WINAPI WinMainCRTStartup(void)
{
	::SystemParametersInfo(SPI_SETMOUSETRAILS, 7, NULL, 0);
	return 0;
}

#if _DEBUG

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrev, LPSTR szCmd, int nShow)
{
	return WinMainCRTStartup();
}

#endif // _DEBUG



