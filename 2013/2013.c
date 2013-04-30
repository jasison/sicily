#include <stdio.h>

int main()
{
	int n,a[1000];
	int i,j,k,c=1,sum=0;

	scanf("%d", &n);
	a[0] = 0;
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for(i=1; i<=n; i++){
		if(a[i]<0){
			if(sum+a[i]>=0){
				sum += a[i];
				c++;
			}
			else{
				c++;
			}
		}
		else{
			sum += a[i];
			c++;
		}
	}



