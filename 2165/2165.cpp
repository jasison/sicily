#include <iostream>

using namespace std;

int main()
{
	int t,n,i,j,k;
	int a[1000],b[1000];
	cin >> t;

	while(t--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		b[0] = a[0];
		j = 0;
		for(i = 1; i < n; i++){
			for(k = 0; k < i; k++){
				if(a[i] == b[k])
					break;
			}
			if(k == i){
				b[++j] = a[i];
			}
		}
		cout << b[0];
		for(k = 1; k <= j; k++)
			cout << " " << b[k];
		cout << endl;
	}
	return 0;
}