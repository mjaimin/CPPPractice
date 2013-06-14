class Base
{
public:

    Base() {}
    virtual ~Base(){}

private:
    virtual void fun() 
    { 
        std::cout << "Base Class invoke" << std::endl;
    }

};


class Derived : public Base
{
public:
    Derived()
    {
        fun(); // this line should not compile
    }

private:
    // Overriding Base class virtual function
    void fun() 
    { 
        std::cout << "Drived class invoke" << std::endl;
    }
};

int main()
{
   Base* b= new Derived();
   return 0;
}
