#include <stdio.h>

int main()
{
	int t,n,a[40],b[40][40],c[40];
	int i,x,y,hold,j;
	scanf("%d", &t);

	for(x=0; x<t; x++)
	{
		j = 2;
		y = 0;
		scanf("%d", &n);
		c[x] = n;
		for(i=0; i<n; i++)
			a[i] = i+1;
		do
		{
			hold = a[1];
			b[x][y] = a[0];
			if(j==n)
				b[x][n-1] = a[1];
			for(i=0; i<n-j; i++)
				a[i] = a[i+2];
			a[n-j] = hold;
			j++;
            y++;
		}
		while(j<=n);
	}
	for(x=0; x<t; x++)
	{
	   for(y=0; y<c[x]; y++)
		 printf("%d ", b[x][y]);
	  putchar('\n');
	}

	return 0;
}


