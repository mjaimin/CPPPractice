#include <iostream>

class A
{
private:
    double i;
    double j;
public:
    A( double a, double b)
    {
        i = a;
        j = b;
        std::cout << "in A constructor" <<std::endl;
    }
    A(){};
    double operator()(double a, double b)
    {
        std::cout << "in first functor" <<std::endl;
        return a*b;
    }
    double operator()(int a, int b)
    {
        std::cout << "in sec functor" <<std::endl;
        return a*b;
    }
};
int main()
{
    A x;
    A y(1.0,2.0);//in A constructor
    double z;
    z = x(1.0,2.0);//in first functor
    z = x(1,2);//in sec functor
    x.operator()(1,2);
}