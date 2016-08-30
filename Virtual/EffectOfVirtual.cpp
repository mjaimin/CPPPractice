#include <typeinfo>
#include <iostream>

class Base1 {
public:
    void f() {std::cout<<"Base1"<<std::endl;}
};
class Base2 {
public:
    virtual void f() {std::cout<<"Base2"<<std::endl;}
};


class Derived1: public Base1 {
public:
    virtual void f() {std::cout<<"Derived1"<<std::endl;}
};
class Derived2: public Base2 {
public:
    virtual void f() {std::cout<<"Derived2"<<std::endl;}
};


int main() {
    Derived1* d1 = new Derived1;
    Base1* b1 = static_cast<Base1*>(d1);
    b1->f();
    Derived2* d2 = new Derived2;
    Base2* b2 = static_cast<Base2*>(d2);
    b2->f();
}
