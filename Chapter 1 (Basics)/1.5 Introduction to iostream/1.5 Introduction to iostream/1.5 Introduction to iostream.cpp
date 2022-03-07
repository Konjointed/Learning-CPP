#include <iostream>

//std::endl vs \n
//std::endl can be inefficient as it does two jobs: it moves the cursor to the next line, and it "flushes" the output 
//(makes sure that it shows up on the screen immediately). When writing text to the console using std::cout, std::cout often flushes output anyway.

//Because of this use of the \n is typically preferred instead. The \n character moves the cursor to the next line but doesnt request a flush so it will
//perform better in cases where a flush would not otherwise happen. Also easier to read.

int main()
{
	int x{ 5 }; //define int variable x, initialized with value 5 
	std::cout << x << std::endl; //print value of x (5) to console 
	std::cout << 6 << std::endl;
	std::cout << "Hello " << "world!" << std::endl;
	std::cout << "x is equal to: " << x << std::endl;

	std::cout << "Hi!" << std::endl; //std::endl will cause the cursor to move to the next line of the console 
	std::cout << "My name is Dominic." << std::endl;

	//Examples of \n 
	std::cout << "x is equal to: 10" << '\n'; //standalone 
	std::cout << "And that's all folks!\n"; //emb edded into double quoted piece of text (note: no single quotes when used this)

	//std::cin 
	//Another predefined variable that is defined in the iostream library. Whereas std::cout prints data to the console 
	//std::cin (stands for "character input") reads input from keyboard. Must be stored in a variable to be used 

	std::cout << "Enter a number: ";

	int y{}; //define variable x to hold user input (and zero-initialize it) 
	std::cin >> y; //get number from keyboard and store it in variable x 

	std::cout << "You entered " << y << '\n';

	return 0;
}
