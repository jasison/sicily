#include <stdio.h>
#include <math.h>

int isprime(int n)
{
	int i;
	for(i=3;i<=(int)sqrt(n);i+=2){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n,i,c;
	int a[30]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,
		59,61,67,71,73,79,83,89,97,101,103,107,109,113};

	scanf("%d", &n);

	if(n<=30){
		printf("%d\n", a[n-1]);
	}
	else{
		i=115;
		c=30;
		while(1){
			if(isprime(i))
				c++;
			if(c==n){
				printf("%d\n", i);
				break;
			}
			i += 2;
		}
	}

	return 0;
}


	