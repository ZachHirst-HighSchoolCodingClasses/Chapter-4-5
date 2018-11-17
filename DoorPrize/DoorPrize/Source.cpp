//Author Zach Hirst 
//4/10/18
//Door Prize

#include <iostream> 

int main()
{
	int doorChoice;

	std::cout << " Please pick a door; 1, 2, or 3. " << std::endl;
	std::cin >> doorChoice;

	if (doorChoice == 1)
	{
		std::cout << " The prize behind door " << doorChoice << " is the lengendary master, KANE " << std::endl;
	}
	if (doorChoice == 2)
	{
		std::cout << " The prize behind door " << doorChoice << " is a math test. Hope you studied ;) " << std::endl;
	}
	if (doorChoice == 3)
	{
		std::cout << " The prize behind door " << doorChoice << " a trip to Narnia!!! .....Oh wait that place isn't real, nvm you don't get shit. " << std::endl;
	}
	else
	{
		std::cout << " Are you three years old?? How hard is it to pick 1, 2, or 3?? " << std::endl;
	}



	system("Pause");
	return 0;
}