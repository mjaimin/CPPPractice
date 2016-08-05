// mutable variable value can be changed in const function aswell
class X {
   mutable int i;
   int j;
public:
   void func1() const { i++; }//i is mutable, so ++ allowed 
   void func2() const { j++; }// error, j is not declared mutable
};

int main()
{
}
