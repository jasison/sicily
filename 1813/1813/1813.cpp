#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int toDec(string str,int base)
{
	int dec = 0;
	int j = 0;
	for(int i = str.size() - 1; i >= 0; i--){
		if(str[i] >= '0' && str[i] <= '9'){
			dec += (int)pow(double(base),j++) * (str[i] - '0');
		}else if(str[i] >= 'A' && str[i] <= 'Z'){
			dec += (int)pow(double(base),j++) * (str[i]-'A'+10);
		}
	}
	return dec;
}

string toM(int dec,int base)
{
	string str = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string m = "";
	do{
		int rem = dec % base;
		m.insert(0,1,str[rem]);
		dec /= base;
	}while(dec);
	return m;
}

int main()
{
	int t,base;
	string str1,str2;
	int dec1,dec2,p,q;

	cin >> t;
	while(t--){
		cin >> base >> str1 >> str2;
		dec1 = toDec(str1,base);
		dec2 = toDec(str2,base);
		p = dec1 / dec2;
		q = dec1 % dec2;
		cout << toM(p,base) << endl
			 << toM(q,base) << endl;
	}
	return 0;
}