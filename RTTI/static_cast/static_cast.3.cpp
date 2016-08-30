#include <stdio.h>
void foo (void *p, char *s, int i, double d)
{
	void* tmp = static_cast<char*>(p);
    p = static_cast<void*>(s);
    s = static_cast<char*>(tmp);
	double tmpd = d;
    d = static_cast<double>(i);
    i = static_cast<int>(tmpd);
}
int main()
{
	foo("some","string",5,6.7);
}