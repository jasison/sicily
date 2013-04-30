#include <iostream>

using namespace std;

struct p
{
	int x,y;
}a[1000];

int main()
{
	int t,n,i;
	int s;
	cin >> t;

	while(t--){
		cin >> n;
		s = 0;
		for(i = 0; i < n; i++){
			cin >> a[i].x >> a[i].y;
			if(a[i].x > 10 && a[i].x < 50 && (a[i].x - 30) * (a[i].x - 30) + (a[i].y - 30) * (a[i].y - 30) < 400)
				s += 1;
			if(a[i].x > 90 && a[i].x < 110 && (a[i].x - 100) * (a[i].x - 100) + (a[i].y - 30) * (a[i].y - 30) < 100)
				s += 2;
			if(a[i].x > 165 && a[i].x < 175 && (a[i].x - 170) * (a[i].x - 170) + (a[i].y - 30) * (a[i].y - 30) < 25)
				s += 3;
		}
		cout << s << endl;
	}
	return 0;
}
