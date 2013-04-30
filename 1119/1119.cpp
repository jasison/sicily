#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int y;
	double i,s,p;
	
	while(cin >> y && y){
		s = 1.0;
		p = (y - 1960) / 10;
		for(i = 3; ; i++){
			s += log((double)i) / log(2.0);
			if(p + 2 < log(s) / log(2.0))
				break;
		}
		cout << i - 1 << endl;
	}
	return 0;
}