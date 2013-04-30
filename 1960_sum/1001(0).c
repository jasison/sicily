#include<stdio.h>

int main()
{
    int m,n,i,ans;
    scanf("%d",&m);
	while(m--) 
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