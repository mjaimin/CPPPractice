/*
The behavior is correct. Whenever you declare your function as "virtual", you instruct the compiler to generate a virtual call, instead of the direct call to this function. Whenever you override the virtual function in the descendant class, you specify the behavior of this function (you do not change the access mode for those clients, who rely on the "parent's" interface).

Changing the access mode for the virtual function in the descendant class means that you want to hide it from those clients, who use the descendant class directly (who rely on the "child's" interface).
*/
#include <iostream>
using namespace std;
class A
{
    public:
        virtual void func() {
        cout<<"A::func called"<<endl;
    }
    private:
};
class B:public A
{
    public:
    B()
    {
        cout<<"B constructor called"<<endl;
    }
    private:
    void func() {
        cout<<"B::func called"<<endl;
    }
};
int main()
{
    A *a = new B();
    a->func();
    return 0;
}
/*
B constructor called
B::func called

*/
