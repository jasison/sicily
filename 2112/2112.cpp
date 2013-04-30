#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i;
	int c = 0;
	for(i = 100; i <= 1000; i++){
		if(i % 5 == 0 && i % 6 == 0){
			cout << setw(5) << left;
			cout << i;
			c++;
			if(c % 10 == 0)
				cout << endl;
		}
	}
	return 0;
}