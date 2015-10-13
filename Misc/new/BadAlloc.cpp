// bad_alloc example
#include <iostream>     // std::cout
#include <new>          // std::bad_alloc

int main() {
	int* myarray = NULL;
	try
	{
		myarray = new int[0xFFFF];
	}
	catch (std::bad_alloc& ba)
	{
		std::cerr << "bad_alloc caught: " << ba.what() << '\n';
	}
	return 0;
}