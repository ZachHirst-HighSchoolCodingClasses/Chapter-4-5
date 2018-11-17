// Author Zach Hirst 
// 4/11/18
// Hawkeye Challenge Problem 

#include<iostream>

int main()
{
	//variables
	int V = 5;
	int X = 10;
	int I = 1;
	double numI;
	double numX;
	double numV;
	double total;
	//user input
	std::cout << " Welcome to the Roman Numeral translator \n What can I translate for you today? " << std::endl;
	std::cout << " Please enter how many I are in your Numeral " << std::endl;
	std::cin >> numI;
	std::cout << " Please enter how many X are in your Numeral " << std::endl;
	std::cin >> numX;
	std::cout << " Please enter how many V are in your Numeral " << std::endl;
	std::cin >> numV;
	do {
		if (numV > 1)
		{
			std::cout << " I'm sorry you can only have one V " << std::endl;
			std::cout << " Please enter how many V are in your Numeral " << std::endl;
			std::cin >> numV;
		}
	} while (numV > 1);
		//process
	total = (numI * I) + (numX * X) + (numV * V);
	//output
	std::cout << " You had " << numI << " I in your Numeral \n You had " << numX << " X in your Numeral \n You had " << numV << " in your Numeral " << std::endl; 
	std::cout << " Your numeral translated is " << total << std::endl;

	system("pause");
	return 0;
}