// Author Zach Hirst
// 4/18/18
// Dice Rolling Game

#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>
#include<string>

double num1;
double num2;
double sum1;
std::string userChoice;

int diceOne()
{
	srand(time(NULL));

	num1 = rand() % 6 + 1;	
	num2 = rand() % 6 + 1;

	std::cout << num2 << std::endl;
	std::cout << num1 << std::endl;

	sum1 = num1 + num2;

	std::cout << " Your score is " << sum1 << std::endl;

	return 0;
}

int main()
{
	std::cout << " Welcome to the dice game... *RANDOMIZING AND ROLLING DICE* " << std::endl;
	again:
	diceOne();
	do
	{

		if (sum1 == 7 || sum1 == 11)
		{
			std::cout << " Congratulations, you win! " << std::endl;
			std::cout << " Your winning numbers were " << num1 << std::endl;
			std::cout << " And " <<  num2 << std::endl;
			std::cout << " The winning sum was " << sum1 << std::endl;
		}
		else if (sum1 != 7 || sum1 != 11)
		{
			std::cout << " I'm sorry, those are not winning numbers " << std::endl;
		
		}
		std::cout << " Would you like to play again? \n Yes or No " << std::endl;
		std::cin >> userChoice;
	} while (userChoice == "Yes" || userChoice == "yes");

	std::cout << " Thanks for playing " << std::endl;

	system("Pause");
	return 0;
}