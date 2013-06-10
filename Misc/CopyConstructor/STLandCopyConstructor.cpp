#include <iostream>
#include <list>

// STL requires implemented copy constructor in class
// if copy constructor made private object can not be added to any STL
class A
{
public:
	A(A const& a ){}
	A(){}
	~A(){}
};
int main()
{
	std::list<A> mylist;
	A a;
	mylist.push_back(a);
}
