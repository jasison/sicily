#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<int> sort(const vector<int>& aa)
{
	vector<int>::iterator iter;
	set<int>::iterator i2;
	vector<int> b;
	set<int> c;
	c.insert(aa.begin(),aa.end());
	b.assign(c.begin(),c.end());
	return b;
}
	
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(3);
	v = sort(v);
	for(int i = 0; i < 3; i++){
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}