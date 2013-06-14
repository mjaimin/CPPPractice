#include <iostream>
class Base
{
public:
	virtual void hello()
	{
		std::cout << "Base::hello" << std::endl;
	}
	Base();
};
Base::Base()
{
	std::cout << "Base::Base" << std::endl;
	hello();//calls Base::hello because virtual calling does not work on incomplete objects
}

class Sub: public Base
{
public:
	void hello()
	{
		std::cout << "Sub::hello" << std::endl;
	}
};

int main()
{
	Base MyBaseObject = Sub();
	//Base* MyBaseObject = new Sub();
}

/*
Base::Base
Base::hello
*/
