// Author Zach Hirst 
// 4/17/18
// Dice Rolling game

#include<iostream>
#include<time.h>
#include<cstdlib>

int dice;

int rolling()
{
	srand(time(0));
	dice = rand() % 6 + 1;

	if (dice == 1)
	{
		std::cout << " You get a score of 1 " << std::endl;
	}
	else if (dice == 2)
	{
		std::cout << " You get a score of 2 " << std::endl;
	}
	else if (dice == 3)
	{
		std::cout << " You get a score of 3 " << std::endl;
	}
	else if (dice == 4)
	{
		std::cout << " You get a score of 4 " << std::endl;
	}
	else if (dice == 5)
	{
		std::cout << " You get a score of 5 " << std::endl;
	}
	else if (dice == 6)
	{
		std::cout << " You get a score of 6 " << std::endl;
	}
}


int main()
{
again:
	std::string tryAgain;

	int score;

	std::cout << " Hola tu es en un videojuego... mi know no more espanish  " << std::endl;
	std::cout << " You can roll your dice 100 times if you so please " << std::endl;

	for (int n = 100; n > 0; n--)
	{
		rolling();

		score = score + dice;

	}

	std::cout << " Your score is " << score << std::endl;

	system("Pause");
	return 0;
}