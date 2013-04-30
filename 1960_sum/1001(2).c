#include<stdio.h>

int main()
{
    int m,n,i,ans;
    scanf("%d",&m);
	while(m--) 
	{
		scanf("%d",&n);
		printf("%d\n",n*(n+1)/2);
	}
	return 0;
}