/// @author YellowAfterlife

#include "stdafx.h"

#if defined(WIN32)
#define dllx extern "C" __declspec(dllexport)
#elif defined(GNUC)
#define dllx extern "C" __attribute__ ((visibility("default"))) 
#else
#define dllx extern "C"
#endif

///
dllx double display_mouse_button_press(double button) {
	DWORD dwFlags;
	switch ((int)button) {
		case 1: dwFlags =   MOUSEEVENTF_LEFTDOWN; break;
		case 2: dwFlags =  MOUSEEVENTF_RIGHTDOWN; break;
		case 3: dwFlags = MOUSEEVENTF_MIDDLEDOWN; break;
		default: return false;
	}
	mouse_event(dwFlags, 0, 0, 0, 0);
	return true;
}

///
dllx double display_mouse_button_release(double button) {
	DWORD dwFlags;
	switch ((int)button) {
		case 1: dwFlags =   MOUSEEVENTF_LEFTUP; break;
		case 2: dwFlags =  MOUSEEVENTF_RIGHTUP; break;
		case 3: dwFlags = MOUSEEVENTF_MIDDLEUP; break;
		default: return false;
	}
	mouse_event(dwFlags, 0, 0, 0, 0);
	return true;
}

///
dllx double display_mouse_button_check_direct(double button) {
	int vKey;
	switch ((int)button) {
		case 1: vKey = VK_LBUTTON; break;
		case 2: vKey = VK_RBUTTON; break;
		case 3: vKey = VK_MBUTTON; break;
		default: return -1;
	}
	return (GetAsyncKeyState(vKey) & 0x8000) != 0;
}

///
dllx double display_mouse_wheel_scroll(double amount) {
	mouse_event(MOUSEEVENTF_WHEEL, 0, 0, (int)amount, 0);
	return true;
}