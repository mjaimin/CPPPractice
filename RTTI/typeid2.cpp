#include <iostream>
#include<typeinfo>
using namespace std;
template <typename T>
void getNumber(T n){
	if(typeid(T)==typeid(int))
		cout<<"Integer Type Argument"<<endl;
	if(typeid(T)==typeid(float))
		cout<<"float Type Argument"<<endl;
	if(typeid(T)==typeid(double))
		cout<<"double Type Argument"<<endl;
	if(typeid(T)==typeid(char))
		cout<<"Char Type Argument"<<endl;
}
int main()
{
	getNumber(10);
	getNumber(23.6);
	getNumber(13.9f);
	getNumber('a');
	return 0;
}