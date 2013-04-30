#include <stdio.h>

int chain(int x)
{
	int counter;
	for(counter=0; ; counter++)
	{
		if(x==1)
			return counter+1;
		else if(x%2==0)
		 x = x/2;
	    else
		 x = 3*x + 1;
	}
}

int max(int a[],int t)
{
	int i,m;
	for(i=0; i<t; i++)
	{
		if(a[i]>=a[i+1])
		{
			m = a[i];
		   a[i] = a[i+1];
		   a[i+1] = m;
		}
	}
	return a[i];
}

int main()
{
	int a[10000];
	int i,m,n,t;

    scanf("%d %d", &m,&n);
	t = n - m;
    for(i=0; m<=n; m++,i++)
		a[i] = chain(m);
	printf("%d\n", max(a,t));

	return 0;
}