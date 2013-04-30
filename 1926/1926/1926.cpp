#include <iostream>

using namespace std;

class NumCal{
	int *p;
	int size;
public:
	int sum();
	NumCal();
	NumCal(int *new_p,int new_size);
};

int NumCal::sum()
{
	int sum=0;
	for(int i=0; i<size; i++){
		sum += *p;
		p++;
	}
	return sum;
}

NumCal::NumCal(int *new_p,int new_size)
{
	p = new_p;
	size = new_size;
}

NumCal::NumCal()
{
	;
}

int main()
{
	int a[10]={1,2,3};
	NumCal c;
	NumCal b(a,3);

	cout << b.sum() << endl;

	return 0;
}