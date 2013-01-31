#include <iostream>

class A
{
	double i;
	A(){};//forcing parameterized constructor
public:
	A(double i){ this->i = i;}
	A& operator/=( const A& a)	{		i /= a.i;		return(*this);	}
	A& operator+=( const A& a)	{		i += a.i;		return(*this);	}
	A& operator-=( const A& a)	{		i -= a.i;		return(*this);	}
	A& operator*=( const A& a)	{		i *= a.i;		return(*this);	}
	void print(void)	{		std::cout << i << std::endl;	}
	void init( double i )	{		this->i = i;	}
};

int main()
{
	A b(5);//parameterized constructor
	A c(7);
	b+=c;
	b.print();
	b.init(5),c.init(7);//reusing obj b and c
	b.operator/=(c);
	b.print();
}