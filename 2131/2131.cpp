#include <iostream>
#include <iomanip>
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
	int y,w,m;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string b[12] = {"January","February","March","April","May","June",
		"July","August","September","October","November","December"};
	string c[7] = {"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	int i,k;
	int j = 8;
	cin >> y >> w >> m;

	if(w == 7)
		w = 0;
	if(leap(y))
		a[1] = 29;
	cout << b[m-1] << " " << y << '\n';
	for(i = 0; i < 7; i++){
		cout << setw(8) << right << c[i];
	}
	cout << '\n';
	for(i = 1; i < m; i++){
		w = (w + a[i-1] % 7) % 7;
		if(w == 7)
			w = 0;
	}
	for(i = 0; i < 7; i++){
		if(i != w){
			j += 8;
			continue;
		}
		cout << setw(j) << right << 1;
		if(i == 6)
			cout << '\n';
		else
			break;
	}
	if(i > 6)
		i = -1;
	for(i++,k = 2; k <= a[m-1]; k++){
		cout << setw(8) << right << k;
		i++;
		if(i > 6){
			i = 0;
			if(k != a[m-1])
				cout << '\n';
		}
	}	
	return 0;
}