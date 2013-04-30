#include <iostream>

using namespace std;

class Time
{
private:
	int y,m,d,h,mi,s;
public:
	Time();
	void set(long);
	void increment();
	int daysInMonth(int,int);
	void print();
};

Time::Time()
{
	y = 1970;
	m = 1;
	d = 1;
	h = 0;
	mi = 0;
	s = 0;
}

void Time::set(long n)
{
	s = n % 60;
	n /= 60;
	mi = n % 60;
	n /= 60;
	h = n % 24;
	n /= 24;
	for(long i = 1; i <= n; i++){
		increment();
	}
}

void Time::increment()
{
	d++;
	if(d > daysInMonth(m,y)){
		d = 1;
		m++;
	}
	if(m > 12){
		m = 1;
		y++;
	}
}

int Time::daysInMonth(int m,int y)
{
	switch(m){
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		return 31;
		break;
	case 4:case 6:case 9:case 11:
		return 30;
		break;
	case 2:
		if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			return 29;
		else
			return 28;
	default:
		break;
	}
}

void Time::print()
{
	cout << y << "-" << m << "-" << d << endl
		 << h << ":" << mi << ":" << s << endl;
}

int main()
{
	int t;
	long n;
	cin >> t;
	while(t--){
		cin >> n;
		Time ans;
		ans.set(n);
		ans.print();
	}
	return 0;
}