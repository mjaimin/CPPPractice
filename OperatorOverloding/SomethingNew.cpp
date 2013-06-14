 using namespace std;
 #include <iostream>

 class testClass
  {
   public:
     operator float ()  {return float(77.333);};
     operator int ()  {return int(78);};
     operator char()  {return char('A');};
  };

  int main()
  {
    testClass t;

    float s = t;
    int p = t;
    char q = t;

    cout<< " string: "<<s <<endl;//prints 77.333
    cout<< " string: "<<p <<endl;//prints 78 and if operator int commented prints 65 after implecit conversion
    cout<< " string: "<<q <<endl;//prints 'A'

    return 0;
  }
