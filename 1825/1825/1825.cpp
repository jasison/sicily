#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

struct arr
{
	string s;
	int c;
}a[100000];

bool cmp(arr x,arr y)
{
	return x.s < y.s;
}

int main()
{
	int t,n,i,j,len;
    string str;
	
	cin >> t;

	while(t--){
		cin >> n;
		cin >> str;
		transform(str.begin(),str.end(),str.begin(),tolower);
		a[0].s = str;
		a[0].c = 1;
		len = 1;
		for(i = 1; i < n; i++){
			cin >> str;
			transform(str.begin(),str.end(),str.begin(),tolower);
			for(j = 0; j < len; j++){
				if(str == a[j].s){
					a[j].c++;
					break;
				}
			}
			if(j == len){
				a[j].s = str;
				a[j].c = 1;
				len++;
			}
		}
		std::sort(a,a+len,cmp);
		for(i = 0; i < len; i++){
			cout << a[i].s << " " << a[i].c << endl;
		}
		cout << endl;
	}
	return 0;
}