#include <stdio.h>

struct toy{
	long long joy;
	long long price;
    long double happy;
	long long n;
}a[100000],temp;

int main()
{
	long long n,i,j,k,c[100];

	scanf("%lld", &n);

	for(i=0; i<n; i++){
		scanf("%lld %lld", &a[i].joy,&a[i].price);
		a[i].n = i;
		a[i].happy = (long double)a[i].joy / a[i].price;
	}
	for(i=0; i<3; i++){
		k = i;
		for(j=i+1; j<n; j++){
			if(a[j].happy>a[k].happy)
				k = j;
		}
		c[i] = a[k].n+1;
		if(i!=k){
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;
		}
	}

	printf("%lld\n", a[0].price+a[1].price+a[2].price);
	for(i=0; i<3; i++)
		printf("%lld\n", c[i]);

	return 0;
}
