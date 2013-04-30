#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
	int n,i,j;
	int a[10],b[10],c[10];
	string h = "00";
	string m = "00";
	string s = "00";
	int hh,mm,ss;

	cin >> n;
	getchar();
	for(j = 1; j <= n; j++){
		cin >> h[0] >> h[1];
		getchar();
		cin >> m[0] >> m[1];
		getchar();
		cin >> s[0] >> s[1];

		hh = (h[0] - '0') * 10 + h[1] - '0';
		mm = (m[0] - '0') * 10 + m[1] - '0';
		ss = (s[0] - '0') * 10 + s[1] - '0';

		for(i = 0; i <= 5; i++){
			a[i] = hh / pow(2.0,5 - i);
			hh %= (int)pow(2.0,5 - i);
		}
		for(i = 0; i <= 5; i++){
			b[i] = mm / pow(2.0,5 - i);
			mm %= (int)pow(2.0,5 - i);
		}
		for(i = 0; i <= 5; i++){
			c[i] = ss / pow(2.0,5 - i);
			ss %= (int)pow(2.0,5 - i);
		}
		cout << j << " ";
		for(i = 0; i <= 5; i++){
			cout << a[i] << b[i] << c[i];
		}
		cout << " ";
		for(i = 0; i <= 5; i++){
			cout << a[i];
		}
		for(i = 0; i <= 5; i++){
			cout << b[i];
		}
		for(i = 0; i <= 5; i++){
			cout << c[i];
		}
		cout << endl;
	}
	return 0;
}
