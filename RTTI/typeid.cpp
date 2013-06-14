#include <iostream>
#include <typeinfo>
using namespace std;

class MyClass{
	int a;
public:
	MyClass(){
		a=10;
	}
};

int main()
{
	int z,y;
	char s;
	MyClass obj1;
	cout<<"type of z is:";
	cout<<typeid(z).name();//type of z is:int
	cout<<"\n type of s is:";
	cout<<typeid(s).name();//type of s is:char
	cout<<"\n type of obj1 is:";
	cout<<typeid(obj1).name();//type of obj1 is:class MyClass
	if(typeid(z)==typeid(y))
		cout<<"\n type of z and y are same";//type of z and y are same"
	if(typeid(z)!=typeid(s))
		cout<<"\n type of z and s are not same";//type of z and s are not same
	return 0;
}