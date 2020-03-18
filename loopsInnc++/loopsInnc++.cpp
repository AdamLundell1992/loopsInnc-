// loopsInnc++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Loops in c++
//Adam Lundell

#include <iostream>
#include <string>

int main()
{
	int count = 0;
	int number = 0;
	long long factorial = 0;
	
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

//Factorial calculation using a forloop
						std::cout << "Enter a number for a factorial calculation In your forloop: " << std::endl;
						std::cin >> factorial;
						long long startfact = factorial;
						for (long long i = factorial - 1; i > 1; i--) {
							factorial = factorial * i;
							std::cout<< "Factorial calculation =  " << factorial << std::endl;
						}
						std::cout << "Factorial value of : " << startfact << " is : " << factorial << std::endl;
										long long factorial2; // long long is a data type like int but allow higher numbers == more bytes
										std::cout << "Enter a number for a factorial calculation In your forloop: " << std::endl;
										std::cin >> factorial2;
										long long startfact2 = factorial2 -1; // starting counting down on the value you type in - 1
										int showstartFact = factorial2;// just for showing start value in the final print
										while (startfact2 > 1){ 
									
											factorial2 *= startfact2; // *= is the same as factorial = factorial *
											std::cout << "Factorial calculation =  " << factorial2 << std::endl;
											startfact2--;
										}
											std::cout << "Factorial value of : " << showstartFact << " is : " << factorial2 << std::endl;
													//Do while loops
													int pincode = 5454;
													int guessPincode;
													do {
														std::cout << "enter a valid pincode" << std::endl;
														std::cin >> guessPincode;
														if (guessPincode != pincode) {
															std::cout << "wrong pin code try again! " << std::endl;
														}
													} while (guessPincode != pincode);

													std::cout << "pin code is correct good guess! " << std::endl;
																
																std::string password = "adam";
																std::string guessPassword;
																do{
																std::cout << "enter a valid password" << std::endl;
																std::cin >> guessPassword;
																if (guessPassword != password) {
																	std::cout << "wrong password try again! " << std::endl;
																}
															} while (guessPassword != password);

															std::cout << "password is correct good guess! " << std::endl;
}

