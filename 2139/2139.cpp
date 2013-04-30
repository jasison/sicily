#include <iostream>
#include <cmath>

using namespace std;

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
{
	return investmentAmount * pow((1 + monthlyInterestRate),(years * 12));
}

int main()
{
//	double a,b;
//	int c;
//	cin >> a >> b >> c;
	cout << futureInvestmentValue(10000,0.05/12,5);

	return 0;
}