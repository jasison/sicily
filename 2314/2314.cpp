#include <iostream>
#inlcude <cmath>
using namespace std;

class Sequence
{
public:
    Sequence() { a=b=0; }
    Sequence(int a0, int b0) { a=a0, b=b0; }
	friend int calSeq(const Sequence& se)
	{
		return (se.a+se.b)*(int)abs(b-a)/2;
	}
private:
    int a, b;
};
