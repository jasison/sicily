#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d", &n);
	printf("Your amount %d consists of\n", n);
	m = n%100;
	n /= 100;
	printf("%d dollars\n", n);
	printf("%d quarters\n", m/25);
	m %= 25;
	printf("%d dimes\n", m/10);
	m %= 10;
	printf("%d nickels\n", m/5);
	m %= 5;
	printf("%d pennies\n", m);

	return 0;
}
