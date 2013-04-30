#include <iostream>
#include <string>

using namespace std;

bool leap(int n)
{
	if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0){
		return true;
	}
	return false;
}

int main()
{
	int y,w;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string b[12] = {"January","February","March","April","May","June",
		"July","August","September","October","November","December"};
	string c[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int i;

	cin >> y >> w;

	if(leap(y))
		a[1] = 29;
	cout << b[0] << " 1, " << y << " is " << c[w-1] << endl;
	for(i = 1; i < 12; i++){
		w = (w + a[i-1] % 7) % 7;
		if(w == 0)
			w = 7;
		cout << b[i] << " 1, " << y << " is " << c[w - 1] << endl;
	}
	return 0;
}

