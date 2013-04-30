#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
	int x1,y1,x2,y2;
    double D1;

	scanf("%d %d %d %d", &x1,&y1,&x2,&y2);         /* read the number input */

	D1 = fabs(x1 - x2) + fabs(y1 - y2);             /* use the function:absolute value */

	printf("%.0lf\n", D1);
    
	getch();
	return 0;
}