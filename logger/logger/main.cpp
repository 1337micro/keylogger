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
		if (log->isCPressed()) {
			cout << "C\n";
		}
		if (log->isCtrlPressed()) {
			cout << "Ctrl\n";
		}
		Sleep(5);
	}
	getchar();
    return 0;
}

