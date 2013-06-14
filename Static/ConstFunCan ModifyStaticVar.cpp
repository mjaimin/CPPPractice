class ConstStaticClass
{
public:
    void constFn() const;
private:
    int data;
    static int staticData;
};
 
int ConstStaticClass::staticData = 9;
 
void ConstStaticClass::constFn() const
{
    ++staticData;	
#if 0
    ++data;// compiler will throw error
#endif
}
 
int main()
{
    ConstStaticClass p;
    p.constFn();
}