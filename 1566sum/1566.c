#include <stdio.h>

int main()
{
	int A,B,C,D,i,j,k,s;
	int a[1000],b[1000],c[1000],d[1000];
	scanf("%d %d %d %d",&A,&B,&C,&D);
	for(i=0;i<A;i++)
		scanf("%d",&a[i]);
	for(i=0;i<B;i++)
		scanf("%d",&b[i]);
	for(i=0;i<C;i++)
		scanf("%d",&c[i]);
	for(i=0;i<D;i++)
		scanf("%d",&d[i]);
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			for(k=0;k<C;k++)
			{
				for(s=0;s<D;s++)
				{
					if(a[i]+b[j]+c[k]+d[s]==0)
					{
						printf("%d %d %d %d\n",a[i],b[j],c[k],d[s]);
						return 0;
					}
				}
			}
		}
	}
}

