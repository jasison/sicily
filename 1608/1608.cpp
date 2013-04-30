#include <iostream>
#include <memory.h>

using namespace std;

int a[10];

void sum(int n)
{
	do{
		a[n % 10]++;
		n /= 10;
	}while(n);
}

int main()
{
	int t,n,i;

	while(cin >> t){
	/*	cin >> n;
		memset(a,0,sizeof(int)*10);
		for(i = 1; i <= n; i++){
			sum(i);
		}
		for(i = 0; i < 10; i++){
			cout << a[i] << " ";
		}*/
		while(t--){
			cin >> n;
			memset(a,0,sizeof(int)*10);
			for(i = 1; i <= n; i++){
				sum(i);
			}
			cout << a[0];
			for(i = 1; i < 10; i++){
				cout << " " << a[i];
			}
			cout << endl;
		}
	}
	return 0;
}
