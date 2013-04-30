#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	int n,i,j;
	string id,ip;

	while(cin >> n && n){
		map<string,string> idToip;
		map<string,string> ipTomj;
		map<string,string>::iterator it;
		for(i = 0; i < n; i++){
			cin >> id >> ip;
			for(it = idToip.begin(); it != idToip.end(); it++){
				if(ip == it->second){
					ipTomj[ip] = id;
					break;
				}
			}
			if(it == idToip.end())
				idToip[id] = ip;
		}
		for(it = idToip.begin(); it != idToip.end(); it++){
			cout << ipTomj[it->second] << " is the MaJia of " << it->first << endl;
		}
		cout << endl;
	}
	return 0;
}
