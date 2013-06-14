
#include <iostream>
class Base {
	public:
		virtual void f(double x)//Virtuality doesnot metter for this example because here we want to deal with function OVERLOADING
		{
			std::cout << "Base:f" << std::endl;
		}
};

class Derived : public Base {
	public:
//by default  virtual void f(double x) does not have visibility in derived 
		using Base::f;//exposes virtual void f(double x) in derived class
		void f(char c)
		{

			std::cout << "derived:f" << std::endl;
		}
};

int main()
{
	Derived* d = new Derived();
	Base* b = d;
	b->f(65.3);//Base:f
	d->f(65.3);//Base:f
	d->Base::f(65.3);//Base:f // This methode is more desirable because Base class methode still gets hidden which is not case with using ::
	delete d;
	return 0;
}
