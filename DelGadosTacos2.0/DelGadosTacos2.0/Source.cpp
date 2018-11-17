//Author Zach Hirst 
// 4/11/18
// Del Gados Tacos 2.0
//3.3. Modify Delgados Tacos by displaying the menu of what the user can order,
//then the user can type the number or item order into the console widow. 
//Then total the total price at the end of the program with the number of items ordered with and without tax

#include<iostream>
#include<string>

int main() {
	//variables
	std::string item;
	bool tacos = 2.99;
	double tacosOrdered;
	bool burritos;
	double burritosOrdered;
	bool churros;
	double churrosOrdered;
	bool fountainDrink;
	double fountainDrinkOrdered;
	bool water;
	double waterOrdered;
	double subTotal;
	//UserInpit 
	std::cout << " Welcome to Del Gados Tacos.. Would you like? " << std::endl;
	std::cout << " -Tacos (2.99) \n-Burritos (3.99) \n-Churros (0.99) \n-Fountain Drink (1.50) NO FREE REFILLS \n-Water (Free) " << std::endl;
	std::cin >> item;
	if (item == "tacos" || item == "Tacos")
	{
		std::cout << " How many Tacos would you like? " << std::endl;
		std::cin >> tacosOrdered;
		subTotal = subTotal + (tacosOrdered * tacos);
	}
	if (item == "burritos" || item == "Burritos")
	{
		std::cout << " How many Burritos would you like? " << std::endl;
		std::cin >> burritosOrdered;
		subTotal = subTotal + (burritosOrdered * burritos);
	}
	if (item == "churros" || item == "Churros")
	{
		std::cout << " How many Churros would you like? " << std::endl;
		std::cin >> churrosOrdered;
		subTotal = subTotal = (churrosOrdered * churros);
	}
	if (item == "fountaindrink" || item == "fountain drink" || item == "Fountaindrink" || item == "FountainDrink")
	{
		std::cout << " How many Fountain Drinks would you like? " << std::endl;
		std::cin >> fountainDrinkOrdered;
		subTotal = subTotal + (fountainDrinkOrdered * fountainDrink);
	}
	if (item == "water" || item == "Water")
	{
		std::cout << " How many Waters would you like? " << std::endl;
		std::cin >> waterOrdered;
	}
	std::cout << " Your sub-total comes to $" << subTotal << std::endl;

	system("Pause");
	return 0;
}