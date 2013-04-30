#include <iostream>

using namespace std;

void reverse(int n)
{
	if(n >= 0){
		do{
			cout << n % 10;
			n /= 10;
		}while(n);
	}
	else{
		n = -n;
		cout << '-';
		do{
			cout << n % 10;
			n /= 10;
		}while(n);
	}
}

int main()
{
	int a;
	cin >> a;
	reverse(a);
	cout << endl;
	return 0;
}
