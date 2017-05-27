#pragma once
#include <SDL\SDL.h>
#include <GL\glew.h>
#include <string>

using namespace std;


enum WindowFlags {
	INVISIBLE = 0x1,
	FULLSCREEN = 0x2,
	BORDERLESS = 0x4
};

class Window
{
private:

	SDL_Window *_window;
	int _screenWidth;
	int _screenHeight;

public:
	Window();
	~Window();
	void swapWindow();
	int getScreenWidth() { _screenWidth; };
	int getScreenHeight() { _screenHeight; };
	int create(string windowName,
		int screenWidth, int screenHeight,
		unsigned int currentFlags);
};

