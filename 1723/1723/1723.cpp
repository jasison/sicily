#include <iostream>

using namespace std;

int main()
{
	int x,y,r;

	while(cin >> x >> y && (x != 0 && y != 0)){
		if(x < y){
			int t = y;
			y = x;
			x = t;
		}
		do{
			r = x % y;
			x = y;
			y = r;
		}while(r);
		cout << x << endl;
	}

	return 0;
}