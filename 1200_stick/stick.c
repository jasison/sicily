#include <stdio.h>

int main()
{
	int a[10000];
	int i,j,t,k,temp;

	while(1)
	{
		scanf("%d", &t);
		if(t==0)
			break;
		for(i=0; i<t; i++)
			scanf("%d", &a[i]);
		for(i=0; ; i++)
		{
			k = i;
			for(j=k+1; j<t; j++)
			{
				if(a[k]==a[j])
				{
					temp = a[k+1];
					a[k+1] = a[j];
					a[j] = temp;
					k++;
					break;
				}
			}
			if(i==k)
			{
				printf("%d\n", a[k]);
				break;
			}
			else
				i = k;
		}
	}
	return 0;
}


			
