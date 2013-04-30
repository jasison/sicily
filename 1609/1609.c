#include <stdio.h>

int main()
{
	int t;
	long long n,p;

	scanf("%d", &t);

	while(t--){
		scanf("%lld %lld", &n,&p);
		do{
			p -= 2*n;
		}while(p>=2147483648);
		
		printf("%d\n",p%n);
	}

	return 0;
}