#include <iostream>
int main()
{
    char c = 10;       // 1 byte
    int *p = (int*)&c; //4 bytes

    int *q = static_cast<int*>(&c); // compile-time error

    std::cout<< *p << std::endl;//prints junk value
    *p = 5;// run-time error stack curruption
}
