#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d", &n);
	printf("Your amount %d consists of\n", n);
	m = n%100;
	n /= 100;
	if(n>1)
		printf("%d dollars\n", n);
	if(n==1)
		printf("%d dollar\n", n);
	if(m/25>1)
		printf("%d quarters\n", m/25);
	if(m/25==1)
		printf("%d quarter\n", m/25);
	m %= 25;
	if(m/10>1)
		printf("%d dimes\n", m/10);
	if(m/10==1)
		printf("%d dime\n", m/10);
	m %= 10;
	if(m/5>1)
	   printf("%d nickels\n", m/5);
	if(m/5==1)
	   printf("%d nickel\n", m/5);
	m %= 5;
	if(m>1)
		printf("%d pennies\n", m);
	if(m==1)
		printf("%d pennie\n", m);
	return 0;
}