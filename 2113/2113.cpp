#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i,a,b;
	int c = 0;
	cin >> a >> b;
	for(i = a; i <= b; i++){
		if((i % 5 == 0 || i % 6 == 0)&&!(i % 5 == 0 && i % 6 == 0)){
			cout << setw(5) << left;
			cout << i;
			c++;
			if(c % 10 == 0)
				cout << endl;
		}
	}
	return 0;
}