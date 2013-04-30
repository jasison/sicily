#include <iostream>

using namespace std;

int main()
{
	double a,b,j;
	double i,sum=0.0;
	cin >> a >> b;
	i = b/100/12;
	for(j=1; j<=6; j++){
		sum = (a+sum)*(1.0+i);
	}
	cout << sum << endl;

	return 0;
}