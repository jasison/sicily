#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char a = '!';
	char b = '~';
	char i;
	int c = 0;
	for(i = a; i <= b; i++){
		cout << setw(2) << right << i;
		c++;
		if(c % 10 == 0)
			cout << endl;
	}
	return 0;
}