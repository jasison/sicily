#include <stdio.h>

int main()
{
     int a,ma=0,m,max[6000];
	scanf("%d", &m);
    
	for(a=0; a<m; a++)
	{
		scanf("%d", &max[a]);
		if(max[a]<-10000 || max[a]>10000)
			printf("please input again");
		if(max[a]>ma)
			ma = max[a];
    }
	printf("%d\n", ma);
}
