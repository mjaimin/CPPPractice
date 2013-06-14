#include <iostream>
class Base
{
public:
	virtual void parse()=0;
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
	void parse()
	{
		std::cout << "Sub::parse" << std::endl;
	}
	void hello()
	{
		std::cout << "Sub::hello" << std::endl;
	}
};

int main()
{
	Base *MyBaseObject = new Sub();
	MyBaseObject->parse();
}

/*
Base::Base
Base::hello
Sub::parse
*/