#include "BaseParticle.h"
#include "sfwdraw.h"

void::BaseParticle::update() {
	speedX++;
	speedY++;
	if (speedX == 800) {
		speedX = 0;
	}
	
	if (speedY == 600) {
		speedY = 0;
	}

}
void::BaseParticle::draw() {
	sfw::drawCircle(speedX, speedY, 25);
}