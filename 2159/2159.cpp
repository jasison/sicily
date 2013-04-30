#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long n)
{
	long i;
	if(n < 2)
		return false;
	if(n == 2)
		return true;
	if(n % 2 == 0)
		return false;
	for(i = 3; i * i <= n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n,p,c = 0;
	long m;

	cin >> n;
	m = 1;
	for(p = 1; p <= n; p++){
		if(p == 31){
			c++;
			break;
		}
		m *= 2;
		if(isPrime(m - 1))
			c++;
	}
	cout << c << endl;
}