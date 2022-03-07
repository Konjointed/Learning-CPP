#include <iostream>

//RAM (random access memory) 
//A series of numbered mailboxes that can each 
//e used to hold a piece of data while the program is running.
//A single piece of data, stored in memory somehwere, is called a value.

//Object
//C++ direct memory access is not allowed. Instead we access memory indirectly through an object.
//An object i a region of storage (usually memory) that has a value and other associated properties

//ex: Instead of say "go get the value stored in mailbox number 7532", we can say, "go get the value stored by this object".
//This means we can focus on using objects to store and retrieve values, and not have to worry about where in memory
//they're actually being placed.

//Objects can be named or unnamed (anonymous). A named object is valled a variable, and the name o the object is called an identifier.
//In out programs, most of the objects we create and use will be variables. 

//Notes
//In general programming, the term "object" typically refers to a variable, data structure in memory, or function. In C++, the term "object" has
//a narrower definition that excludes functions.

// 1) Data is any information that can be moved, processed, or stored by a computer 
// 2) A value is a single piece of data stored in memory 
// 3) What is a variable? A named region of memory 
// 4) An identifer is the name that a variable is accessed by

int main()
{
	//Variable instantiation
	int x; //define a variable named x, of type int.

	//Data types or "type" tells the compiler wha type of value the variable will store.
	//In C++ the type of a variable must be known at compile-time (when the program is compiled).
	double width; //define a variable named width, of type double

	//Defining multiple variables 
	int a; 
	int b; 

	//Same as: int a, b; (correct)
	//int a, int b; (wrong (compiler error)) 
	//int a; double b; (correct but not recommended)
}