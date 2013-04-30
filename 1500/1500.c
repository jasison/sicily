#include <stdio.h>

int prime(int n)
{
	int i;
	if(n<2)
		return 0;
	if(n==2)
		return 1;
	else if(n%2==0)
		return 0;
	for(i=3; i<n/2; i+=2){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	int n,i,j,k;

	while(scanf("%d", &n)&&n!=0){
		if(prime(n)==1)
			printf("0\n");
		else{
			j = n-1;
			while(prime(j)==0)
				j--;

			k = n+1;
			while(prime(k)==0)
				k++;

			printf("%d\n", k-j);
		}
	}
	return 0;
}



