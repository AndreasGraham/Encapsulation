#include "Officer.h"
#include <iostream>

Officer::Officer() {
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNUmber) {
	fullName = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNUmber;
}


void Officer::greet() {
	std::cout << "Hi, my name is" << fullName << std::endl;
	std::cout << "My badg number is: " << badgeNumber << std::endl;
}