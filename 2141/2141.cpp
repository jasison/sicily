#include <iostream>
#include <iomanip>

using namespace std;

double footToMeter(double foot)
{
	return  0.305 * foot;
}

double meterToFoot(double meter)
{
	return meter / 0.305;
}

void display()
{
	double i,j;
	cout << setw(12) << right << "Feet" 
		 << setw(12) << right << "Meters" 
		 << setw(12) << right << "Meters" 
		 << setw(12) << right << "Feet" << endl;
	for(i = 1.0,j = 20.0; i <= 10; i++,j += 5){
		cout << setw(12) << right << fixed << setprecision(3) << i 
			 << setw(12) << right << fixed << setprecision(3) << footToMeter(i) 
			 << setw(12) << right << fixed << setprecision(3) << j 
			 << setw(12) << right << fixed << setprecision(3) << meterToFoot(j) << endl;
	}
}

int main()
{
	display();
}