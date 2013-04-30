#include <stdio.h>
#include <math.h>

int main()
{
	int t,i,n,m,min,sum,b,temp;
	int a[1000];
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		scanf("%d", &a[i]);
		for(n=0; ;n++)
		{
			if(a[i]/(int)pow(10,n)>=1)
				continue;
			else
				break;
		}
		n--;
		min = 0;
		for(m=a[i]; m>=a[i]-9*(n+1); m--)
		{
			temp = n;
			sum = m;
			b = m;
			while (1)
			{
				sum += b/(int)pow(10,n);
				b = b%(int)pow(10,n);
				n--;
				if(b>=0&&b<=9)
				{
					sum += b;
					break;
				}
			} 
			if(sum==a[i])
				min = m;
			n = temp;
		}
		printf("%d\n", min);
	}
	return 0;
}