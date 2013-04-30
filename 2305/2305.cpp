#include <iostream>

using namespace std;

int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};

class Birthday
{
public:
	int daysFromNextBirthday(int year, int month, int day);
private:
//	int y,m,d;
	bool isRun(int);
};

int Birthday::daysFromNextBirthday(int year,int month,int day)
{
	int sum=0;
	int s = 0;
	int yy=365;
	if(isRun(year)){
		a[1] = 29;
		yy = 366;
	}
	for(int i=1;i<month;i++){
		sum += a[i-1];
	}
	sum += day;
	s = a[0]+a[1]+8;
	if(month<=3 && day<8)
		return s-sum;
	else{
		if(isRun(year+1))
			a[1] = 29;
		s = a[0] + a[1] + 8;
		return yy-sum+s;
	}
}

bool Birthday::isRun(int y)
{
	if(y%4==0&&y%100!=0 || y%400==0)
		return true;
	else
		return false;
}

int main()
{
	int y,m,d;
	cin >> y >> m >> d;
	Birthday b;
	cout << b.daysFromNextBirthday(y,m,d) << endl;

	return 0;
}


