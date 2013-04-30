#include <stdio.h>

int main()
{
	int t,n,i,j,sum;
	int a[100];
	scanf("%d",&t);
	for(i=0; i<t; i++)
	{
		scanf("%d", &n);
		for(j=0; j<n; j++)
		   scanf("%d", &a[j]);
		sum = -(n-1);
		for(j=0; j<n; j++)
			sum += a[j];
		printf("%d\n", sum);
	}
	return 0;
}