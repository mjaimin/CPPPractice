class Foo
{
public:
    explicit Foo( int x ) { _val = x; }
private:
    int _val;
};

void doSomething( const Foo& foo )
{}

int main()
{
doSomething( 10 );        // Error!
doSomething( Foo( 10 ) ); // OK
}