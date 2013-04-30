#include <iostream>
#include <memory.h>
#include <string>
#include <queue>

using namespace std;

int s;
bool route[50000];
int fac[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320};

struct Node{
	int m[2][4];
	string str;
};

Node target,front,origin;

bool end(int a[2][4])
{
	int i,j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4; j++){
			if(a[i][j] != target.m[i][j])
				return false;
		}
	}
	return true;
}

int cantor(int a[2][4])
{
	int rank,i,j,k = 0;
	int t[8],num = 0;

	for(i = 0; i < 2; i++){
		for(j = 0; j < 4; j++){
			t[k++] = a[i][j];
		}
	}
	for(i = 0; i < 8; i++){
		rank = 0;
		for(j = i + 1; j < 8; j++){
			if(t[i] > t[j]){
				rank++;
			}
		}
		num += rank * fac[7 - i];
	}
	return num;
}

void transform(char flag,Node& next,Node front)
{
	int i,j;
	if(flag == 'A'){
		next.str = front.str + "A";
		for(j = 0; j < 4; j++){
			next.m[0][j] = front.m[1][j];
			next.m[1][j] = front.m[0][j];
		}
	}
	else if(flag == 'B'){
		next.str = front.str + "B";
		for(i = 0; i < 2; i++){
			for(j = 0; j < 3; j++){
				next.m[i][j+1] = front.m[i][j];
			}
			next.m[i][0] = front.m[i][3];
		}
	}
	else{
		next.str = front.str + "C";
		next.m[0][0] = front.m[0][0];
		next.m[0][1] = front.m[1][1];
		next.m[0][2] = front.m[0][1];
		next.m[0][3] = front.m[0][3];
		next.m[1][0] = front.m[1][0];
		next.m[1][1] = front.m[1][2];
		next.m[1][2] = front.m[0][2];
		next.m[1][3] = front.m[1][3];
	}
}
		
void bfs()
{
	if(end(origin.m)){
		cout << "0\n";
		return;
	}
	
	queue<Node> Q;
	Q.push(origin);
	memset(route,0,sizeof(route));
	route[cantor(origin.m)] = 1;

	while(1){
		front = Q.front();
		Q.pop();
		if(front.str.size() >= s){
			cout << "-1\n";
			return;
		}
		for(char temp = 'A'; temp <= 'C'; temp++){
			Node next;
			transform(temp,next,front);
			if(end(next.m)){
				cout << next.str.size() << " " << next.str << endl;
				return;
			}
			else if(!route[cantor(next.m)]){
				route[cantor(next.m)] = 1;
				Q.push(next);
			}
		}
	}
}

int main()
{
	int n,i,j;

	while(cin >> s && s != -1){
		for(i = 0; i < 2; i++){
			for(j = 0; j < 4; j++){
				cin >> n;
				target.m[i][j] = n;
			}
		}
		for(j = 0; j < 4; j++){
			origin.m[0][j] = j + 1;
			origin.m[1][j] = 8 - j;
		}
		bfs();
	}

	return 0;
}