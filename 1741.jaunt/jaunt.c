#include <stdio.h>
#include <math.h>

int main()
{
	int t,i,n,a[1000],b[1000];
	double s;
	scanf("%d", &t);
	while(t--)
	{
		s = 0.0;
		scanf("%d", &n);
	    for(i=0; i<n; i++)
			scanf("%d %d", &a[i],&b[i]);
		for(i=0; i<n-1; i++)
			s += (b[i]+b[i+1])*fabs(a[i+1]-a[i])/2;
		printf("%.1lf\n", s);
	}
	return 0;
}