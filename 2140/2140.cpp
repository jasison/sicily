#include <iostream>
#include <iomanip>

using namespace std;

double celsiusToFahrenheit(double celsius)
{
	return  (9.0 / 5) * celsius + 32;
}

double fahrenheitToCelsius(double fahrenheit)
{
	return (fahrenheit - 32) * 5 / 9.0;
}

void display()
{
	double i,j;
	cout << setw(12) << right << "Celsius" 
		 << setw(12) << right << "Fahrenheit" 
		 << setw(12) << right << "Fahrenheit" 
		 << setw(12) << right << "Celsius" << endl;
	for(i = 40.0,j = 120.0; i >= 31; i--,j -= 10){
		cout << setw(12) << right << fixed << setprecision(2) << i 
			 << setw(12) << right << fixed << setprecision(2) << celsiusToFahrenheit(i) 
			 << setw(12) << right << fixed << setprecision(2) << j 
			 << setw(12) << right << fixed << setprecision(2) << fahrenheitToCelsius(j) << endl;
	}
}

int main()
{
	display();
}