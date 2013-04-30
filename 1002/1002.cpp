#include <iostream>
#include <stack>

using namespace std;

bool aprime(int n)
{
	int i;

	if(n % 2 == 0)
		return true;
	for(i = 3; i * i <= n; i++){
		if(n % i == 0)
			return true;
		return false;
	}
	return false;
}

int main()
{
	int a[1000];
	int b[10];
	stack<int> s,use;
	int n,m,d,i,j;

	while(cin >> n >> m >> d && n){
		for(i = m; i >= n; i--){
			use.push(i);
		}
		s.push(use.top());
		use.pop();
		
		while(!s.empty()){
			s.pop();
			use.push(n);

