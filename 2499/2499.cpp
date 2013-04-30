#include <iostream>

using namespace std;

int main()
{
	int t,n;

	cin >> t;

	while(t--){
		cin >> n;
		cout << find(n) << endl;
	}
	return 0;
}
