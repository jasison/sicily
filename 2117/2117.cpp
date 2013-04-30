#include <iostream>

using namespace std;

int main()
{
	int a,b;
	cin >> a >> b;
	if(b > a){
		int t = b;
		b = a;
		a = t;
	}
	do{
		int t = b;
		b = a % b;
		a = t;
	}while(b);
	cout << a << endl;
	return 0;
}
