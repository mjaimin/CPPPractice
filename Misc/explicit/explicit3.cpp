#include <iostream>

class Foo {
public:
  Foo(double x)        { std::cout << "Foo(double)\n"; }
  explicit Foo(bool x) { std::cout << "Foo(bool)\n"; }
};
class Boo {
public:
  Boo(double x)        { std::cout << "Boo(double)\n"; }//never gets called in present code
  Boo(bool x) { std::cout << "Boo(bool)\n"; }
};

int main()
{
  Foo af = true;       //OK: implicitly promotes true to (double)1.0, then calls Foo::Foo(double)
  Boo ab = true;       //OK: explicitly calls Boo::Boo(bool)
  Foo bf = Foo(true);  //OK: explicitly calls Foo::Foo(bool)
  Boo bb = Boo(true);  //OK: explicitly calls Foo::Boo(bool)
}