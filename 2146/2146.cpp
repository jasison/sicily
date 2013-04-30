#include <iostream>

using namespace std;


double pi(int n)
{
	double pi = 1.0;
	int i;
	for(i = 3; i < 2 * n; i += 2){
		pi -= 1.0 / i;
		i += 2;
		pi += 1.0 / i;
	}
	pi *= 4.0;
	return pi;
}

int main()
{
	cout << pi(10);
}