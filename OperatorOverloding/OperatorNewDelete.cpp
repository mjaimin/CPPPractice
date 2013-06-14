#include <iostream>
#include <stdlib.h>
class A
{
    public:
    A()
    {
        std::cout << "From A::A()" << std::endl;
    }
    ~A()
    {
        std::cout<< "From A::~A()" << std::endl;
    }
    void* operator new( size_t sz )
    {
        void *p;
        std::cout << "from A::New" << std::endl;
        p = malloc (sz);
        return p;
    }
    void* operator new[]( size_t sz )
    {
        void *p;
        std::cout << "from A::New" << std::endl;
        p = malloc (sz);
        return p;
    }
    void operator delete( void* p )
    {
        std::cout << "from A::delete" << std::endl;
        free(p);
    }
	void operator delete[]( void* p )
    {
        std::cout << "from A::delete" << std::endl;
        free(p);
    }
};
int main()
{
    A* a = new A;
    delete a;	
    A* b = new A[5];
    delete[] b;
}
/*
from A::New
From A::A()
From A::~A()
from A::delete
from A::New
From A::A()
From A::A()
From A::A()
From A::A()
From A::A()
From A::~A()
From A::~A()
From A::~A()
From A::~A()
From A::~A()
from A::delete
*/