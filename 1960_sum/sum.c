#include <stdio.h>

int main()
{
	int a,m,n,s[255]={0};
	scanf("%d", &m);
    
	for(a = 0; a<m; a++)
	{
		scanf("%d", &n);
		for(; n>0; n--)
			s[a]+=n;
	}
    for(a = 0; a<m; a++)
		printf("%d\n",s[a]);

	return 0;	
}
