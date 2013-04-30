#include <stdio.h>
#include <string.h>

int main()
{
	int x,y,i,j,t;
	char a[1000][10],b[1000][10];
	scanf("%d", &x);
	getchar();
	for(i=0; i<x; i++)
		gets(a[i]);
	scanf("%d", &y);
	getchar();
	for(i=0; i<y; i++)
	{
		t = 0;
		gets(b[i]);
		for(j=0; j<x; j++)
		{
			if(strcmp(a[j],b[i])==0)
			    t++;
		}
		printf("%d\n", t);
	}
	return 0;
}








