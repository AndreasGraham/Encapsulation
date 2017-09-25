#include "Television.h"

Television::Television(int chn, int vol)
{
	currentChannel = chn;
	currentVolume = vol;
}

void Television::increaseVolume()
{
	currentVolume++;
}

void Television::decreaseVolume()
{
	
	currentVolume--;
}

void Television::increaseChannel()
{
	currentChannel++;
}

void Television::decreaseChannel()
{
	
	currentChannel--;
}

int Television::getChannel()
{
	
	return currentChannel;
}

int Television::getVolume()
{
	return currentVolume;
}