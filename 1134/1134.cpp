#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a[1000];
	int k,n,i,j,s;
	
	while(cin >> k >> n){
		a[0] = 1;
		if(n == 1){
			cout << a[0] << endl;
			continue;
		}
		for(s = i = 1; ; i++){
			a[s] = (int)pow(double(k),double(i));
			s++;
			if(s == n){
				cout << a[s-1] << endl;
				break;
			}
			for(j = 0; j < pow(2.0,double(i))-1; j++){
				a[s] = (int)pow(double(k),double(i)) + a[j];
				s++;
				if(s == n){
					cout << a[s-1] << endl;
					break;
				}
			}
			if(j != pow(2.0,double(i))-1){
				break;
			}
		}
	}

	return 0;
}