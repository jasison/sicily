#include <iostream>
#include <iomanip>

using namespace std;

void printMatrix(int n)
{
	int a[30][30] = {0};
	int i,j;
	for(i = 0,j = 0; j < n; j++){
		a[i][j] = 1;
	}
	for(i = 0,j = 0; i < n; i++){
		a[i][j] = 1;
	}
	for(i = 0,j = 0; i < n; i++,j++){
		a[i][j] = 1;
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << setw(2) << right << a[i][j];
		}
		cout << endl;
	}
}

int main()
{
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		printMatrix(n);
	}
	return 0;
}
