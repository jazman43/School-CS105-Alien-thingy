#include <iostream>

#include "Alien.h"

int main()
{
    int userIput;

	srand(time(0));

	Alien alien1(60, 1.8, 'm');
	Alien alien2(54, 1.5, 'f');
	Alien alien3(90, 1.9, 'm');
	Alien alien4(49, 1.4, 'f');


	Alien alien5 = alien1 + alien2;
	Alien alien6 = alien3 + alien4;

    if (alien5 == alien6) {
        std::cout << "Alien 5 has the same prestige as Alien 6.\n";
    }
    else {
        std::cout << "Alien 5 does not have the same prestige as Alien 6.\n";
    }
    if (alien5 != alien6) {
        std::cout << "Alien 5 has a different prestige than Alien 6.\n";
    }
    else {
        std::cout << "Alien 5 does not have a different prestige than Alien 6.\n";
    }
    if (alien5 > alien6) {
        std::cout << "Alien 5 has a higher prestige than Alien 6.\n";
    }

    std::cin >> userIput;
}
