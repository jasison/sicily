#include <iostream>

using namespace std;

bool isPrime(int num)
{
	int i;
	if(num <= 1)
		return false;
	if(num == 2)
		return true;
	if(num % 2 == 0)
		return false;
	for(i = 3; i * i <= num; i++){
		if(num % i == 0)
			return false;
	}
	return true;
}

int main()
{
	if(isPrime(4))
		cout << "a";
}

