#include <iostream>
#include <iomanip>

using namespace std;

double m(int n)
{
	int i;
	double s = 0.0;
	for(i = 1; i <= n; i++){
		s += (double)i / (i + 1);
	}
	return s;
}
void display()
{
	cout << setw(12) << right << "i"
		 << setw(12) << right << "m(i)" << endl;
	for(int i = 1; i <= 10; i++){
		cout << setw(12) << right << i
			 << setw(12) << right << fixed << setprecision(4) << m(i) << endl;
	}
}

int main()
{
	display();
	//display();
}