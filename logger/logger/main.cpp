// logger.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "logger.h"
#include <iostream>
using namespace std;

int main()
{
	micro1337::KeyListener* log = micro1337::KeyListener::instance();
	while (1) {
		if (log->isCPressed() && log->isCtrlPressed()) {	
			auto activeWindow = GetForegroundWindow();
			OpenClipboard(activeWindow);
			HANDLE clipboard = GetClipboardData(CF_TEXT);			
			char* clipboardData = (char *)GlobalLock(clipboard);
			

			EmptyClipboard();
			SetClipboardData(CF_TEXT, clipboardData);

			GlobalUnlock(clipboardData);
			

			CloseClipboard();
		}
		Sleep(5);
	}
	getchar();
    return 0;
}

