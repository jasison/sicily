#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int a,b;
	int ans;
	cin >> a >> b;
	//srand(5);
	ans = rand() % (b - a) + a;

	cout << ans << endl;

	return 0;
}