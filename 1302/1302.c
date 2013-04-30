#include <stdio.h>

int main()
{
	long long n;
	
	while(scanf("%lld", &n) && n ){
		if(n == 1)
			printf("1\n");
		else
			printf("%lld\n", n * (n - 1) / 2 - 1);
	}
	return 0;
}