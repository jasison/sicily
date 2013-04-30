#include <stdio.h>
#include <string.h>

int main()
{
	char a[5];
	int t,i;
	double n;
	
	scanf("%d",&t);
	for(i=1;i<t+1;i++)
	{
		scanf("%lf",&n);
		getchar();
		gets(a);
		if(!strcmp(a,"kg"))
			printf("%d %.4lf lb\n",i,n*2.2046);
		if(!strcmp(a,"lb")) 
			printf("%d %.4lf kg\n",i,n*0.4536);
		if(!strcmp(a,"l"))
			printf("%d %.4lf g\n",i,n*0.2642);
		if(!strcmp(a,"g"))
			printf("%d %.4lf l\n",i,n*3.7854);
	}
	return 0;
}






