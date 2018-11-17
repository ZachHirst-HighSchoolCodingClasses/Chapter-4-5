// Author Zach Hirst
// 4/11/18
// Age Meme Generator

#include<iostream>

int main()
{
	//variables
	int userAge;
	int count = 1;

	std::cout << " Welcome to the Age Meme Generator!!! " << std::endl;

	do {
		//input
		std::cout << " Please enter your age and I will generate a meme. " << std::endl;
		std::cin >> userAge;
		//Process
		if (userAge == 0)
		{
			std::cout << " Aren't you supposed to be in your mother's womb, CHILD " << std::endl;
			count = count + 1;
		}
		 else if (userAge > 0 && userAge < 7)
		{
			std::cout << " Go play with Legos or something. " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 7 && userAge < 13)
		{
			std::cout << " Get away from me peasant " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 13 && userAge < 19)
		{
			std::cout << " You think you're an adult thats cute " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 19 && userAge < 29)
		{
			std::cout << " Why aren't you at that college party tonight? " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 29 && userAge < 40)
		{
			std::cout << " Taxes are due soon, did you get yours done or did Mommy help you? " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 40 && userAge < 50)
		{
			std::cout << " Uh Oh I smell a mid-life crisis coming up " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 50 && userAge < 60)
		{
			std::cout << " God, you're getting old " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 60 && userAge < 70)
		{
			std::cout << " Did you see that retirement home broshure... I sure didn't " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 70 && userAge < 80)
		{
			std::cout << " Time to go find a good hole to die in " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 80 && userAge < 90)
		{
			std::cout << " Jesus you're still alive " << std::endl;
			count = count + 1;
		}
		 else if (userAge >= 90)
		 {
			 std::cout << " Time to go put you into a museum50 " << std::endl;
			 count = count + 1;
		 }
	

	} while (count < 100);

	std::cout << " Alright I thinbk you've had enough memes, go find something else to do " << std::endl;

	system("Pause");
	return 0;
}