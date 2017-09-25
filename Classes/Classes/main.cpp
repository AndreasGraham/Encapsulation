#include "Television.h"
#include "BankOfPigs.h"
#include <iostream>

Television TV (69, 18);
BankOfPigs PiggyBank(3000);

int main() {
	while (TV.getChannel() < 73) {
		TV.increaseChannel();
	}

	while (TV.getVolume() < 25) {
		TV.increaseVolume();
	}

	std::cout << PiggyBank.balancePigs() << std::endl;
	PiggyBank.withdrawPigs();
	std::cout << PiggyBank.balancePigs() << std::endl;
	system("pause"); 
}
