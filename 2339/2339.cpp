#include <cmath>
#include <string>
#include <iostream>

using namespace std;

class GeometricObject
{
public:
    GeometricObject(string clr) { color = clr; }
    string getColor() const { return color; }
protected:
    string color;
};

class Circle:public GeometricObject
{
public:
    Circle():GeometricObject("red")
	{
		r = 1.0;
	}
    Circle(double r0):GeometricObject("red")
	{
		r = r0;
		color = "red";
	}
    Circle(double r0, string clr):GeometricObject("red")
	{
		r = r0;
		color = clr;
	}
    double getArea()
	{
		return acos(-1)*r*r;
	}
protected:
    double r;
};

int main()
{
	Circle a;
	cout << a.getArea() << endl;
	return 0;
}