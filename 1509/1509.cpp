#include <iostream>
#include <stack>

using namespace std;

const int N = 1001;

int main()
{
	unsigned n,a[N];
	unsigned i;

	while(cin >> n && n){
		while(cin >> a[0] && a[0]){
			for(i = 1; i < n; i++){
				cin >> a[i];
			}
			stack<int> s;
			stack<int> ss;
			for(i = n; i > 0; i--){
				s.push(i);
			}
			for(i = 0; i < n; i++){
				if(!s.empty() && s.top() == a[i]){
					s.pop();
				}else if(!ss.empty() && ss.top() == a[i]){
					ss.pop();
				}else if(!s.empty() && s.top() != a[i]){
					while(!s.empty() && s.top() != a[i]){
						ss.push(s.top());
						s.pop();
					}
					if(!s.empty())
						s.pop();
					else
						break;
				}else{
					break;
				}
			}
			if(i == n){
				cout << "Yes" << endl;
			}else{
				cout << "No" << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
