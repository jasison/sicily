#include <stdio.h>

int main()
{
	int i,j,k,sum,t;
	char a[100][20];

	for(i=0; ; i++)
	{
		if(scanf("%c",&a[i][0])==EOF)
			break;
		for(j=1; j<=10; j++)
			a[i][j] = getchar();
		getchar();
		a[i][j] = '\0';
		sum = 0;
		for(j=0,k=10; ;j++,k--)
		{
			if(a[i][j]=='-')
			{
				k++;
				continue;
			}
			if(a[i][j]=='\0')
				break;
			sum += k*((int)a[i][j]-'0');
		}
		for(t=0,j=0; ;j++,t++)
		{
			if((sum+t)%11==0 || t==10)
				break;
		}
		if(t!=10)
		  printf("%s-%d\n", a[i],t);
		else
			printf("%s-X\n",a[i]);
	}
	return 0;
}
	

