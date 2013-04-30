#include <stdio.h>
#include <string.h>
#define MAX 1000

int a[MAX][MAX];

int main()
{
	int t,i,j,n,m;
	int tot=0,flag;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &n,&m);
		memset(a,0,sizeof(a));
		flag = 1;
		tot = a[i=0][j=n-1] = 1;
		if(tot==n*n-m+1){
			flag=0;
			printf("%d %d\n", i+1,j+1);
		}
		while(tot<n*n){
			if(flag==0)
				break;
			while(j-1>=0 && !a[i][j-1] &&flag){
				a[i][--j] = ++tot;
				if(tot==n*n-m+1){
					flag=0;
					printf("%d %d\n", i+1,j+1);
					break;
				}
			}
			while(i+1<n && !a[i+1][j] &&flag){
				a[++i][j] = ++tot;
				if(tot==n*n-m+1){
					flag=0;
					printf("%d %d\n", i+1,j+1);
					break;
				}
			}
			while(j+1<n && !a[i][j+1]&&flag){
				a[i][++j] = ++tot;
				if(tot==n*n-m+1){
				flag=0;
				printf("%d %d\n", i+1,j+1);
				break;
				}
			}
			while(i-1>=0 && !a[i-1][j]&&flag){
				a[--i][j] = ++tot;
				if(tot==n*n-m+1){
				flag=0;
				printf("%d %d\n", i+1,j+1);
				break;
				}
			}
		}
	}
	return 0;
}