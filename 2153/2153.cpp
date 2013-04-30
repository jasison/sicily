#include <iostream>
#include <iomanip>
#include <cmath>

#define PI 3.1415926

using namespace std;

int main()
{
	int i;
	/*cout << "from 0 to 360 with increments of 10 degrees." << endl*/
	cout << setw(12) << right << "Degree"
		 << setw(12) << right << "Sin"
		 << setw(12) << right << "Cos" << endl;
	for(i = 0; i <= 360; i += 10){
		cout << setw(12) << right << i 
			 << setw(12) << right << fixed << setprecision(4) << sin((float)i * PI / 180)
			 << setw(12) << right << fixed << setprecision(4) << cos((float)i * PI / 180) << endl;
	}
	return 0;
}