#include <iostream>

class A
{
	double i;
	A(){};//forcing parameterized constructor
public:
	A(double i){ this->i = i;}
	A& operator+( const A& a)	{		i = i + a.i;		return(*this);	}
	A& operator-( const A& a)	{		i = i - a.i;		return(*this);	}
	A& operator*( const A& a)	{		i = i * a.i;		return(*this);	}
	A& operator/( const A& a)	{		i = i / a.i;		return(*this);	}
	void print(void)	{		std::cout << i << std::endl;	}
	void init( double i )	{		this->i = i;	}
};

int main()
{
	A b(5);//parameterized constructor
	A c(7);
	A d(8);//8 will be over written by return (*this)

	d = b+c;
	d.print();//prints 12
	b.init(5),c.init(7),d.init(8);// we will always reuse objects b,c,d
	(b+c).print();//from return value of operator+ (*this).print() ////prints 12
	b.init(5),c.init(7),d.init(8);
	b+c;
	b.print();//prints 12
	b.init(5),c.init(7),d.init(8);
	b.operator+(c);//equivalent to b+c
	b.print();//prints 12
	b.init(5),c.init(7),d.init(8);
	c.operator/(b);//equivalent to c/b
	c.print();//prints 12
}