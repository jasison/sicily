#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[1000];
	int cy,cn,ca,cp;

	while(cin >> str && str[0] != '#'){
		cy = cn = ca = cp = 0;
		for(int i = 0; i < strlen(str); i++){
			if(str[i] == 'Y'){
				cp++;
				cy++;
			}
			else if(str[i] == 'N'){
				cp++;
				cn++;
			}
			else if(str[i] == 'P'){
				cp++;
			}
			else
				ca++;
		}
		if(ca >= cp){
			cout << "need quorum\n";
			continue;
		}
		else if(cy == cn){
			cout << "tie\n";
			continue;
		}
		else if(cy > cn){
			cout << "yes\n";
			continue;
		}
		else
			cout << "no\n";
	}

	return 0;
}