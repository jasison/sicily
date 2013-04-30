#include <stdio.h>
#include <stdlib.h>

#define N 100001

int cmp(const void* a,const void* b)
{
	return *(int*)a - *(int*)b;
}

int main()
{
	long long a[N];
	int i,n,m;

	while(scanf("%d %d",&n,&m) && !(n == 0 && m == 0)){
		for(i = 0; i < n; i++){
			scanf("%lld",&a[i]);
		}
		qsort(a,n,sizeof(a[0]),cmp);
		printf("%lld",a[0]);
		for(i = m; i < n; i+=m){
			printf(" %lld",a[i]);
		}
		printf("\n");
	}
	return 0;
}

