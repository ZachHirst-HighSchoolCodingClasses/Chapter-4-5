// Author Zach Hirst
// 4/13/18
// Testing Triangles

#include<iostream>
#include<string>
#include<math.h>

double sideA, sideB, sideC;
double area, side, perimeter, base, height;
std::string userInputSide, userInputTriangleShape, userInputProcess;

int rightTriangle()
{
	std::cout << " Which side of the right triangle do you want to solve? A, B, or C  " << std::endl;
	std::cin >> userInputSide;

	if (userInputTriangleShape == "right" || userInputTriangleShape == "Right") //right triangle
	{

		if (userInputSide == "C" || userInputSide == "c")//choosing unknown side
		{
			std::cout << " You chose side " << userInputSide << ", what is the distance side A? " << std::endl; //entering side length
			std::cin >> sideA;
			std::cout << " What is the distance for side B? " << std::endl; //entering side length
			std::cin >> sideB;

			sideC = sqrt((sideA * sideA) + (sideB * sideB)); //equation

			std::cout << "The distance for side C is " << sideC << std::endl; //output
			std::cout << " Side A = " << sideA << " \n Side B = " << sideB << std::endl;
		}
		if (userInputSide == "B" || userInputSide == "b")//choosing unknown side
		{
			std::cout << " You chose side " << userInputSide << ", what is the distance to side A? " << std::endl; //entering side length
			std::cin >> sideA;
			std::cout << " What is the distance for side C? " << std::endl; //entering side length
			std::cin >> sideC;

			sideB = sqrt((sideA * sideA) + (sideC * sideC)); //equation

			std::cout << " The distance for side B is " << sideB << std::endl; //output
			std::cout << " Side A = " << sideA << " \n Side C = " << sideC << std::endl;
		}
		if (userInputSide == "A" || userInputSide == "a")//choosing unknown side
		{
			std::cout << " You chose side " << userInputSide << ", what is the distance to side B?" << std::endl; //entering side length
			std::cin >> sideB;
			std::cout << " What is the distance for side C?" << std::endl; //entering side length
			std::cin >> sideC;

			sideA = sqrt((sideB * sideB) + (sideC * sideC)); //equation

			std::cout << " The distance for side A is " << sideA << std::endl; //output
			std::cout << " Side B = " << sideB << " \n Side C = " << sideC << std::endl;
		}
	}
	return 0;
}

int equilateralTriangle()
{
	std::cout << " What would you like to solve in your equilateral triangle? Area, Side, or Perimeter? " << std::endl;
	std::cin >> userInputProcess;
	if (userInputProcess == "area" || userInputProcess == "Area")
	{
		std::cout << " Please enter side A " << sideA << std::endl; //choosing area
		std::cin >> sideA; //input
		
		area = sqrt(3) / 4 * (sideA*sideA); //equation

		std::cout << " The area of your equilateral triangle is " << area << std::endl;  //output
	}
	if (userInputProcess == "side" || userInputProcess == "Side") // choosing side
	{
		std::cout << " Please enter your area " << std::endl;
		std::cin >> area; //input

		side = (2 / 3) * (3 ^ (3 / 4)) * sqrt(area); // equation

		std::cout << " One side of your triangle is " << side; //output
	}
	if (userInputProcess == "perimeter" || userInputProcess == "Perimeter") // choosing perimeter
	{
		std::cout << " Please enter side " << std::endl;
		std::cin >> side;  //input

		perimeter = 3 * side; //equation

		std::cout << " Your perimeter is " << perimeter << std::endl; // output
	}

	return 0;
}

int isoscelesTriangle()
{
	std::cout << " What would you like to solve in your Isosceles Triangle? Perimeter, Base, or Area? " << std::endl;
	std::cin >> userInputProcess;
	if (userInputProcess == "perimeter" || userInputProcess == "Perimeter")
	{
		std::cout << " Please enter the side of the triangle " << std::endl;
		std::cin >> side;
		std::cout << " Now please enter the base of the triangle " << std::endl;
		std::cin >> base;

		perimeter = 2 * (side + base);

		std::cout << " The perimeter of your triangle is " << perimeter << std::endl;
	}
	if (userInputProcess == "base" || userInputProcess == "Base")
	{
		std::cout << " Please enter the perimeter of your triangle " << std::endl;
		std::cin >> perimeter;
		std::cout << " Please enter the side of your triangle " << std::endl;
		std::cin >> side;

		base = perimeter - (2 * side);

		std::cout << " The base of the triangle is " << base << std::endl;
	}
	if (userInputProcess == "area" || userInputProcess == "Area")
	{
		std::cout << " Please enter the base of the triangle " << std::endl;
		std::cin >> base;
		std::cout << " Please enter the height of the triangle " << std::endl;
		std::cin >> height;

		area = (base * height) / 2;

		std::cout << " the area of the triangle is " << area << std::endl;
	}
	return 0;
}

int main()
{
	
	std::cout << " What triangle do you want to solve for? Right, Isosceles, Equilateral? " << std::endl;
	std::cin >> userInputTriangleShape; 
	if (userInputTriangleShape == "right" || userInputTriangleShape == "Right")
	{
		rightTriangle();
	}
	else if (userInputTriangleShape == "equilateral" || userInputTriangleShape == "Equilateral")
	{
		equilateralTriangle();
	}
	else if (userInputTriangleShape == "isosceles" || userInputTriangleShape == "Isosceles")
	{
		isoscelesTriangle();
	}
	
	
	system("Pause");
	return 0;
}