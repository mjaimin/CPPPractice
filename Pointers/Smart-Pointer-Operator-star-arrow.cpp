#include <iostream>
#include <string>

template <class T>
class SM {
    T *nativeObj;
    public:
    SM( T* obj ) { nativeObj = obj; }
    ~SM() { delete nativeObj; }
    T& operator*() { return (*nativeObj); }
    T* operator->() { return nativeObj; }
};

class Student {
    std::string Name;
    public:
    Student( std::string name ): Name(name)
    { std::cout << " Object Created" << std::endl; }

    ~Student(){} 

    std::string getName() { return Name; }
};

int main()
{
    Student* s = new Student("Sooraj");
    SM<Student> sm(s);
    std::cout << sm->getName() << std::endl;
    std::cout << (*sm).getName() << std::endl;
}
