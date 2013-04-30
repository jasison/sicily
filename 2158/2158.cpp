#include <iostream>
#include <cmath>

using namespace std;

bool parindrome(int n)
{
	int s = 0;
	int a[100],i,j;
	for(i = 0; ; i++){
		a[i] = n % 10;
		n /= 10;
		if(n == 0)
			break;
	}
	for(j = 0; ; j++,i--){
		if(a[i] != a[j])
			return false;
		if(j > i)
			break;
	}
	return true;
}

bool isPrime(int n)
{
	int i;
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
	int n,i,c = 1;
	
	cin >> n;
	if(n == 1){
		cout << "2" << endl;
		return 0;
	}
	for(i = 3; ; i += 2){
		if(isPrime(i) && parindrome(i))
			c++;
		if(c == n){
			cout << i << endl;
			break;
		}
	}
	return 0;
}