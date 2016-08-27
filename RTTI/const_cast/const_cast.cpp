#include <iostream>
using namespace std;

void sqrval1(const int *val)
{
    int *p;
 //   p = val;//error:invalid conversion from 'const int*' to 'int*'
    p = const_cast<int *> (val);
    *p = *val * *val;
}
void sqrval2(const int &val)
{
//  val = val * val;//error: assignment of read-only reference 'val'
    const_cast<int &> (val) = val * val;
}
void print (char * str)
{
    cout << str << endl;
}
int main()
{
    const char * c = "sample text";
    int x = 10;
    sqrval1(&x);//passby address
    sqrval2(x);//passby reference
    print ( const_cast<char *> (c) );//error : invalid conversion from 'const char*' to 'char*'
}

