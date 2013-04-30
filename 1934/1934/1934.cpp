#include <iostream>
#include <list>

using namespace std;

struct Node{
	int ln;
	int rn;
};

int main()
{
	int t,n,m,type,b1,b2;
	int i,j;

	cin >> t;

	while(t--){
		cin >> n >> m;
		Node* ball = new Node[n+1];
		
		ball[0].rn = 1;
		for(i = 1; i <= n; i++){
			ball[i].ln = i - 1;
			ball[i].rn = i + 1;
		}

		for(i = 0; i < m; i++){
			cin >> type >> b1 >> b2;
			
			ball[ball[b1].ln].rn = ball[b1].rn;
			ball[ball[b1].rn].ln = ball[b1].ln;
			
			if(type == 1){
				ball[ball[b2].ln].rn = b1;
				ball[b1].rn = b2;
				ball[b1].ln = ball[b2].ln;
				ball[b2].ln = b1;
			}else{
				ball[ball[b2].rn].ln = b1;
				ball[b1].rn = ball[b2].rn;
				ball[b1].ln = b2;
				ball[b2].rn = b1;
			}
		}
		for(j = i = 0; i < n; i++){
			j = ball[j].rn;
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
