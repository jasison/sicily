#include <stdio.h>
#include <math.h>

int main()
{
	int c,i,N;
	float p1,p2,p3;
	float test1[1500],test2[1500],test3[1500];
	double mi,dis[1500];
    scanf("%d", &c);

	for(; c>0; c--)
	{
		scanf("%f %f %f", &p1,&p2,&p3);
		scanf("%d", &N);
		for(i = 0; i<N; i++)
		{
			scanf("%f %f %f", &test1[i],&test2[i],&test3[i]);
		    dis[i] = sqrt(pow((p1-test1[i]),2) + pow((p2-test2[i]),2) + pow((p3-test3[i]),2));
		}
		for(mi = dis[0],i = 1; i<N; i++)
		{
			if(dis[i]<=mi)
			{
				mi = dis[i]; 
			    test1[0] = test1[i];
				test2[0] = test2[i];
				test3[0] = test3[i];
			}
		}
		printf("(%.2f, %.2f, %.2f) %.2lf\n", test1[0],test2[0],test3[0],mi);
	}
	
	return 0;
}