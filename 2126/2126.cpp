#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double s = 0.0;
	int i,j;
	for(i = 1, j = 3 ; i <= 97; i += 2, j += 2){
		s += (double)i / j;
	}
	cout << fixed << setprecision(4) << s << endl;
	return 0;
}