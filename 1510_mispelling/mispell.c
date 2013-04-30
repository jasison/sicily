#include <stdio.h>

int main()
{
	int i,j=1,t,n;
	char a[100];

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		gets(a);
		for(i=n; a[i]!='\0'; i++)
			a[i] = a[i+1];
		a[i] = '\0';
		printf("%d", j);
		for(i=0; a[i]!='\0'; i++)
			printf("%c", a[i]);
		printf("\n");
		j++;
	}

	return 0;
}