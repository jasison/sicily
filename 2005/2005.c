#include <stdio.h>
#include <stdlib.h>

int comp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	int n,i,a[1000],c,j;

	while(scanf("%d", &n)!=EOF){
		for(i=0; i<n; i++){
			scanf("%d", &a[i]);
		}
		qsort(a,n,sizeof(int),comp);
		for(i=0; i<n; i++){
			c = 1;
			for(j=i+1; j<n; j++){
				if(a[i]==a[j])
					c++;
			}
			if(c%2==1){
				printf("%d\n", a[i]);
				break;
			}
			i += c-1;
		}
	}
	return 0;
}
