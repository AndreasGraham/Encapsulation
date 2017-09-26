#pragma once
#include "GameObject.h"

class BaseParticle : public GameObject {
	public: // remember classes default to private
		float speedX;
		float speedY;

		virtual void update() override;
		virtual void draw() override;
};