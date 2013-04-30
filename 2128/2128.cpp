#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double ans = 1.0;
	long long i,j;
	int n;
	cin >> n;
	for(i = j = 1; i <= n; i++){
		j *= i;
		if(1.0 / j < 10e-20)
			break;
		ans += 1.0 / j;
	}
	cout << fixed << setprecision(15)<< ans << endl;
	return 0;
}
