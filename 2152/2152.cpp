#include <iostream>

using namespace std;

bool isValid(double side1, double side2, double side3) 
{
	if(side1 + side2 > side3 || side1 + side3 > side2 || side2 + side3 > side1)
		return true;
	else
		return false;
}

double area(double side1, double side2, double side3)
{
	int s;
	s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s-side1) * (s-side2) * (s-side3));
}

int main()
{

