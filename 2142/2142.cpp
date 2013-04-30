#include <iostream>

using namespace std;

int gcd(int m, int n)
{
	int r;
	if(n > m){
		int t = m;
		m = n;
		n = t;
	}
	do{
		r = m % n;
		m = n;
		n = r;
	}while(n);
	return m;
}

int main()
{
	int m,n;
	cin >> m >> n;
	cout << gcd(m,n) << endl;
}