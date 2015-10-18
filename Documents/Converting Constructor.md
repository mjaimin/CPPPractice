Converting Constructor
======================

As per standard **C++03: §12.3.1** and **C++11: §12.3.1** definition of converting constructor differs.

* **C++03: §12.3.1**
    
    A constructor declared without the function-specifier `explicit` that can be called with a single parameter specifies a conversion from the type of its first parameter to the type of its class. Such a constructor is called a `converting constructor`.

* **C++11: §12.3.1**


    A constructor declared without the function-specifier `explicit` specifies a conversion from the types of its parameters to the type of its class. Such a constructor is called a `converting constructor`.

_Note_: Why are constructors with more than a single parameter considered to be converting constructors in C++11? That is because the new standard provides us with some handy syntax for passing arguments and returning values using braced-init-lists. 

We will try to complete document by adding code incorporating both the definitions

````cpp
#include<iostream>

using namespace std;
class Test
{
  public:
    int x;
    int y;
//    Test(int i, int j=1)
    explicit Test(int i, int j=1)
    {
      std::cout << "This is Converting Constructor" << std::endl;
      x = i;
      y = j;
    }

};

void show( Test obj )
{
  std::cout << obj.x << std::endl;
  std::cout << obj.y << std::endl;
}

Test Create(int i, int j)
{
  //Error: if constructor defined as explicit
  return {i,j}; // {initialization list} this compiles only with flag -std=c++11
}

int main()
{
  Test t(20);

  //Error: if constructor defined as explicit
  t = 30; // conversion constructor is called here.
  show(t);//desirable case
  show(Test(40));//Also a desirable case

  //Error: if constructor defined as explicit
  show(60);// Non desirable case`
  Test tp = Create(4,5);
  show(tp);
}

````
