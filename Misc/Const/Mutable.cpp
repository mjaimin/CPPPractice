//mutable variable value can be changed in consta object
// interview question, Can you put const in side class declaration?
//Ans yes. Pass value in initialization list. This is must otherwise compilation error
class A
{
public:
    A() : x(4), y(5), z(6) { };
    mutable int x;
    int y;
    const int z; 
};
 
int main()
{
    const A var1;
    A var2;
    var1.x = 345;
    //  var1.y = 2345;//Error because var1 is const but int y is not mutable
    var2.x = 345;
    var2.y = 2345;
}
