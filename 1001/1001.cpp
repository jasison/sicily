#include <iostream>
#include <string>

using namespace std;

struct Node{
	int v;
	long d;
}a[10000];

int stoint(string str,int begin,int end)
{
	int result = 0;
	if(end - begin == 2)
		result += (str[begin] - '0') * 10 + (str[end-1] - '0');
	else
		result += str[begin] - '0';
	return result;
}

int main()
{
	string str;
	int i,j;

	while(cin >> str && str != "0"){
		for(i = j = 0; i < 2 * (str.size()-1); i+=2,j++){
			a[i].d = 0;
			a[i].v = stoint(str,j,j+1);
			a[i+1].d = 0;
			a[i+1].v = stoint(str,j,j+2);
		}
		
		a[i].v = stoint(str,j,j+1);
		if(a[i].v != 0){
			a[i].d = 1;
			a[i-1].d = 1;
			a[i-3].d = a[i].d;
			a[i-2].d = a[i].d;
		}else{
			a[i].d = 0;
		}
		
		for(i--; i >= 2; i-=2){
			if(a[i].v >= 1 && a[i].v <= 26){
				if(i - 4 >= 0){
					a[i-4].d += a[i].d;
				}
				if(i - 3 >= 0){
					a[i-3].d += a[i].d;
				}
			}else{
				a[i].d = 0;
			}
			if(a[i-1].v >= 1 && a[i-1].v <= 26){
				if(i - 4 >= 0){
					a[i-4].d += a[i-1].d;
				}
				if(i - 3 >= 0){
					a[i-3].d += a[i-1].d;
				}
			}else{
				a[i-1].d = 0;
			}
		}
		if(a[1].v > 26)
			a[1].d = 0;
		cout << a[0].d + a[1].d << endl;
	}
	return 0;
}

