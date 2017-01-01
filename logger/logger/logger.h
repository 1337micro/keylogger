#pragma once
#include <Windows.h>
#include <vector>
#include "Observable.h"
#include "Utils.h"
#include <iostream>
using std::vector;
using std::cout;
#define key_c 0x43
#define key_ctrl VK_CONTROL
namespace micro1337{
	class KeyListener{
	public:
		~KeyListener();
		static KeyListener* instance();


		bool isCPressed();
		bool isCtrlPressed();

	private:
		//vector<int> keysPressed;

		static KeyListener* singleton;
		KeyListener();

	};
}