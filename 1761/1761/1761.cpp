#include <iostream>

using namespace std;

int main()
{
	char a[100],c;
	int i,sum;

	while(1){
		i = 0;
		while(i < 10){
			cin >> c;
			if(!cin)
				return 0;
			if(c != '-')
				a[i++] = c;
		}
		sum = 0;
		for(i = 0; i < 9; i++){
			sum += (a[i] - '0') * (i + 1);
		}
		if(sum % 11 == a[9] - '0' || sum % 11 == 10 && a[9] == 'X')
			cout << "Right\n";
		else{
			cout << a[0] - '0' << '-' << a[1] - '0'
				 << a[2] - '0' << a[3] - '0' << '-'
				 << a[4] - '0' << a[5] - '0' << a[6] - '0'
				 << a[7] - '0' << a[8] - '0' << '-';
			if(sum % 11 == 10)
				cout << 'X' << endl;
			else
				cout << sum % 11 << endl;
		}
	}
}