#include <iostream>

using namespace std;

const int N = 10000;

struct Node{
	char value;
	int lch;
	int rch;
}node[N];

void preOrder(int i)
{
	cout << node[i].value;
	if(node[i].lch){
		preOrder(node[i].lch);
	}
	if(node[i].rch){
		preOrder(node[i].rch);
	}
}

int main()
{
	int n,id,lch,rch;
	int i,j,first,a[N];
	char value;

	while(cin >> n){
		for(i = 0; i < N; i++){
			node[i].value = ' ';
			node[i].rch = 0;
			node[i].lch = 0;
		}
		for(i = 0; i < n; i++){
			cin >> id >> value >> lch >> rch;
			a[i] = id;
			node[id].value = value;
			node[id].lch = lch;
			node[id].rch = rch;
		}
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				if(a[i] == node[a[j]].lch || a[i] == node[a[j]].rch)
					break;
			}
			if(j == n){
				first = a[i];
				break;
			}
		}
		preOrder(first);
		cout << endl;
	}
	return 0;
}