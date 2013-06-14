#include <iostream>
using namespace std;
 
void PrintValues( int a = 7, int b = 10 )
    //only trailing argumenta have default value
{
    using namespace std;
    cout << a;
    cout << " " << b << endl;
}
 
int main()
{
    //only trailing argumenta have default value
    PrintValues();
    PrintValues( 1 );
    PrintValues( 3, 4 );
}