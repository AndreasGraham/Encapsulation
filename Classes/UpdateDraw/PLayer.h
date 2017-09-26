#pragma once
class PLayer
{
public:
	float x;
	float y;
	bool liar;

	void update();
	void draw();
	void playerTwo();
	void wrap();
	void checkLie();
};