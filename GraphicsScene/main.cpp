#include "Game.h"

int main()
{
	Game* app = new Game(2560, 1440, "Computer Graphics");

	app->run();

	delete app;

	return 0;
}