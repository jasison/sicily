#include <iostream>

using namespace std;

int main()
{
	int n;
	while(cin >> n && n){
		if(n % 2 == 0)
			cout << "Alice\n";
		else
			cout << "Bob\n";
	}
	return 0;
}