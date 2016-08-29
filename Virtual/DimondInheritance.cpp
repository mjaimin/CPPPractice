//Problem: because Liger derives from both the Tiger and Lion classes – which each have their own copy of the data members and methods of the Animal class- the Liger object "lg" will contain two subobjects of the Animal base class.
//lg.speak() does not know whether the call to speak() refers to the copy of spean() that the Liger object lg inherited through the Lion class or the copy that lg inherited through the Tiger class
//solution: If the inheritance from the Animal class to both the Lion class and the Tiger class is marked as virtual, then C++ will ensure that only one subobject of the Animal class will be created for every Liger object. 
#include <iostream>
class Animal {// base class
    public:
	   int speak() { std::cout<<"Animal"<<std::endl;};
};

//class Tiger : public Animal { /* ... */ }; // see problem/solution statments 
//class Lion : public Animal { /* ... */ }; // see problem/solution statments
class Tiger : virtual public Animal { /* ... */ };
class Lion : virtual public Animal { /* ... */ };
class Liger : public Tiger, public Lion { /* ... */ };

int main()
{
    Liger lg;
    lg.speak();//incase no virtual inheritance then error: request for member ‘speak’ is ambiguous
}

