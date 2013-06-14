#include <iostream>
class B;
class A
{
	friend class B;
	private:
	A()
	{
		std::cout << "hello A" << std::endl;
	}
};
class B: public A
// Inheritance can be virtual and non Virtual both works here same for this example, I dont know in examples people put virtual here 
//class B: public virtual A
//http://www.youtube.com/watch?v=xEY5tUZreFc
{
	public:
		B()
		{
			std::cout << "hello B" << std::endl;
		}
};
class C: public virtual A
{};
int main()
{
	B b;
	//C c;
}

