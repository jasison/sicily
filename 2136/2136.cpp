#include <iostream>
#include <cmath>

using namespace std;

int reverse(int n)
{
	int s = 0;
	int a[100],i,j,t;
	if(n >= 0){
		for(i = 0; ; i++){
			a[i] = n % 10;
			n /= 10;
			if(n == 0)
				break;
		}
		for(j = 0,t = i; j <= t; i--,j++){
			s += a[i] * pow(10.0,j);
		}
		return s;
	}
	else{
		n = -n;
		for(i = 0; ; i++){
			a[i] = n % 10;
			n /= 10;
			if(n == 0)
				break;
		}
		for(j = 0,t = i; j <= t; i--,j++){
			s += a[i] * pow(10.0,j);
		}
		return -s;
	}
}

int main()
{
	int a;
	cin >> a;
	cout << reverse(a) << endl;
	return 0;
}
