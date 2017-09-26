#include <iostream>
#include "PLayer.h"
#include "sfwdraw.h"

int main()
{
	// Create a window and dr4awing context
	sfw::initContext(800, 600, "SFW");

	// Set the background color
	sfw::setBackgroundColor(BLUE);

	PLayer me;
	PLayer you;

	me.x = 400;
	me.y = 300;
	me.liar = true;

	you.x = 400;
	you.y = 300;
	you.liar = false;

	//Set up the game loop
	while (sfw::stepContext()) {
		//game code goes here
		//me.playerTwo();
		//me.draw();

		you.draw();
		you.teleport();
		//you.update();
		//you.checkLie();
		
	}

	// clean up
	sfw::termContext();
}