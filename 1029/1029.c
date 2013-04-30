#include <stdio.h>
#include <string.h>

unsigned long long a[50];

unsigned long long birth(int m,int d)
{
	if(d <= m){
		return d + 1;	
	}else{
		if(a[d - m - 1] == 0){
			a[d - m - 1] = birth(m,d - m);
		}
		if(a[d - 2] == 0){
			a[d - 2] = birth(m,d - 1);
		}
		return a[d - m - 1] + a[d - 2];
	}
}

int main()
{
	int m,d,i;
	
	while(1){
		scanf("%d %d",&m,&d);
		if(m == 0 && d == 0){
			break;
		}
		memset(a,0,50 * sizeof(unsigned long long));
		printf("%llu\n",birth(m,d));
	} 
}
