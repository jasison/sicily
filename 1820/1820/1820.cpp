#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int N = 10000;
const int INF = 0x7fffff;

struct Node{
	int next;
	int len;
};

int dist[N];

int sp(vector<Node*>* adj,int start,int end,int n)
{
	int i;
	queue<int> q;

	for(i = 0; i < n; i++)
		dist[i] = INF;
	dist[start] = 0;
	q.push(start);
	while(!q.empty()){
		int node = q.front();
		q.pop();
		vector<Node*> p = adj[node];
		for(i = 0; i < p.size(); i++){
			if(dist[node] + p[i]->len < dist[p[i]->next]){
				dist[p[i]->next] = dist[node] + p[i]->len;
				q.push(p[i]->next);
			}
		}
	}
	return dist[end];
}

int main()
{
	int t,vn,qn,s,e,len;
	int i;

	cin >> t;

	while(t--){
		cin >> vn >> qn;
		vector<Node*> adj[N];

		for(i = 0; i < vn - 1; i++){
			cin >> s >> e >> len;
			Node* edge1 = new Node;
			edge1->next = e - 1;
			edge1->len = len;
			adj[s-1].push_back(edge1);
			Node* edge2 = new Node;
			edge2->next = s - 1;
			edge2->len = len;
			adj[e-1].push_back(edge2);
		}
		for(i = 0; i < qn; i++){
			cin >> s >> e;
			cout << sp(adj,s-1,e-1,vn) << endl;
		}
		cout << endl;
	}
	return 0;
}
