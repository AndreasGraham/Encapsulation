#include "Player.h"
#include <iostream>
#include "sfwdraw.h"

void Player::update() {
	x = sfw::getMouseX();
	y = sfw::getMouseY();
	enabled = true;
	name = "Bilbo";
}

void Player::draw() {
	sfw::drawCircle(x, y, 25);
}