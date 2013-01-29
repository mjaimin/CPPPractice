#include <iostream>
#include <string>
using namespace std;

class myClass
{
public:
    int i;
    void* operator new( size_t )throw (std::bad_alloc);
    void* operator new[]( size_t );// both implementations are same
    void operator delete( void* );
    void operator delete[]( void* );// both implementations are same
};
void* myClass::operator new( size_t sz )throw (std::bad_alloc)
{
    void* p = malloc(sz);
    if ( !p )
    {
        std::bad_alloc ba;// any other user define exception is also possible here
        throw ba;
    }

    return p;
}
void* myClass::operator new[]( size_t sz )throw (std::bad_alloc)
{
    void* p = malloc(sz);
    if ( !p )
    {
        std::bad_alloc ba;// any other user define exception is also possible here
        throw ba;
    }
    return p;
}

void myClass::operator delete( void *p )
{
    free( p );
}
void myClass::operator delete[]( void *p )
{
    free( p );
}
int main()
{
    myClass *c;
    c = new myClass;
    myClass *d;
    d = new myClass[10];
    c->i = 7;
    std::cout << c->i<<std::endl;
    delete c ;
    delete[] d;
}