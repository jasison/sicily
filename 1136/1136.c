#include <stdio.h>

int main()
{
	int n,m,x,y,s,i,j,max,t;
	int a[1000],b[100][100];

	scanf("%d %d", &n,&m);

	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	for(i=1; i<=n; i++){
		b[i][i] = a[i];
		for(j=i+1; j<=n; j++){
			b[i][j] = b[i][j-1] + a[j];
		}
	}

	while(m--){
		scanf("%d %d", &x,&y);
		max = b[x][y];
		s = x;
		t = y;
		for(i=x; i<=y; i++){
			for(j=i; j<=y; j++){
				if(b[i][j]>max){
					max = b[i][j];
					s = i;
					t = j;
				}
			}
		}
		printf("%d %d %d\n", s,t,max);
	}
	return 0;
}