#include <iostream>

using namespace std;

int main()
{
	int t,n,i;
	int a[1000];
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		cout << a[--i];
		for(i--; i >= 0; i--){
			cout << " " << a[i];
		}
		cout << endl;
	}
	return 0;
}