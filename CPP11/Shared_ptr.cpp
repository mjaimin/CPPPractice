// shared_ptr constructor example
#include <iostream>
#include <memory>
using namespace std;

class A
{
  public:
    A(){std::cout << "constructor\n";}
    void function(){std::cout << "Hello World\n";}    
    ~A(){std::cout << "destructor\n";}
};

void foo(const std::shared_ptr<A> i)
{
  i->function();
  i.get()->function();
  std::cout<<i.use_count()<< std::endl;
}
void bar(const std::shared_ptr<A>& i)
{
  i->function();
  i.get()->function();
  std::cout<<i.use_count()<< std::endl;
}


int main () {
  A *obj = new A();
  std::shared_ptr<A> sp0(obj); std::cout<<sp0.use_count()<< std::endl;
  std::shared_ptr<A> sp1(sp0); std::cout<<sp1.use_count()<< std::endl;
  std::shared_ptr<A> sp2 = std::make_shared<A>();
  foo(sp1); 
  bar(sp2); 
  sp2.reset(); std::cout<<sp2.use_count()<< std::endl;
  sp2.reset(new A()); std::cout<<sp2.use_count()<< std::endl;
  return 0;
}
/*
constructor
1
2
constructor
Hello World
Hello World
3
Hello World
Hello World
1
destructor
0
constructor
1
destructor
destructor
*/
