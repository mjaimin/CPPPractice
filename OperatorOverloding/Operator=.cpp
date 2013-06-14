#include <iostream>
/*The copy constructor is for creating a new object. It copies a existing object to a newly constructed object.
The assignment operator is to deal with an already existing two object. */
class N {
        public:
                int iN;
                N();
                N(N const &);
                void operator=(N const & );
                void fun(N);
};
N::N() : iN(200)
{
        ///     std::cout << "in constructor" << std::endl;
}
N::N(N const & arg)
{
        std::cout << "in copy constructor" << std::endl;
        this->iN = arg.iN;
}
void N::operator=(N const & arg)
{
        std::cout << "in operator=" << std::endl;
        this->iN = arg.iN;
}
N fun(N n)
//The copy constructors are called when class objects are passed by value, returned by value, or thrown as an exception.
{
        return n;
}

int main()
{
        N obj1;
        std::cout << "*********************" << std::endl;
        N obj2(obj1);//one copy constructor gets called
        std::cout << "*********************" << std::endl;
        N obj3 = obj1;//one copy constructor gets called
        std::cout << "*********************" << std::endl;
        fun(obj1);//two copy constructors gets called one passed by argument other from return by value
        std::cout << "*********************" << std::endl;
        obj2 = fun(obj1);//two copy + one operator= gets called
        std::cout << "*********************" << std::endl;
        obj2 = obj1;//operator= gets called
        std::cout << "*********************" << std::endl;

}
/*
*********************
in copy constructor
*********************
in copy constructor
*********************
in copy constructor
in copy constructor
*********************
in copy constructor
in copy constructor
in operator=
*********************
in operator=
*********************
*/