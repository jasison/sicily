#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a,b,c,j;
	double i,sum=0.0;
	cin >> a >> b >> c;
	i = b/100/12;
	for(j=1; j<=c; j++){
		sum = (a+sum)*(1.0+i);
	}
	cout << fixed << setprecision(2) << sum << endl;

	return 0;
}