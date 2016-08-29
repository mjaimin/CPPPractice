#include <cstdio>
#include <iostream>
#include <typeinfo>
 
struct A
{
    virtual void test()
    {
        printf("in A\n");
    }
};
 
struct B : A
{
    virtual void test()
    {
        printf("in B\n");
    }
 
    void test2()
    {
        printf("test2 in B\n");
    }
};
 
struct C : B
{
    virtual void test()
    {
        printf("in C\n");
    }
 
    void test2()
    {
        printf("test2 in C\n");
    }
};
 
struct D : B
{
    virtual void test()
    {
        printf("in D\n");
    }
 
    void test2()
    {
        printf("test2 in D\n");
    }
};
 
void Globaltest(A& a)
{
    try
    {
        C& newC = dynamic_cast<C&>(a);// will create reference of passed obj a to newC
        printf("in Globaltest\n");
        newC.test2();// reference can never be NULL so if NULL check is not possible so try..catch is required here
    }
    catch(const std::bad_cast& e)
    {
        printf("%s: This object is not of type C\n", e.what());
    }
}
 
int main()
{
    //A a;
   // A& cd=a;// creating reference of obj a;
    A* newC = new C;
    A* newB = new B;
 
    newC->test();
 
    B* cToB = dynamic_cast<B*>(newC);
    if (cToB)
        cToB->test2();
 
    // will not work because B knows nothing about C
    C* bToC = dynamic_cast<C*>(newB);// will return NULL
    if (bToC)
        bToC->test2();
 
    C newC2;
    Globaltest(newC2);// global test will pass
 
    // will fail because B knows nothing about C
    B newB2;
    Globaltest(newB2);//// global test will fail
 
    // will fail because B knows nothing about C
    B newD;
    Globaltest(newD);//// global test will fail because D does not know anything about C
 
    delete newC;
    delete newB;
}

