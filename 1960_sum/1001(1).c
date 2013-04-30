#include<stdio.h>

int main()
{
    int m,n,i,j,ans;
    scanf("%d",&m);
	for(j=0;j<m;j++) 
	{
		scanf("%d",&n);
		ans=0;
		for(i=1;i<=n;i++)
		{
			ans+=i;
		}
		printf("%d\n",ans);
	}
	return 0;
}