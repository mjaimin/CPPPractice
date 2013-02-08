#include <iostream>
#include <string>
using std::string;

class Foo{
public:
	int f1(string str){
		std::cout<<"Foo::f()"<<std::endl;
		return 1;
	}
	static int f2(string str){
		std::cout<<"Foo::f()"<<std::endl;
		return 1;
	}
};

int main(int argc, char* argv[]){
	Foo obj;
	int (Foo::*fptr) (string) = &Foo::f1;
	obj.f1("str");
	/*
	this presents proof, when obj.f1 is called at that time actually obj.Foo::f1() is called with
	first argument as this pointer( = first arg as &obj)*/
	(obj.*fptr)("str");//call: Foo::f1() through an object 
	(obj.Foo::f1)("str");//call: Foo::f1() through an object
	Foo* p=&obj;
	(p->*fptr)("str");//call: Foo::f() through a pointer

	//If you have a non-member function void f(int), then &f is of type void (*)(int).
	//If you have a non-static member function void C::f(int), then &C::f is of type void (C::*)(int).
#if 0
	int (Foo::*sfptr) (string) = &Foo::f2;// gives error : value of type "int (*)(std::string str)" cannot be used to initialize an entity of type "int (Foo::*)(std::string)"
#else if
	int (*sfptr) (string) = &Foo::f2;//correct
#endif		
	/* when static function is called at that time actually obj.Foo::f1() is called without
	first argument as this pointer( = first arg as &obj)*/
	obj.Foo::f2("str");
	(*sfptr)("str");//call Foo::f()
}