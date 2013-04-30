#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct TreeNode{
	char value;
	TreeNode* lch;
	TreeNode* rch;
};

int main()
{
	TreeNode* createTree(string,string);
	void bfs(TreeNode*);
	int t;
	string pre,in;

	cin >> t;

	while(t--){
		cin >> pre >> in;
		TreeNode* root = createTree(pre,in);
		bfs(root);
	}
	return 0;
}

TreeNode* createTree(string pre,string in)
{
	TreeNode* root = new TreeNode();
	char rootValue = pre[0];
	root->value = rootValue;
	pre.erase(0,1);
	if(pre == ""){
		root->lch = NULL;
		root->rch = NULL;
		return root;
	}
	string preLch,preRch,inLch,inRch;
	int pos = in.find(rootValue);
	inLch = in.substr(0,pos);
	inRch = in.substr(pos+1,in.size());
	if(inLch == ""){
		root->lch = NULL;
	}else{
		preLch = pre.substr(0,pos);
		root->lch = createTree(preLch,inLch);
	}
	if(inRch == ""){
		root->rch = NULL;
	}else{
		preRch = pre.substr(pos,pre.size());
		root->rch = createTree(preRch,inRch);
	}
	return root;
}

void bfs(TreeNode* root)
{
	queue<TreeNode*> q;
	TreeNode* front;

	q.push(root);
	while(!q.empty()){
		front = q.front();
		q.pop();
		cout << front->value;
		if(front->lch != NULL){
			q.push(front->lch);
		}
		if(front->rch != NULL){
			q.push(front->rch);
		}
	}
	cout << endl;
}