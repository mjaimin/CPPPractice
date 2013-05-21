#include <iostream>
/*Friendship is not inherited, here C is inherited from B and
B is friend of A*/
class B;
class C;
class A
{
	friend B;
	//      friend C;
	/*if above line commented programs throws compilation error
	error text: "void A::funcA() is private"
	that shows friendship is not inherited*/

	void funcA(void)
	{
		std::cout << "hello from A::func" << std::endl;
	}
};
class B
{
public:
	void func(void)
	{
		A a;
		a.funcA();
		std::cout << "hello from B::func" << std::endl;s
	}
};
class C: public B
{
public:
	void func(void)
	{
		A a;
		a.funcA();
		std::cout << "hello from B::func" << std::endl;
	}
};
int main()
{
	B b;
	b.func();
}