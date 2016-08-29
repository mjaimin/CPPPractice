//Cast from Derived * to Base * OK.\n"
#include <iostream>

class Base {
public:
  virtual void f() { std::cout << "Inside Base\n"; }
};

class Derived : public Base {
public:
  void f() { std::cout << "Inside Derived\n"; }
};

int main()
{
  Base *bp ;
  Derived d_ob;

  bp = dynamic_cast<Base *> (&d_ob);
  if(bp) {
    bp->f();
    std::cout << "Cast from Derived * to Base * OK.\n";
  } else
    std::cout << "Error\n";
}
