#include <iostream>
#include <vector>

using namespace std;

class Complex
{
public:
	int x,y;
	Complex(int a,int b){ x = a; y = b; };
	friend void for_each(vector<Complex>::iterator a,vector<Complex>::iterator b,ComplexAdd c);
};

class ComplexAdd
{
	int m,n;
public:
	ComplexAdd(int a,int b){ m = a; n = b; };
	int getM(){ return m; };
	int getN(){ return n; };
	friend void for_each(vector<Complex>::iterator a,vector<Complex>::iterator b,ComplexAdd c);
};

void for_each(vector<Complex>::iterator a,vector<Complex>::iterator b,ComplexAdd c)
{
	vector<Complex>::iterator iter;
	for(iter = a ; iter != b; iter++){
		iter->x += c.getM();
		iter->y += c.getN();
	}
}

int main()
{
    Complex A[] = { Complex(1, 2), Complex(3, 4), Complex(5, 6), Complex(7, 8), Complex(9, 10)};
    vector<Complex> aa(A, A + 5);
         
    for_each(aa.begin(), aa.end(), ComplexAdd(2,3));
    for_each(A, A+10, ComplexAdd(5,6));
 
         
    vector<Complex>::iterator p;
    for ( p = aa.begin(); p != aa.end(); p++)
            cout << p->x << p->y;
    cout << endl;
 
    int i;
    for (i = 0; i < 5; i++)
            cout << A[i];
 
    return 0;
}