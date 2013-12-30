class A {
public:
	explicit A(int){};
};

void f(A) {}

int main()
{
	A a1 = 37;      // illegal - if not explicit, it would call only A(int) 

	A a2 = A(47);   // OK

	A a3(57);       // OK

	a1 = 67;        // illegal - if not explicit it would call A(int) and =assignment operator

	f(77);          // illegal - if not explicit, it would call A(int) and then copy constructor should get called
}
