#include <iostream>

using namespace std;

int main()
{
	int i = 1;
	int m;
	cin >> m;
	while(i * i * i < m)
		i++;
	cout << i-1 << endl;
	return 0;
}