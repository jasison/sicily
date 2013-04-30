#include <stdio.h>

int main()
{
	int a[100000];
	int t,i,max;

	while(1)
	{
		scanf("%d", &t);
		if(t==0)
			break;
		for(i=0; i<t; i++)
			scanf("%d", &a[i]);
		max = a[0];
		for(i=1; i<t; i++)
		{
			if(a[i]>=max)
				max = a[i];
		}
		printf("%d\n", max);
	}
	return 0;
}
