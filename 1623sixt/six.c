#include <stdio.h>

int main()
{
	int t,i;
	int m,n,r,x,y;

	scanf("%d", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%d %d", &m,&n);
		x = m;
		y = n;
		if(n>m)
		{
			do
			{
				r = m;
				m = n%m;
				n = r;
			}
			while(m!=0);
		}
		else
		{
			do
			{
			r = n;
			n = m%n;
			m = r;
			}
		    while(n!=0);
		}
		printf("%d %d %d\n", i,x*y/r,r);
	}
	return 0;
}







