/*
 *Date:2012-2-1
 *Author:Monkey
 *Copyright (c) 2012 http://www.itlodge.net All rights reserved.
 */

#include <iostream>
#include <string>

using namespace std;

//�Լ�д�ıȽϺ���
bool cmp(string s1,string s2)
{
	int i,j;
	for(i = j = 0; i < s1.size() && j < s2.size(); i++,j++){
		if(s1[i] > s2[j])
			return false;
		else if(s1[i] < s2[j])
			return true;
	}
	if(i == s1.size() && j == s2.size())
		return false;
	else if(i == s1.size() || j == s2.size()){       //�������ǰ����ȣ�����һ�����Ƚϳ����������������ĸ�С
		if(s1+s2 < s2+s1)
			return true;
		else
			return false;
	}
}

int main()
{
	int t,n,i,j,k;
	string s[100];

	cin >> t;
	
	while(t--){
		cin >> n; 
		for(i = 0; i < n; i++){
			cin >> s[i];
		}
		for(i = 0; i < n - 1; i++){        //ѡ������
			k = i;
			for(j = i + 1; j < n; j++){
				if(cmp(s[j],s[k]))
					k = j;
			}
			if(k != i){
				string temp = s[i];
				s[i] = s[k];
				s[k] = temp;
			}
		}
		for(i = 0; i < n; i++){
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
