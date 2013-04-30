#include <iostream>
#include <vector>

using namespace std;

struct Node{
	int visited;
	int end;
};

bool dfs(vector<Node>* graph,int start,int end)
{
	int i;
	for(i = 0; i < graph[start].size(); i++){
		if(graph[start][i].end == end)
			return true;
		if(!graph[start][i].visited){
			graph[start][i].visited = 1;
			if(dfs(graph,graph[start][i].end,end))
				return true;
			graph[start][i].visited = 0;
		}
	}
	return false;
}

int main()
{
	int vn,en,v1,v2;
	int i;

	while(cin >> vn && vn){
		cin >> en;
		vector<Node> start[10000];
		
		for(i = 0; i < en; i++){
			cin >> v1 >> v2;
			Node temp;
			temp.visited = 0;
			temp.end = v1;
			start[v2].push_back(temp);
		}
		if(dfs(start,vn-1,0)){
			cout << "I can post the letter" << endl;
		}else{
			cout << "I can't post the letter" << endl;
		}
	}
	return 0;
}