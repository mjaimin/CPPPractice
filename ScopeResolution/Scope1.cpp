#include <iostream>

using namespace std;

int amount = 123;   // A global variable

int main() {
   int amount = 456;   // A local variable
   cout  << ::amount << endl   // Print the global variable
         << amount << endl;    // Print the local variable
}