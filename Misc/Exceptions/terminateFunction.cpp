//The terminate() function calls the function pointed to by terminate_handler. 
//By default, terminate_handler points to the function abort(), which exits from the program. 
//You can replace the default value of terminate_handler with the function set_terminate().
//
//A terminate function cannot return to its caller, either by using return or by throwing an exception.

#include <exception>
#include <cstdlib>
#include <iostream>
using namespace std;

void f()
{
	printf("Function f()\n");
	throw "Exception thrown from f()";
}

void my_terminate() {
	printf("Call to my_terminate\n");
	//abort();
}

int main()
{
	set_terminate(my_terminate);
	f();
	printf("In main \n");
}