#include <iostream>
#include <stack>

using namespace std;

struct node{
	int v;
	int f;
}m[5][6];

typedef struct{
	int x,y,d,v;
}T;

int main()
{
	T e;
	int a[30];
	int n,i,j,k,g,h,b;
	int d[8][2] = { -2,-1, -1,-2, 1,-2, 2,-1, 
					2,1, 1,2, -1,2, -2,1 };

	for(i = 0; i < 5; i++){
		for(j = 0; j < 6; j++){
			m[i][j].v = 6 * i + j + 1;
			m[i][j].f = 0;
		}
	}
	while(cin >> n && n != -1){
		stack<T> s;
		for(i = 0; i < 5; i++){
			for(j = 0; j < 6; j++){
				m[i][j].f = 0;
			}
		}
		e.x = i = n / 6;
		e.y = j = n % 6 - 1;
		e.v = m[i][j].v;
		m[i][j].f = 1;
		e.d = -1;
		k = e.d + 1;
		s.push(e);
		while(!s.empty()){
			i = s.top().x;
			j = s.top().y;
			k = s.top().d + 1;
			m[i][j].f = 0;
			s.pop();
			while(k < 8){
				g = i + d[k][0];
				h = j + d[k][1];
				if(g >= 0 && g <= 4 && h >= 0 && h <= 5 && !m[g][h].f){
					e.x = i; 
					e.y = j; 
					e.d = k;
					e.v = m[i][j].v;
					m[i][j].f = 1;
					s.push(e);
					i = g;
					j = h;
					k = -1;
				}
				else if(s.size() == 29){
					e.x = i;
					e.y = j;
					e.v = m[i][j].v;
					s.push(e);
					for(b = 0; !s.empty(); b++){
						a[b] = s.top().v;
						s.pop();
					}
					for(b--; b >= 1; b--){
						cout << a[b] << " ";
					}
					cout << a[0] << endl;
					k = 8;
				}
				k++;
			}
			if(k == 9)
				break;
		}
	}
	return 0;
}

