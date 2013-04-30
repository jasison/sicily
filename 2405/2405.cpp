#include <iostream>
#include <string>
#include <memory.h>

using namespace std;

int main()
{
	char a[30],b[30];
	int i,ok;

	for(a[0] = 'a',i = 1; i < 26; i++)
		a[i] = a[i-1] + 1;

	memset(b,'0',sizeof(char)*26);

	b[1] = a[3];b[3] = a[1];b[8] = a[8];
	//b[12] = a[12];b[13] = a[13]; 
	b[14] = a[14];
	b[15] = a[16];b[16] = a[15]; //b[20] = a[20];
	b[21] = a[21];b[22] = a[22]; b[23] = a[23];

	string str;

	while(cin >> str && str[0] != '#'){
		ok = 1;
		for(i = 0; i < str.length(); i++){
			if(b[str[i]-'a'] == '0'){
				ok = 0;
				break;
			}
			else{
				str[i] = b[str[i]-'a'];
			}
		}
		if(ok){
			for(i = str.length()-1; i >= 0; i--)
				cout << str[i];
			cout << endl;
		}
		else
			cout << "INVALID\n";
	}
	return 0;
}