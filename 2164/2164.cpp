#include <iostream>

using namespace std;

int main()
{
	int c1,c2,t,i;
	double av;
	double a[1000];
	cin >> t;
	while(t--){
		c1 = c2 = 0;
		av = 0.0;
		for(i = 0; ; i++){
			cin >> a[i];
			if(a[i] < 0)
				break;
			av += a[i];
		}
		av /= i;
		for(int j = 0; j < i; j++){
			if(a[j] >= av)
				c1++;
			else
				c2++;
		}
		cout << c1 << " " << c2 << endl;
	}
	return 0;
}