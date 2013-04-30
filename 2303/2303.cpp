#include <iostream>

using namespace std;

class Point
{
	int x,y;
public:
    Point() { x = 0; y = 0; }
	~Point()
	{
		cout << "point(" << x << "," << y << ") has been deleted!" << endl;
	}
    Point(int a,int b) { x = a; y = b; }
    int GetX() { return x; }
    int GetY() { return y; }
};

int main()
{
	int a,b;
	while(scanf("%d %d", &a,&b)!=EOF){
		Point p(a,b);
	}
	return 0;
}



