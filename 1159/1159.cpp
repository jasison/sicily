#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
	int t,i;
	string str;

	while(cin >> t){
		vector<int> ans;
		ans.push_back(0);
		while(t--){
			cin >> str;
			vector<int> v;
			for(i = str.size() - 1; i >= 0; i--){
				v.push_back(str[i] - '0');
			}
			if(v.size() > ans.size()){
				for(i = 0; i < ans.size(); i++){
					v[i] += ans[i];
					if(i == v.size() - 1 && v[i] > 9){
						v[i] %= 10;
						v.push_back(v[i] / 10 + 1);
					}
					if(v[i] > 9){
						v[i] %= 10;
						v[i + 1] += v[i] / 10 + 1;
					}
				}
				ans = v;
			}
			else{
				for(i = 0; i < v.size(); i++){
					ans[i] += v[i];
					if((i == ans.size() - 1) && ans[i] > 9){
						ans[i] %= 10;
						ans.push_back(ans[i] / 10 + 1);
					}
					if(ans[i] > 9){
						ans[i] %= 10;
						ans[i + 1] += ans[i] / 10 + 1;
					}
				}
			}
		}
		for(i = ans.size() - 1; i >= 0; i--){
			cout << ans[i];
		}
		cout << endl;
	}
	return 0;
}