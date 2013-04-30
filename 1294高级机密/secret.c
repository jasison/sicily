#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,i,s=1;

	scanf_s("%d %d %d", &a,&b,&c);

	for(i=0;i<b;i++){
		s = s*a%c;
	}
	printf("%d\n", s);

	return 0;
}