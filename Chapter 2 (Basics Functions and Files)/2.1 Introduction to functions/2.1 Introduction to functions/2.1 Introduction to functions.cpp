#include <iostream>

//A function is a reusable sequence of statements designed to do a particular job. 

//Example of a user-defined function (user-defined functions are functions you write yourself)
/*
return-type identifier() //identifer replaced with the name of your function 
{
//code here 
}

1) Just like variables have names so do user-defined functions. The identifier is the name of it. 
2) The parentheses after the identifier tell the compiler that we're defining a function 
3) The curly braces and statements in between are called the function body. This is where the statements that are part of your function will go.
*/

//Nested functions are not supported.

void doOtherPrint()
{
    std::cout << "In doOtherPrint()\n";
}

//Definition of user-defined function doPrint() 
void doPrint() //doPrint() is the called function 
{
    std::cout << "Starting doPrint()\n";
    doOtherPrint(); 
    std::cout << "Ending doPrint()\n";
}

int main()
{
    std::cout << "Starting main()\n";
    doPrint(); //Interupt main() by making a function call to doPrint(). main() is the caller.
    std::cout << "Ending main()\n"; //this statement is executed after doPrint() ends

    return 0;
}

