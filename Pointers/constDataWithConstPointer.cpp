#include <iostream>
 
//Pointer to Constant Data
const int* a; //or
int const* b; // both are same
//b is pointer to const int
 
//Pointers with Const Memory Address
int * const c = NULL;
//c is const pointer to int
 
//Const Data with a Const Pointer
const int * const d = NULL;
int const * const e = NULL;
 
 
int main()
{
    a = NULL;//possible
    //*a = 9;//Error:you cannot assign to a variable that is const
    *c = 9;//possible
    //c = NULL;//Error:you cannot assign to a variable that is const
    //d = NULL;//Error:you cannot assign to a variable that is const
    //*d = 9;//Error:you cannot assign to a variable that is const
}