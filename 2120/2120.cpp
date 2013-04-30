#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int t,i,j;
	cin >> t;
	switch(t){
	case 1:
		for(i = 1; i <= 6; i++){
			for(j = 1; j <= i; j++){
				cout << setw(3) << right << j;
			}
			cout << endl;
		}
		break;
	case 2:
		for(i = 1; i <= 6; i++){
			for(j = 1; j <= 6 - i + 1; j++){
				cout << setw(3) << right << j;
			}
			cout << endl;
		}
		break;
	case 3:
		for(i = 1; i <= 6; i++){
			cout << setw(3 * (6 - i + 1)) << right << '1';
			for(j = 2; j <= i; j++){
				cout << setw(3) << right << j;
			}
			cout << endl;
		}
		break;
	case 4:
		for(i = 1; i <= 6; i++){
			cout << setw(3 * i) << right << '1';
			for(j = 2; j <= 6 - i + 1; j++){
				cout << setw(3) << right << j;
			}
			cout << endl;
		}
		break;
	default:
		break;
	}
	return 0;
}