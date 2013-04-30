#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pi = 1.0;
	int i,n;
	cin >> n;
	for(i = 3; i < 2 * n; i += 2){
		pi -= 1.0 / i;
		i += 2;
		pi += 1.0 / i;
	}
	pi *= 4.0;
	cout << fixed << setprecision(15) << pi << endl;
	return 0;
}