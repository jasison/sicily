#include <iostream>

using namespace std;

class A
{
public:
    A(int a0):a(a0) {}
    void showA() { cout<<a<<endl; }
protected:
    int a;
}; 
 
class C
{
public:
    C(int c0):c(c0) {}
    void showC() { cout<<c<<endl; }
protected:
    int c;
};

class B:public A,public C
{
public:
	B(int a1 = 11,int c1 = 22):A(11),C(22)
	{
		a = a1;
		c = c1;
	}
};

int main()
{
	B test(1,2);
	test.showA();
	test.showC();

	return 0;
}
