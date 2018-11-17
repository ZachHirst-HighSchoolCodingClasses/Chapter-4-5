//Author Zach Hirst 
//4/10/18
//Guessing Game

#include <iostream> 
#include <random> 
#include <time.h>

int main()
{
	int numChoice;
	int secret;

	srand(time(NULL));
	//generate secret number between 1 - 100 
	secret = rand() % 100 + 1;

	do{


		std::cout << " Please pick a number between 1-100. " << std::endl;
		std::cin >> numChoice;

		if (numChoice == secret)
		{
			std::cout << " Congratulations you guessed " << secret << " the correct number. " << std::endl;
		}
		else
		{
			std::cout << " You chose " << numChoice << " sadly you were wrong.. " << std::endl;
			std::cout << " i know its depressing but don't worry the actual number was " << secret << std::endl;
		}
	} while (numChoice != secret);
	
	system("Pause");
	return 0;
}