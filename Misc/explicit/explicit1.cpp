class A {
public:
	explicit A(int){};
};

void f(A) {}

int main()
{
	A a1 = 37;      // illegal

	A a2 = A(47);   // OK

	A a3(57);       // OK

	a1 = 67;        // illegal

	f(77);          // illegal
}