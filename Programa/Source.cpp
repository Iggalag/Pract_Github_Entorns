#include "sdl.h"

#define SCREEN_WIDTH 1400
#define SCREEN_HEIGHT 800

int main(int argc, char* args[]){
	bool fin = false;
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* gWindow = NULL;
	SDL_Renderer* gRenderer = nullptr;
	gWindow = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	gRenderer = SDL_CreateRenderer(gWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	do
	{

	} while (fin == false);

	return 0;
}