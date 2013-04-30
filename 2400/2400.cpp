#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
	
int main()
{
	int t,n,m,i,e;

	cin >> t;

	while(t--){
		vector<int> vm,vn;
		vector<int>::iterator i1,i2;
		cin >> m >> n;
		for(i = 0; i < m; i++){
			cin >> e;
			vm.push_back(e);
		}
		for(i = 0; i < n; i++){
			cin >> e;
			vn.push_back(e);
		}
		if(vm.size() <= vn.size()){
			int f = 0;
			for(i1 = vm.begin(); i1 != vm.end(); i1++){
				i2 = vn.begin();
				if(binary_search(i2,vn.end(),*i1)){
					f++;
					if(f == 1)
						cout << *i1;
					else
						cout << " " << *i1;
					i2 = vn.erase(i2);
				}
			}
			cout << endl;
		}
		else{
			int f = 0;
			for(i1 = vn.begin(); i1 != vn.end(); i1++){
				i2 = vm.begin();
				if(binary_search(i2,vm.end(),*i1)){
					f++;
					if(f == 1)
						cout << *i1;
					else
						cout << " " << *i1;
					i2 = vm.erase(i2);
				}
			}
			cout << endl;
		}
	}
	return 0;
}