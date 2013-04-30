#include <stdio.h>

int main()
{
	int i,sum;
	char a[1000];

	while(gets(a)&&a[0]!='#')
	{
		sum = 0;
		for(i=0; a[i]!='\0'; i++)
		{
		    if(a[i]>='A' && a[i]<='Z')
				sum += (i+1)*(a[i]-'A'+1);
		}
		printf("%d\n", sum);
	}
	return 0;
}
			

