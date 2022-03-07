#include <iostream>

//Notes 
// 1) Initialization gives a variable an initial value at the point when it is created. 
//Assignment gives a variable a value at some point after the variable is created.

// 2) Direct brace initialization should be used

int main()
{
	//Assignment 
	int width; //define an int variable named width 
	width = 5; //copy assignment (or just assignment) of value 5 into variable width 

	//variable width now has value 5

	width = 7; //change value stored in variable width to 7

	//variable width now has value 7 

	//Initialization 
	//One downside of assignment is that it requires at least two statements: one to define the variable, and one to assign the value.

	//These two steps can be combined. When a variable is defined, you can also provide an inital value for the variable at the same time.
	//This is called initialization. The value used to initialize a variable is called an initializer. The
	
	int a; //no initializer 
	int b = 5; //initalizer after equals sign  (copy initalization)
	int c(6); //initalizer in parenthesis  (direct initializtion)
	int d{ 7 }; //initalizer in braces (brace initialization also called uniform or list initialization)

	//Brace initialization comes in 3 forms 
	int width{ 5 }; //direct brace initialization of value 5 into variable width (preferred)
	int height = { 6 }; //copy brace initialization of value 6 into variable height 
	int depth{}; //value initialization

	//Initializing multiple variables 
	int a, b; 

	//You can initalize multiple variables defined on the same line: 
	int a = 5, b = 6; // copy initialization
	int c(7), d(8); // direct initialization
	int e{ 9 }, f{ 10 }; // brace initialization (preferred)

	int a, b = 5; // wrong (a is not initialized!)

	int a = 5, b = 5; // correct


	return 0;
}
