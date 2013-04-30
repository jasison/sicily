#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int i,j,n;
	cin >> n;
	for(i = 1; i <= n; i++){
		cout << setw(5 * (n - i + 1)) << right << '1';
		for(j = 2; j <= (int)pow(2.0,i - 1); j *= 2){
			cout << setw(5) << right << j;
		}
		for(j /= 4; j >= 1; j /= 2){
			cout << setw(5) << right << j;
		}
		cout << endl;
	}
	return 0;
}