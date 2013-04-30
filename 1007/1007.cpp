#include <iostream>
#include <string>

using namespace std;

char a[1000][1000];

int main()
{
	int n,i,j,k;
	string s;
	string::iterator iter;

	while(cin >> n && n){
		cin >> s;
		iter = s.begin();
		for(i = 1;iter != s.end() ;){
			if(i % 2){
				for(j = 1; j <= n; j++){
					a[i-1][j-1] = *iter;
					iter++;
				}
				i++;
			}
			else{
				for(j = n; j >= 1; j--){
					a[i-1][j-1] = *iter;
					iter++;
				}
				i++;
			}
		}
		for(j = 0; j < n; j++){
			for(k = 0; k < i - 1; k++){
				cout << a[k][j];
			}
		}
		cout << endl;
	}
	return 0;
}
