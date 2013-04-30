#include <stdio.h>

int main()
{
	int m,n,i,j,k,x,y;
	int a[100],b[100];
	
	scanf("%d %d", &m,&n);

	a[0]=b[0]=1;

	for(i=2,j=1; i<=m; i++){
		if(m%i==0){
			a[j] = i;
			j++;
		}
	}

	for(i=2,k=1; i<=n; i++){
		if(n%i==0){
			b[k] = i;
			k++;
		}
	}

	for(x=0; x<j; x++){
		for(y=0; y<k; y++){
			printf("%d %d\n", a[x],b[y]);
		}
	}

	return 0;
}

