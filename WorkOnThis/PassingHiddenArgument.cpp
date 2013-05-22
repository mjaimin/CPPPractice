#include <iostream>
class A
{
    public:
    void func(void);
};
void A::func(void)
{
    std::cout << "from A::func()" << std::endl;
}
int main()
{
    void (A::*pt2Member)(void) = &A::func ;
    A a;
    (a.*pt2Member)();   
    /*
    s1.push(3);
    is translated to 

STACK::push(&s1, 3); by compiler*/
/*R(C::*)(P1,P2) means pointer to function which is member of C return R and takes P1 and P2 as arguments.
*/

}
