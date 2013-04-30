#include <iostream>

using namespace std;

bool isPrime(int n)
{
	int i;
	
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
	int n,c,i,j,s;

	while(cin >> n && n){
		c = 0;
		for(i = 2; ; i++){
			s = 0;
			if(i > n)
				break;
			if(isPrime(i)){
				s += i;
				if(s == n){
					c++;
					continue;
				}
				for(j = i + 1; ; j++){
					if(isPrime(j)){
						if(s > n)
							break;
						s += j;
						if(s == n){
							c++;
							break;
						}
					}
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}