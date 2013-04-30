#include <iostream>
#include <memory.h>

using namespace std;

struct node
{
	int x,y;
};

int main()
{
	int num,n,i,j;
	int* p;
	node no;
	
	cin >> num >> n;
	p = new int [++num];
	memset(p,1,sizeof(int) * num);

	for(i = 0; i < n; i++){
		cin >> no.x >> no.y;
		for(j = no.x; j <= no.y; j++){
			if(p[j]){
				p[j] = 0;
				num--;
			}
		}
	}
	cout << num << endl;
	return 0;
}
