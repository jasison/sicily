#include <iostream>

using namespace std;

int sumDigits(long n)
{
	int sum = 0;
	if(n < 0)
		n = -n;
	do{
		sum += n % 10;
		n /= 10;
	}while(n);
	return sum;
}

int main()
{
	int a;
	cin >> a;
	cout << sumDigits(a) << endl;
	return 0;
}