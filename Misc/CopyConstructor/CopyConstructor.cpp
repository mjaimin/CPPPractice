#include <iostream>
class N {
public:
  int iN;
  N();
  N(N const &);
  void operator=(N const & );
  void fun(N);
};
N::N() : iN(200)
{
	std::cout << "in constructor" << std::endl;
}
N::N(N const & arg)
{
	std::cout << "in copy constructor" << std::endl;
	this->iN = arg.iN;
}
void N::operator=(N const & arg)
{
	std::cout << "in operator=" << std::endl;
	this->iN = arg.iN;
}
void fun(N)
{
	std::cout << "copy constructor called when passed by value" << std::endl;
}

int main()
{
	N obj1;//default constructor
	N obj2(obj1);//copy construstor
	N obj3 = obj1;//copy construstor
	fun(obj1);//copy construstor
	obj2=obj1;//operator=
}