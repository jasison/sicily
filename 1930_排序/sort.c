#include <stdio.h>

int main()
{
	int a[1000],b[1000];
	int i,j,k,m,n,x,y,t;

	scanf("%d", &m);
	for(i=0; i<m; i++)
	{
		a[i]=0;
		scanf("%d", &n);
		for(j=0; j<n; j++)
			scanf("%d", &b[j]);
		for(x=0; x<n-1; x++)
		{
			k=x;
			for(y=x+1; y<n; y++)
			{
				if(b[k]>b[y])
				{
					k=y;
					a[i]++;
				}
			}
			if(x!=k)
			{
				t=b[k];
				b[k]=b[x];
				b[x]=t;
			}
		}
	}
	for(i=0;i<m;i++)
		printf("%d\n",a[i]);

	
	return 0;
}



