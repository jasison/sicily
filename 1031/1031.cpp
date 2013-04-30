#include <iostream>
#include <string>
#include <map>

using namespace std;

const int INF = 9999999;
const int N = 1000;

int m[N][N];

int main()
{
	void floyd(int,int,int);
	int t,en,v1,v2,len;
	string str1,str2;
	int i,j,k;

	cin >> t;

	while(t--){
		cin >> en;
		k = 0;
		map<string,int> aMap;
		for(i = 0; i < N; i++){
			for(j = 0; j < N; j++){
				if(i == j)
					m[i][j] = 0;
				else
					m[i][j] = INF;
			}
		}
		for(i = 0; i < en; i++){
			cin >> str1 >> str2 >> len;
			if(aMap.find(str1) == aMap.end()){
				aMap[str1] = k++;
			}
			if(aMap.find(str2) == aMap.end()){
				aMap[str2] = k++;
			}
			v1 = aMap[str1];
			v2 = aMap[str2];
			if(len < m[v1][v2]){
				m[v1][v2] = len;
				m[v2][v1] = len;
			}
		}
		cin >> str1 >> str2;
		if(str1 == str2)
			cout << "0" << endl;
		else if(aMap.find(str1) == aMap.end() || aMap.find(str2) == aMap.end())
			cout << "-1" << endl;
		else{
			floyd(aMap[str1],aMap[str2],aMap.size());
			if(m[aMap[str1]][aMap[str2]] != INF)
				cout << m[aMap[str1]][aMap[str2]] << endl;
			else
				cout << "-1" << endl;
		}
		
	}

	return 0;
}

void floyd(int start,int end,int num)
{
	int i,j,k;

	for(k = 0; k < num; k++){
		for(j = 0; j < num; j++){
			for(i = 0; i < num; i++){
				if(m[i][k] + m[k][j] < m[i][j]){
					m[i][j] = m[i][k] + m[k][j];
				}
			}
		}
	}
}