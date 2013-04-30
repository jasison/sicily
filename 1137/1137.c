#include <stdio.h>

int main()
{
	int n,s,m,i,j,k,max,min;
	int a[1000];

	scanf("%d %d", &n,&s);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	for(i=n; i>=1; i--){
		for(j=1; n-j+1>=i; j++){
			max = min = a[j];
			for(k=j; k<=i+j-1; k++){
				if(a[k]>max)
					max = a[k];
				if(a[k]<min)
					min = a[k];
			}
			if(max-min<=2){
				printf("%d\n", i);
				goto end;
			}
		}
	}
end:return 0;
}


				
