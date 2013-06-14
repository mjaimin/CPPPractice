//function object example
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//simple function object that prints the passed argument
class PrintSomething
{
public:
    PrintSomething()
    {
        std::cout << "constructor was called only once" << std::endl;
    }

    void operator() (int elem) const
    {
        std::cout<<elem<<' ';
        //std::cout << this << std::endl;alue is same//this pointer v
    }
};

int main()
{
    std::vector<int> Numbers;
    for (int i=1; i<=8; i++) Numbers.push_back(i);
    for_each (Numbers.begin(), Numbers.end(),PrintSomething());
}