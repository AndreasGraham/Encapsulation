#include "Person.h"
#include "Officer.h"
#include "sfwdraw.h"
#include "Player.h"
#include "BaseParticle.h"
int main() {
	/*Person me("Terry Nguyen", 90);

	me.greet();
	me.isHappy();

	Officer cole("Cole Phelps", 20, 7142);
	cole.greet();
	cole.isHappy();

	while (true) {}

	return 0;*/

	// Create a window and dr4awing context
		sfw::initContext(800, 600, "SFW");

	// Set the background color
	sfw::setBackgroundColor(BLUE);

	Player me;
	me.x = 400;
	me.y = 300;

	BaseParticle you;
	you.speedX = 400;
	you.speedY = 300;
	//Set up the game loop
	while (sfw::stepContext()) {
		you.draw();
		you.update();

	}

	// clean up
	sfw::termContext();

}