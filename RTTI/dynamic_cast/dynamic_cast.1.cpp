#include <iostream>
class Animal {
public:
    virtual void Speak() { std::cout << "Animal speak!\n"; }
};

class Cat: public Animal {
public:
    void Speak() { std::cout << "Meow\n"; }
    void Miao()  { std::cout << "Miao\n"; }
};

class Dog: public Animal {
public:
    void Speak() { std::cout << "Woof!\n"; }
};

int main()
{
    int i;
    Animal* animalArray[ ] = { new Dog, new Cat, new Cat };

    for (i=0; i<3; i++)
    {
        animalArray[i]->Speak();

        Cat *pRealCat =  dynamic_cast<Cat *> (animalArray[i]);

        if (pRealCat)// will return NULL for non cat animal
            pRealCat->Miao();
        else
            std::cout << "not a cat!\n";
        std::cout << "\n";
    }
}
