#include <stdio.h>
#include <stdlib.h>

int comp(const void *p1,const *p2)
{
	return *((int*)p1)-*((int*)p2);
}
int main()
{
	int i,j,k,n;
	int a[1000];
	while(scanf("%d", &n)!=EOF)
	{
		for(i=0; i<n; i++)
		  scanf("%d", &a[i]);
		for(i=0; i<n; i++)
		{
			for(j=i+1; j<n; j++)
			{
				if(a[i]==a[j])
				{
					n--;
					k = j;
					for(;k<n;k++)
					  a[k] = a[k+1];
					j--;
				}
			}
		}
		printf("%d\n", n);
		qsort(a,n,sizeof(int),comp);
		printf("%d", a[0]);
		for(i=1; i<n; i++)
			printf(" %d", a[i]);
		printf("\n");
	}
	return 0;
}