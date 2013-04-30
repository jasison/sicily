#include <stdio.h>

int main()
{
	int a[10000],b[10000];
	int i,j,sum;
	for(i=0; ;i++)
	{
		scanf("%d %d", &a[i],&b[i]);
        if(a[i]==-1 && b[i]==-1)
		  break;
	}
	for(i=0; ; i++)
	{
		sum = 1;
		if(a[i]!=0 && b[i]!=0)
		{
			if(a[i]>=b[i])
			{
		     for(j=1; j<=b[i]; j++)
			   sum *= (a[i]+1);
			}
			else
			{
				for(j=1; j<=a[i]; j++)
					sum *= (b[i]+1);
			}
		}
		if(a[i]==-1 && b[i]==-1)
		    break;
	    else if(a[i]+b[i]==sum)
		 printf("%d+%d=%d\n", a[i],b[i],a[i]+b[i]);
	    else
		 printf("%d+%d!=%d\n", a[i],b[i],a[i]+b[i]);
	}
		
	return 0;
}

