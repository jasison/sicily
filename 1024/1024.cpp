#include <iostream>
#include <vector>

using namespace std;

const int N = 10000;

bool visited[N];
int maxn,sum;

struct Node{
	int end;
	int len;
};

int main()
{
	void dfs(vector<Node>*,int);
	int vn,head,end,len,cap;
	int i,j;

	while(cin >> vn >> cap){
		vector<Node> graph[N];
		maxn = sum = 0;
		for(i = 0; i < vn; i++){
			visited[i] = false;
		}
		for(i = 0; i < vn - 1; i++){
			cin >> head >> end >> len;
			Node hNode,eNode;
			hNode.end = end - 1;
			hNode.len = len;
			eNode.end = head - 1;
			eNode.len = len;
			graph[head-1].push_back(hNode);
			graph[end-1].push_back(eNode);
		}
		visited[cap-1] = true;
		dfs(graph,cap-1);
		cout << maxn << endl;
	}
	return 0;
}

void dfs(vector<Node>* graph,int start)
{
	for(int i = 0; i < graph[start].size(); i++){
		if(!visited[graph[start][i].end]){
			visited[graph[start][i].end] = true;
			sum += graph[start][i].len;
			maxn = sum > maxn ? sum : maxn;
			dfs(graph,graph[start][i].end);
			sum -= graph[start][i].len;
			visited[graph[start][i].end] = false;
		}
	}
}