#include <iostream>

using namespace std;

int main()
{
	int max,c,t,n,i;
	int a[1000];
	cin >> t;
	while(t--){
		c = 0;
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> a[i];
		}
		max = a[0];
		c = 1;
		for(i = 1; i < n; i++){
			if(a[i] > max){
				max = a[i];
				c = 1;
			}
			else if(a[i] == max){
				c++;
			}
		}
		cout << max << " " << c << endl;
	}
	return 0;
}