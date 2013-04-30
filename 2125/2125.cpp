#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	double a = 0.0,b = 0.0;

	cin >> n;

	for(int i = 1; i <= n; i++){
		a += 1.0 / i;
	}
	for(int i = n; i >= 1; i--){
		b += 1.0 / i;
	}

	cout << fixed << setprecision(15);
	cout << a << endl << b << endl;

	return 0;
}
