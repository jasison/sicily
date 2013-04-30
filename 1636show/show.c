#include <stdio.h>

int main()
{
	int t,sum,n;
	int a,b,i,total;

	scanf("%d", &t);
	while(t--)
	{
		total = 0;
		scanf("%d %d", &sum,&n);
		for(i=0; i<n; i++)
		{
			scanf("%d %d", &a,&b);
			total += a*b;
		}
		if(sum<total)
			printf("Not enough\n");
		else
			printf("%d\n", sum-total);
	}
	return 0;
}

			