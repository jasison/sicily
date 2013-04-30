#include <iostream>

using namespace std;

class B
{
public:
    B() { cout << "In B()" << endl; }
    ~B() { cout << "In ~B()" << endl; }
};

class C:public B
{
public:
    C() { cout << "In C()" << endl; }
    ~C() { cout << "In ~C()" << endl; }
};

class A:public C
{
public:
    A() { cout << "In A()" << endl; }
    ~A() { cout << "In ~A()" << endl; }
private:
	B b;
};

class D:public A
{
public:
    D() { cout << "In D()" << endl; }
    ~D() { cout << "In ~D()" << endl; }
};


int main()
{
    D d;
    return 0;
}