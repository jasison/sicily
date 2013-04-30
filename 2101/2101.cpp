#include <iostream>
#include <string>

using namespace std;

bool isRun(int n)
{
	if(n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
		return true;
	else
		return false;
}

int main()
{
	int y,m;
	int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	string b[12] = {"January","February","March","April","May","June","July",
		"August","September","October","November","December"};
	cin >> y >> m;
	if(isRun(y))
		a[1] = 29;
	cout << b[m-1] << " " << y << " has " << a[m-1] << " days" << endl;
}