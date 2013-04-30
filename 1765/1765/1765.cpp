#include <iostream>
#include <cstring>
#include <memory.h>

using namespace std;

bool prime(int n)
{
	if(n < 2)
		return false;
	else if(n == 2)
		return true;
	else{
		for(int i = 2; i * i <= n; i++){
			if(n % i == 0)
				return false;
		}
		return true;
	}
}

int main()
{
	char str[1000];
	int c[26];
	int i,max,min;

	while(cin >> str){
		memset(c,0,sizeof(int)*26);
		for(i = 0; i < strlen(str); i++){
			c[str[i] - 'a']++;
		}
		max = min = c[0];
		for(i = 1; i < 26; i++){
			if(c[i] > max)
				max = c[i];
			if(min == 0 && c[i] != 0 || c[i] < min && c[i] != 0)
				min = c[i];
		}
		if(prime(max - min))
			cout << "Lucky Word\n" << max - min << endl;
		else
			cout << "No Answer\n0\n";
	}

	return 0;
}