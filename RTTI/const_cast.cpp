#include <iostream>
using namespace std;

int main () {
    const int test = 10;
    const int &i = test;
    //int &i = test;//if uncommented, error:  cannot convert from 'const int' to 'int ' reference
    int &j = const_cast <int&> (test);// this is the solution to remove constness of test
    j = 12;
    //int k = const_cast <int> (test);//error: the type in a const_cast must be a pointer, reference, or pointer to member to an object type

    std::cout << test << std::endl;
    int check = 11;
    const int &k = const_cast <const int&> (check);
    // const int &k = check; // this is also possible without error
    //k = 12;//changing value of const is error

    return 0;
}