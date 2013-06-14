// class type-casting
#include <iostream>
using namespace std;

class CDummy {
public:
    int i,j;
};

class CAddition {
    int x,y;
  public:
    CAddition (int a, int b) { x=a; y=b; }
    int result() { return x+y;}
};

int main () {
  CDummy d;
  d.i = 5;
  d.j = 7;
  CAddition * padd;
  padd = (CAddition*) &d;// this is allowed in c++ , to avoid this situation dynamic_cast is prefered
  //padd = static_cast <CAddition*> (&d);//  will fail
  //padd = dynamic_cast  <CAddition*> (&d);//  will fail because d and padd are from non related classes
  cout << padd->result();// prints 12
  return 0;
}