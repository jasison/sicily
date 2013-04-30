#include <iostream>
#include <stack>

using namespace std;

int main()
{
	int n,i,j;
	char c;
	int a[1000];

	while(cin >> n && n){
		stack<char> one;
		while((c = cin.get()) != '\n'){
			one.push(c);
		}
