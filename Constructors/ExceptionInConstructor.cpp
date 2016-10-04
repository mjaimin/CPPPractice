#include <iostream>
#include <string>
using namespace std;

class list
{
  public:
    int length;
    list(){}
    list(int a);    
};
list::list( int a )
  try
{
  length = a;
  if ( length < 0 )   
  {    
    throw    std::string ("negative length of list"); ;
  }
}
catch(std::string& e)
{
  std::cout <<"Incomplete Object list" << std::endl;
  std::cout << e <<std::endl;
}

class A :  public list
{
  public:
    int h;
    A( void )
      try : list(-1)
      {
        h = 9;
        std::cout << "Will not get printed" << std::endl;//
      }
    catch(string& e)
    {
      std::cout <<"Incomplete Object A" << std::endl;
      std::cout << e <<std::endl;
    }
};

int main()
{
  try
  {
    A a;
    std::cout <<"Will not get Printed" << std::endl; 
  }
  catch(string& e)
  {
    std::cout <<"Exception in object creation" << std::endl;
    std::cout<< e << std::endl;
  }
  catch(...)
  {
    std::cout << "All Handled" << std::endl;
  }
  std::cout <<"Will get Printed" << std::endl;
}
