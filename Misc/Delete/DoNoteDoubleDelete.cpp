#include <iostream>
int main()
{
	int *i = new int;
	std::cout << i << std::endl;
	delete i;
	std::cout << i << std::endl;
}