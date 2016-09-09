#include <iostream>
#include <utility>
#include <vector>
#include <string>
 
int main()
{
    std::string str1 = "Hello";
    std::string str2 = "";
     
    std::cout << "str1 before copy:" << str1 << std::endl;
	std::cout << "str2 before copy:" << str2 << std::endl;
	str2=std::move(str1);
    std::cout << "str1 after copy:" << str1 << std::endl;
	std::cout << "str2 after copy:" << str2 << std::endl;
}

/*
str1 before copy:Hello
str2 before copy:
str1 after copy:
str2 after copy:Hello
*/
