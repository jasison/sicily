#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double i;
	cout << setw(12) << right << "Number"
		 << setw(12) << right << "SquareRoot" << endl;

	for(i = 0; i <= 20; i += 2){
		cout << setw(12) << right << (int)i
			 << setw(12) << right << fixed << setprecision(4) << sqrt(i) << endl;
	}
	return 0;
}
