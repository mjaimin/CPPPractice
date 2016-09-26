//Byte alignment or byte padding
//Size of all non-static data members
//Size of its immediate base class
//The existence of virtual function(s)
//Compiler being used
//Mode of inheritance (virtual inheritance)

#include <iostream>

class A
{

};

class B
{
	static int i;
};
int B::i = 9;

class C
{
	void fun(void);
};
void C::fun(void){int i; i = 9;};

class D
{
	virtual void fun(void);
};
void D::fun(void){int i; i = 9;};

class E: public D
{
	// void fun(void){}
	// virtual void fun(void){}
};

class F: virtual public A
{

};

class G
{
public:
	int i;
};

class H:  public G
{
	int j;
};

int main()
{
	std::cout << sizeof(class A) <<std::endl;//empty class size is 1 Byte, because when new is called it has to assign some address, if it is zero then there can not be any address
	std::cout << sizeof(class B) <<std::endl;//class size is 1 Byte, Static members are really not part of the class object. They won't be included in object's layout.
	std::cout << sizeof(class C) <<std::endl;//class size is 1 Byte, Function implementations are not part of objects layout.
	std::cout << sizeof(class D) <<std::endl;//class size is 4 Byte, when function is declared as virtual VPTR gets created.
	std::cout << sizeof(class E) <<std::endl;//class size is 4 Byte, Virtual table pointer will be common across the class hierarchy.
	std::cout << sizeof(class F) <<std::endl;//class size is 4 Byte, When we use virtual inheritance, there will be the overhead of 4 bytes for a virtual base class pointer in that class.
	std::cout << sizeof(class H) <<std::endl;//class size is 8 Byte, Base class size gets added to derived class
}