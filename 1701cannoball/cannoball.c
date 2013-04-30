#include <stdio.h>

int add(int n)
{
	int i,sum=0;
	for(i=1; i<=n; i++)
		sum += i;
	return sum;
}
int main()
{
	int t,sum,n,i,j;
	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		sum = 0;
		scanf("%d", &n);
		for(j=n; j>=1; j--)
			sum += add(j);
		printf("%d: %d %d\n", i,n,sum);
	}
	return 0;
}


