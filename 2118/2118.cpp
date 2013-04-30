#include <iostream>

using namespace std;

bool isPrime(int n)
{
	int i;
	for(i = 3; i * i <= n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n,i;
	
	cin >> n;

	while(n != 1){
		while(n % 2 == 0){
			n /= 2;
			cout << '2' << endl;
		}
		for(i = 3; i <= n; i++){
			if(isPrime(i) && n % i == 0){
				n /= i;
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}