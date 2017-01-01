#include "stdafx.h"
#include "logger.h"

namespace micro1337 {
	KeyListener* KeyListener::singleton;

	KeyListener::KeyListener() {};
	KeyListener::~KeyListener() {
		delete singleton;
		singleton = nullptr;
	};

	KeyListener* KeyListener::instance() {
		if (!singleton)
			singleton = new KeyListener();
		return singleton;
	}

	bool KeyListener::isCPressed() {
		SHORT c_pressed_state = GetAsyncKeyState(key_c);		
		return c_pressed_state;
	}
	bool KeyListener::isCtrlPressed() {
		SHORT ctrl_pressed_state = GetAsyncKeyState(key_ctrl);		
		return  ctrl_pressed_state;
	}
}