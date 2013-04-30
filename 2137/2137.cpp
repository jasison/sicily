#include <iostream>

using namespace std;

void sort(double &num1, double &num2, double &num3)
{
	if(num2 < num1){
		double t = num1;
		num1 = num2;
		num2 = t;
	}
	if(num3 < num1){
		double t = num1;
		num1 = num3;
		num3 = t;
	}
	if(num3 < num2){
		double t = num2;
		num2 = num3;
		num3 = t;
	}
}

int main()
{
	double a,b,c;
	cin >> a >> b >> c;
	sort(a,b,c);
	cout << a << b << c << endl;
	return 0;
}
