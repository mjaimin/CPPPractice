//A constructor that is not declared with the specifier explicit and which can be called with a single parameter is called a converting constructor.
class A
{
    public: A() { }         
    A(int) { }      // converting constructor
};
 
class B
{
    public: B() { }
    explicit B(int) { }
};
 
int main()
{
    A a = 1;
//  B b = 1; // error: conversion from ‘int’ to non-scalar type ‘B’ requested
}
