#include <stdio.h>
#include <math.h>

int main()
{
	long n,i,j,k,c=0,a[100];

	scanf("%d", &n);

	if(n<100)
		c = n;
	else{
		for(i=100; i<=n; i++){
			k = i;
			for(j=0; k!=0; j++){
				a[j] = k%10;
				k /= 10;
			}
			for(j-=2; j>=1; j--){
				if(a[j]==a[j-1]+a[j+1] || a[j]==(int)abs(a[j-1]-a[j+1]))
					continue;
				else
					break;
			}
			if(j==0)
				c++;
		}
		c += 99;
	}
	printf("%ld\n", c);

	return 0;
}

