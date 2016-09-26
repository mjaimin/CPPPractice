#include <iostream>
class N {
public:
  int var;
  N() : var(200) { std::cout << "in constructor" << std::endl; }
  N(N const & arg)
  {
      std::cout << "in copy constructor" << std::endl;
      this->var = arg.var;
  }
  void operator=(N const & arg)
  {
      std::cout << "in operator=" << std::endl;
      this->var = arg.var;
  }
};
void fun1( N n )
{
	std::cout << "copy constructor called when passed by value" << std::endl;
}
N fun2( void )
{
	std::cout << "copy constructor called when returned N object" << std::endl;
	return N();
}

int main()
{
    int i =0;
    std::cout << i++ << std::endl;//0
    N obj1;//default constructor
    std::cout << i++ << std::endl;//1
    N obj2(obj1);//copy construstor
    std::cout << i++ << std::endl;//2
    N obj3 = obj1;//copy construstor
    std::cout << i++ << std::endl;//3
    fun1(obj1);//copy construstor
    std::cout << i++ << std::endl;//4
    obj2 = fun2();//copy construstor & operator= both
    std::cout << i++ << std::endl;//5
    obj2 = obj1;//operator=
}

/*output
0
in constructor
1
in copy constructor
2
in copy constructor
3
in copy constructor
copy constructor called when passed by value
in copy constructor
4
in copy constructor
copy constructor called when passed by value
in copy constructor
in operator=
5
in operator=
