#include <stdio.h>

int main()
{
	int i,j,t,sum;
	char a[1000];
	scanf("%d", &t);
	gets(a);
	while(t--)
	{
		gets(a);
		sum = 0;
		j = 0;
		for(i=0; ; i++)
		{
			if(a[i]=='\0')
				break;
			if(a[i]=='O')
				sum += ++j;
			if(a[i]=='X')
				j = 0;
		}
		printf("%d\n", sum);
	}
	return 0;
}