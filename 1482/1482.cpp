#include <iostream>

using namespace std;

struct stu
{
	int n;
	int cm;
	int mm;
	int em;
	int sum;
}a[1000];

int main()
{
	int n;
	int i,j,k;

	cin >> n;
	for(i = 0; i < n; i++){
		a[i].n = i + 1;
		cin >> a[i].cm >> a[i].mm >> a[i].em;
		a[i].sum = a[i].cm + a[i].mm + a[i].em;
	}
	for(i = 0; i < n - 1; i++){
		k = i;
		for(j = k + 1; j < n; j++){
			if(a[j].sum > a[k].sum){
				k = j;
			}
			else if(a[j].sum == a[k].sum){
				if(a[j].cm > a[k].cm){
					k = j;
				}
				else if(a[j].cm == a[k].cm){
					if(a[j].n > a[k].n){
						k = j;
					}
				}
			}
		}
		if(i != k){
			stu t = a[i];
			a[i] = a[k];
			a[k] = t;
		}
	}
	for(i = 0; i < 5; i++){
		cout << a[i].n << " " << a[i].sum << endl;
	}
	while(cin >> n){
		for(i = 0; i < n; i++){
			a[i].n = i + 1;
			cin >> a[i].cm >> a[i].mm >> a[i].em;
			a[i].sum = a[i].cm + a[i].mm + a[i].em;
		}
		for(i = 0; i < n - 1; i++){
			k = i;
			for(j = k + 1; j < n; j++){
				if(a[j].sum > a[k].sum){
					k = j;
				}
				else if(a[j].sum == a[k].sum){
					if(a[j].cm > a[k].cm){
						k = j;
					}
					else if(a[j].cm == a[k].cm){
						if(a[j].n < a[k].n){
							k = j;
						}
					}
				}
			}
			if(i != k){
				stu t = a[i];
				a[i] = a[k];
				a[k] = t;
			}
		}
		cout << endl;
		for(i = 0; i < 5; i++){
			cout << a[i].n << " " << a[i].sum << endl;
		}
	}
	return 0;
}