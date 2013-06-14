#include <iostream>
struct A
{
        int a;
        int &b ;
        int &c ;
        int &d ;
};
int main()
{
        std::cout << sizeof(struct A) << std::endl; //it's 32
}

