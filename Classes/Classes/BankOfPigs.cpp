#include "BankOfPigs.h"

BankOfPigs::BankOfPigs(float cp)
{
	currentPigs = cp;
}

void BankOfPigs::depositPigs(float pigs) {
	currentPigs += pigs;
}

float BankOfPigs::withdrawPigs() {
	currentPigs = 0;
	return currentPigs;
}

float BankOfPigs::balancePigs() const {
	return currentPigs;
}

