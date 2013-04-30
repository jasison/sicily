#include <iostream>

using namespace std;

const int INF = 0x7fffff;
const int N = 1000;

int m[N][N];
int dist[N];
bool visited[N];

int main()
{
	int prim(int);
	int t,vn;
	int i,j;

	cin >> t;

	while(t--){
		cin >> vn;
		for(i = 0; i < vn; i++){
			for(j = 0; j < vn; j++){
				cin >> m[i][j];
			}
		}
		if(t != 0)
			cout << prim(vn) << endl << endl;
		else
			cout << prim(vn) << endl;
	}
	return 0;
}

int prim(int n)
{
	int i,j;
	int max = 0;

	dist[0] = 0;
	visited[0] = true;
	for(i = 1; i < n; i++){
		dist[i] = m[0][i];
		visited[i] = false;
	}
	for(i = 1; i < n; i++){
		int min = INF;
		int pos = 0;
		for(j = 1; j < n; j++){
			if(!visited[j] && dist[j] < min){
				min = dist[j];
				pos = j;
			}
		}
		if(min > max){
			max = min;
		}
		visited[pos] = true;
		for(j = 1; j < n; j++){
			if(!visited[j] && m[j][pos] < dist[j]){
				dist[j] = m[j][pos];
			}
		}
	}
	return max;
}