#include <iostream>

using namespace std;

struct ar
{
	int n;
	int c;
}a[100];

int main()
{
	int t,n,i,j,k;
	int b[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(i = 0; i < n; i++){
			cin >> b[i];
		}
		a[0].n = b[0];
		a[0].c = 1;
		j = 0;
		for(i = 1; i < n; i++){
			for(k = 0; k < i; k++){
				if(b[i] == a[k].n){
					a[k].c++;
					break;
				}
			}
			if(k == i){
				a[++j].n = b[i];
				a[j].c = 1;
			}
		}
		int x,y,z;
		for(x = 0; x < j; x++){
			z = x;
			for(y = x+1; y <= j; y++){
				if(a[y].n < a[z].n)
					z = y;
			}
			if(x != z){
				ar t = a[x];
				a[x] = a[z];
				a[z] = t;
			}
		}
		for(k = 0; k <= j; k++)
			cout << a[k].n << " " << a[k].c << endl;
	}
	return 0;
}