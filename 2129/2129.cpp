#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int i,c = 0;
	for(i = 2004; i <= 2100; i += 4){
		if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
			cout << setw(6) << left << i;
			c++;
			if(c % 8 == 0)
				cout << endl;
		}
	}
	return 0;
}