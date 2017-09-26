#include "Player.h"
#include "sfwdraw.h"

void PLayer::update()
{
	if (liar == true)
	{
		x = sfw::getMouseX();
		y = sfw::getMouseY();
	}
	
}

void PLayer::draw()
{
	sfw::drawCircle(x, y, 25);
}

void PLayer::playerTwo() {
	if (sfw::getKey('W')) {
		y++;
	}

	if (sfw::getKey('S')) {
		y--;
	}

	if (sfw::getKey('A')) {
		x--;
	}

	if (sfw::getKey('D')) {
		x++;
	}
}

void PLayer::wrap() {
	x++;
	if (x == 800) {
		x = 0;
	}
}

void PLayer::checkLie() {
	if (liar == false) {
		return;
	}
}

