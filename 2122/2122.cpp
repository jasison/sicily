#include <iostream>
#include <iomanip>

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
	int n,c = 1,i;
	cin >> n;
	cout << setw(5) << right << '2';
	for(i = 3; i <= n; i += 2){
		if(isPrime(i)){
			cout << setw(5) << right << i;
			c++;
			if(c % 8 == 0)
				cout << endl;
		}
	}
	return 0;
}