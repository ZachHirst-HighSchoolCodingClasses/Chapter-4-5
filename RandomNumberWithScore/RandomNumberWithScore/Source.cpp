// Author Zach Hirst
// 4/10/18
// Random Number Generator Game with score

#include<iostream>
#include<time.h>

int main()
{
	int numChoice;
	int secret;
	int cout = 1;
	// initialize random seed
	srand(time(NULL));
	//generate secret number between 1 ad 10
	secret = rand() % 100 + 1;

	do{
		std::cout << " Please pick a number between 1 and 100 " << std::endl;
		std::cin >> numChoice;

		if (numChoice > secret)
		{
			std::cout << " The number you have chosen is to high! Guess again loser " << std::endl;
			cout = cout + 1;
		}
		else if (numChoice < secret)
		{
			std::cout << " The number you have chosen is to low! Guess again loser " << std::endl;
			cout = cout + 1;
		}
	} while (numChoice != secret);
	
	std::cout << " Congratulations, you picked the right number, you're not a loser after all " << std::endl;
	std::cout << " It took you " << cout << " tries to get it right. " << std::endl;


	system("Pause");
	return 0;
}