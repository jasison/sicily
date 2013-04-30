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
		if(n == 1)
			cout << 1 << endl;
		else{
			for(i = 2; ; i++){
				b[0] = a[0] % i;
				for(j = 1; j < n; j++){
					b[j] = a[j] % i;
					for(k = 0; k < j; k++){
						if(b[j] == b[k])
							break;
					}
					if(k != j)
						break;
				}
				if(j == n){
					cout << i << endl;
					break;
				}
			}
		}
	}
	return 0;
}