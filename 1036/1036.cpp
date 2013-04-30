#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Node{
	int pos;
	char value;
};

bool cmp(Node a,Node b)
{
	return a.value < b.value;
}

int main()
{
	string key,text;
	int i,j,k;
	char a[100][100];

	while(cin >> key && key != "THEEND"){
		cin >> text;
		vector<Node> node;
		for(i = 0; i < key.size(); i++){
			Node aNode;
			aNode.pos = i;
			aNode.value = key[i];
			node.push_back(aNode);
		}
		stable_sort(node.begin(),node.end(),cmp);

		for(j = k = 0; j < key.size(); j++){
			for(i = 0; i < text.size() / key.size(); i++){
				a[i][node[j].pos] = text[k++];
			}
		}
		for(i = 0; i < text.size() / key.size(); i++){
			for(j = 0; j < key.size(); j++){
				cout << a[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}