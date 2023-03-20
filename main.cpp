#include <iostream>

#include "Alien.h"
#include <string>
#include <vector>


int main()
{
    int userInput;
	//creates a random seed
	srand(time(0));
	//creates an empty list of aliens
	std::vector<Alien> aliens;
	
	//the main loop
	do 
	{
		//displays the main menu options to the user
		std::cout << "\n\n**-Choose an option-**\n\n";

		std::cout << "-1. create a pier of aliens\n";
		std::cout << "-2. create Alien Offspring\n";
		std::cout << "-3. Comper Alien Offspring prestige\n";
		std::cout << "-4. Exit\n";
		std::cout << "user input here: ";
		std::cin >> userInput;

		//a switch for the main menu
		switch (userInput)
		{
		case 1:
		{
			//first case is to create a pier of aliens one male and one female
			float weight, height;
			
			//askes user to input the weight and height of each alien
			std::cout << "\ncreate Aliens\n";

			std::cout << "Enter weight: ";
			std::cin >> weight;
			std::cout << "Enter height: ";
			std::cin >> height;
			//stores alien back into the list of aliens
			aliens.emplace_back(weight, height, 'f');
			std::cout << "female alien created.\n";
			//this is for the second alien
			std::cout << "Enter weight: ";
			std::cin >> weight;
			std::cout << "Enter height: ";
			std::cin >> height;			
			aliens.emplace_back(weight, height, 'm');
			std::cout << "male alien created.\n";
			break;
		}		
		case 2:
		{
			//second case is to get to index's of the aliens(parents) and using them to crate one new alien
			int parentIndex1, parentIndex2;
			//askes for user input of the two index's
			std::cout << "Enter index of parent 1: ";
			std::cin >> parentIndex1;
			std::cout << "Enter index of parent 2: ";
			std::cin >> parentIndex2;

			//checks if they are vailed index's
			if (parentIndex1 >= 0 
				&& parentIndex1 < aliens.size() 
				&& parentIndex2 >= 0 
				&& parentIndex2 < aliens.size()	)
			{
				//stores the two aliens for the list into there own var we are using refens so we dont accidently change them
				Alien& parent1 = aliens[parentIndex1];
				Alien& parent2 = aliens[parentIndex2];
				//uses the Addison overloaded operator to create new alien
				Alien offspring = parent1 + parent2;
				//stores new alien into the alien list
				aliens.push_back(offspring);
				//displays info of the new alien to user
				std::cout << "Offspring created gender: " << offspring.getGender() << "\nheight: " << offspring.getHeight() << "\nweight: " << offspring.getWeight() << "\n";
			}
			 
			break;
		}
		case 3:
		{
			//third case is getting two alien Index's and comparing ther prestige using diffrent overloaded operators
			int alienIndex1, alienIndex2;
			//askes user for the to index's 
			std::cout << "\nEnter index of alien 1: ";
			std::cin >> alienIndex1;
			std::cout << "Enter intex of alien 2: ";
			std::cin >> alienIndex2;

			//checks if the index's exsit
			if(alienIndex1 >= 0 
				&& alienIndex1 < aliens.size() 
				&& alienIndex2 >= 0 
				&& alienIndex2 < aliens.size())
			{
				//gets the aliens form the list and stores them in a refese Alien var so we dont change anything
				Alien& alien1 = aliens[alienIndex1];
				Alien& alien2 = aliens[alienIndex2];
				//displays results to user
				std::cout << "Alien 1 == Alien 2: " << (alien1 == alien2) << "\n";
				std::cout << "Alien 1 != Alien 2: " << (alien1 != alien2) << "\n";
				std::cout << "Alien 1 > Alien 2: " << (alien1 > alien2) << "\n";
				std::cout << "Alien 1 < Alien 2: " << (alien1 < alien2) << "\n";
				std::cout << "Alien 1 >= Alien 2: " << (alien1 >= alien2) << "\n";
				std::cout << "Alien 1 <= Alien 2: " << (alien1 <= alien2) << "\n";
				
			}

			break;
		}
		case 4:
		{
			//exits programe
			return 0;

			break;
		}
		default:
			break;
		}

	} while (true);
	

	
	
	return 0;    
}
