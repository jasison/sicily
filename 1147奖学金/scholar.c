#include <stdio.h>

struct stu
{
	char name[30];
	int s1;
	int s2;
	char x;
	char y;
	int num;
	int sch;
};
int main()
{
	int n,i,k,max,sum=0;
	struct stu a[200];
	scanf("%d", &n);
    for(i=0; i<n; i++)
	{
	  scanf("%s %d %d %c %c %d", a[i].name,&a[i].s1,&a[i].s2,&a[i].x,&a[i].y,&a[i].num);
	  a[i].sch = 0;
	  if(a[i].s1>80 && a[i].num>=1)
		  a[i].sch += 8000;
	  if(a[i].s1>85 && a[i].s2>80)
		  a[i].sch += 4000;
	  if(a[i].s1>90)
		  a[i].sch += 2000;
	  if(a[i].s1>85 && a[i].y=='Y')
		  a[i].sch += 1000;
	  if(a[i].s2>80 && a[i].x=='Y')
		  a[i].sch += 850;
	}
	max = a[0].sch;
	for(i=1; i<n; i++)
	{
		if(a[i].sch>max)
		{
			max = a[i].sch;
			k = i;
		}
	}
	printf("%s\n%d\n", a[k].name,max);
	for(i=0; i<n; i++)
		sum += a[i].sch;
	printf("%d\n", sum);
    
	return 0;
}




	 

	