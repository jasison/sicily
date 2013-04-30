#include <stdio.h>

int tran(int n,int t)
{
	int i,sum=0;
	for(i=0; ; i++)
	{
		sum += n%t;
		if(n/t==0)
			break;
		n /= t;
		tran(n,t);
	}
	return sum;
}
int main()
{
	int n;
   for(n=2992; n<9999; n++)
   {
     if(tran(n,10)==tran(n,12) && tran(n,10)==tran(n,16))
		 printf("%d\n", n);
   }
  return 0;
}