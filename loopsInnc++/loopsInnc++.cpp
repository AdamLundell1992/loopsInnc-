// loopsInnc++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Loops in c++
//Adam Lundell

#include <iostream>
#include <string>

int main()
{
	int count = 0;
	int number = 0;
	std::string str;
	while (number < 20) { // while loop with ints that will stop when reached 20
		number++;
		std::cout << "test" << number << std::endl;
	
	}
	std::cout << "final number stopped at : " << number << std::endl;
	while (str != "banana") {//while loop breaks/stops when the condition is reached in this case it is banana  
		std::cout << "Only banana will break the loop try to type something else" << std::endl;
		std::cin >> str;
	}
	std::cout << "You broke the loop by writing the key word : banana " << std::endl;

	for (count = 0; count < 20; count++) { // for loop with ints that will stop when it rached 20
		std::cout << "Number: " << count << std::endl;
	}
		std::cout << "maximun number is: " << count << std::endl;
}

