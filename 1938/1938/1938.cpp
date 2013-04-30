#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int main()
{
	int t,i,n,m;

	cin >> t;
	while(t--){
		while(cin >> n){
			cin >> m;
			map<string,int> a;
			map<string,int> b;
			string str;
			map<string,int>::iterator iter;
			for(i = 0; i < n; i++){
				cin >> str;
				transform(str.begin(),str.end(),str.begin(),tolower);
				a[str] = 1;
			}
			for(i = 0; i < m; i++){
				cin >> str;
				transform(str.begin(),str.end(),str.begin(),tolower);
				b[str] = 1;
			}
			for(iter = b.begin(); iter != b.end(); iter++){
				if(a.find(iter->first) != a.end())
					n--;
			}
			cout << n << endl;
		}
	}
	return 0;
}

