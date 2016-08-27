//An object's this pointer is not part of the object itself; it is not reflected in the result of a sizeof statement on the object. 
//Instead, when a nonstatic member function is called for an object, the address of the object is passed by the compiler as a 
//hidden argument to the function. For example, the following function call:
//myDate.setMonth( 3 );
//can be interpreted this way:
//setMonth( &myDate, 3 );// this is always a const pointer; it cannot be reassigned.
 
#include <iostream>
using namespace std;
 
class C
{  
public:
    int i;
    C(){ i = 8; }
    void fn(C*)  ;
};
 
void C::fn(C* c)
{
    std::cout<< this <<std::endl;
    std::cout<< c <<std::endl;
}
 
int main()
{
    C * p;
    p = new C; 
    p->fn(p);
    std::cout<< p <<std::endl;// this pointer is reference of the object
}
