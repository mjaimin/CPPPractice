#include <typeinfo>
#include <iostream>

class Base {
public:
    virtual void f() {};
};

class Derived: public Base {
public:
    virtual void f() {}
};

int main() {
    Derived *d = new Derived;
    Base* b = d;
    Derived* d1 = dynamic_cast<Derived*>(b);
    Derived* d2 = dynamic_cast<Derived*>(new Base);
    if(d1)
	std::cout << "d1 Not Null - cast successfull" << std::endl;
    if(!d2)
	std::cout << "d2 Null - cast not possible" << std::endl;
}
