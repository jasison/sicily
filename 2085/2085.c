#include <stdio.h>
#include <math.h>

int main()
{
	int a,c;
	float b;

	scanf("%d %f %d", &a,&b,&c);

	printf("%.2f\n", a * pow((1 + b / 100 / 12),(c*12)));

	return 0;
}