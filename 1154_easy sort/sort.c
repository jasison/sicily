#include <stdio.h>

int main()
{
	int a[1000];
	int i,j,k,t,temp,x,y;

	scanf("%d", &t);
	for(x=0; x<t; x++)
	{
		scanf("%d", &y);
	  for(i=0; i<y; i++)
	   	scanf("%d", &a[i]);
	  for(i=0; i<y-1; i++)
	  {
		 k = i;
		 for(j=i+1; j<y; j++)
		 {
		    if(a[k]>=a[j])
			   k = j;
		 }
		if(i!=k)
		{
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	  }
	  for(j=0; j<y; j++)
		printf("%d\n", a[j]);
	}
	
	return 0;
}

