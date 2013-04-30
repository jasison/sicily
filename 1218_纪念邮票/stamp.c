#include<stdio.h>
main()
{
	int i,j,n,m,sum;
	scanf("%d %d", &n,&m);
 
	for(j=1; j<=(n>=m?m:n); j++)
	{
		
		for(i=j; i<=(n>=m?m:n); i++)
		{
		  sum=(j+i)*(i-j+1);
		  if(sum>=2*m)
		  {
			if(sum==2*m)
			    printf("[%d,%d]\n", j,i); 
			break;
		  }
	  }
	}
}