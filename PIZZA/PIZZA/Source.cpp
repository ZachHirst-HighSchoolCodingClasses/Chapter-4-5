// Author Zach Hirst 
// 4/12/18
// Pizza Ordering

#include<iostream>
#include<string>

int main()
{
	//variables
	int userTopings; //user choosing type of pizza
	double pizzaSmall = 7.99, pizzaMedium = 8.99, pizzaLarge = 10.99; //price of pizza
	int pizzaSize; //size of pizza 
	int anotherToping;
	double total;
	double countTopping1 = 1;

	

	//user input
	std::cout << " Welcome to Luigi's stereotypical Pizza Joint! " << std::endl;
	std::cout << " What size of pizza would you like? " << std::endl;
	std::cout << " 1 = Small \n 2 = Medium \n 3 = Large " << std::endl;
	std::cin >> pizzaSize;
	if (pizzaSize == 1)
	{
			std::cout << " You chose a small pizza, the price is " << pizzaSmall << "... What topings would you like? " << std::endl;
			std::cout << " 1 = Pepperoni \n 2 = Canadian Bacon \n 3 = Cheese " << std::endl;
			std::cin >> userTopings;
	
			if (userTopings == 1)
			{
				//pepperoni
				std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
				std::cin >> anotherToping;
				if (anotherToping == 1)
				{
						std::cout << " 1 = Pepperoni \n 2 = Canadian Bacon \n 3 = Cheese " << std::endl;
					countTopping1 = countTopping1 + 1;
					total = pizzaSmall + (0.99*countTopping1);
					
				}

			}
			else if (userTopings == 2)
			{
				//canadian bacon
				std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
				std::cin >> anotherToping;
				if (anotherToping == 1)
				{
					countTopping1 = countTopping1 + 1;
					total = pizzaSmall + 0.99;
				}
			}
			else if (userTopings == 3)
			{
				//cheese
				std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
				std::cin >> anotherToping;
				if (anotherToping == 1)
				{
					countTopping1 = countTopping1 + 1;
					total = pizzaSmall + 0.99;
				}
			}
			else
			{
				//you chose nothing 
			}
	}
	if (pizzaSize == 2)
	{
		std::cout << " You chose a medium pizza, the price is " << pizzaMedium << "... What topings would you like? " << std::endl;
		std::cout << " 1 = Pepperoni \n 2 = Canadian Bacon \n 3 = Cheese " << std::endl;
		std::cin >> userTopings;

		if (userTopings == 1)
		{
			//pepperoni
			std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
			std::cin >> anotherToping;
			if (anotherToping == 1)
			{
				std::cout << " 1 = Pepperoni \n 2 = Canadian Bacon \n 3 = Cheese " << std::endl;
				countTopping1 = countTopping1 + 1;
				total = pizzaMedium + (0.99*countTopping1);

			}

		}
		else if (userTopings == 2)
		{
			//canadian bacon
			std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
			std::cin >> anotherToping;
			if (anotherToping == 1)
			{
				countTopping1 = countTopping1 + 1;
				total = pizzaMedium + 0.99;
			}
		}
		else if (userTopings == 3)
		{
			//cheese
			std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
			std::cin >> anotherToping;
			if (anotherToping == 1)
			{
				countTopping1 = countTopping1 + 1;
				total = pizzaMedium + 0.99;
			}
		}
		else
		{
			//you chose nothing 
		}
	}
	if (pizzaSize == 3)
	{
		std::cout << " You chose a large pizza, the price is " << pizzaLarge << "... What topings would you like? " << std::endl;
		std::cout << " 1 = Pepperoni \n 2 = Canadian Bacon \n 3 = Cheese " << std::endl;
		std::cin >> userTopings;

		if (userTopings == 1)
		{
			//pepperoni
			std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
			std::cin >> anotherToping;
			if (anotherToping == 1)
			{
				std::cout << " 1 = Pepperoni \n 2 = Canadian Bacon \n 3 = Cheese " << std::endl;
				countTopping1 = countTopping1 + 1;
				total = pizzaLarge + (0.99*countTopping1);

			}

		}
		else if (userTopings == 2)
		{
			//canadian bacon
			std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
			std::cin >> anotherToping;
			if (anotherToping == 1)
			{
				countTopping1 = countTopping1 + 1;
				total = pizzaLarge + 0.99;
			}
		}
		else if (userTopings == 3)
		{
			//cheese
			std::cout << " Would you like to add another toping for 0.99?... \n press 1 for yes \n press 2 for no" << std::endl;
			std::cin >> anotherToping;
			if (anotherToping == 1)
			{
				countTopping1 = countTopping1 + 1;
				total = pizzaLarge + 0.99;
			}
		}
		else
		{
			//you chose nothing 
		}
	}
	std::cout << " Your total is " << total << " dollars" << std::endl;

	system("Pause");
	return 0;
}