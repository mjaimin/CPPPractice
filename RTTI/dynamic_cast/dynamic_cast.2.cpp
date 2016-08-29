//Cast from Base * to Derived * (wrong)
#include <iostream>
using namespace std;

class Base {
public:
  virtual void f() { cout << "Inside Base\n"; }
};

class Derived : public Base {
public:
  void f() { cout << "Inside Derived\n"; }
};

int main()
{
  Base b_ob;
  Derived *dp;
  dp = dynamic_cast<Derived *> (&b_ob);
  if( dp == NULL )
    cout << "Cast from Base * to Derived * not OK.\n";
  else
    cout << "never printed"";

  return 0;
}
