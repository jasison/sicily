#include <iostream>

using namespace std;

const int N = 1000;

int m[N][N];

int main()
{
	int vn,en,start,end;
	int i,j,max;

	while(cin >> vn >> en && (vn || en)){
		max = 0;
		if(en == 0){
			cout << 0 << endl;
		}else{
			for(i = 0; i < vn; i++){
				for(j = 0; j < vn; j++){
					m[i][j] = 0;
				}
			}
			for(i = 0; i < en; i++){
				cin >> start >> end;
				m[start-1][end-1] = 1;
				m[end-1][start-1] = 1;
			}
			for(i = 0; i < vn; i++){
				int temp = 0;
				for(j = 0; j < vn; j++){
					if(m[i][j])
						temp++;
				}
				if(temp > max)
					max = temp;
			}
			cout << max << endl;
		}
	}
	return 0;
}
