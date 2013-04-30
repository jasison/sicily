#include <iostream>
#include <string>
#include <map>

using namespace std;

void print(int a)
{
	if(a < 0 || a > 100)
		cout << "Score is error!" << endl;
	else if(a < 60)
		cout << "E" << endl;
	else if(a < 70)
		cout << "D" << endl;
	else if(a < 80) 
		cout << "C" << endl;
	else if(a < 90)
		cout << "B" << endl;
	else
		cout << "A" << endl;
}

int main()
{
	int t,n,m,i,s;
	string name;
	map<string,int> stu;
	map<string,int>::iterator iter;
	cin >> t;
	while(t--){
		cin >> n >> m;
		for(i = 0; i < n; i++){
			cin >> name >> s;
			stu[name] = s;
		}
		for(i = 0; i < m; i++){
			cin >> name;
			iter = stu.find(name);
			print(iter->second);
		}
	}
	return 0;
}
