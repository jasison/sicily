#include <stdio.h>

int main()
{
	int n,i,j,k,a[20][20],sum;
	int flag = 0;
	while(scanf("%d", &n) != EOF){
		flag++;
		if(flag > 1){
			printf("\n");
		}
		sum = (n + 1) * n * (n - 1) / 2 + n;
		printf("n=%d, sum=%d\n",n,sum);
		for(i = 0; i < n; i++){
			for(j = 0; j < n; j++){
				a[i][j] = 0;
			}
		}
		i = 0;
		j = n / 2;
		a[i][j] = 1;
		for(k = 2; k <= n * n; k++){
			int fi = 0,fj = 0;
			i += n - 1;
			if(i >= n){
				i = i - n;
				fi = 1;
			}
			j++;
			if(j >= n){
				j = j - n;
				fj = 1;
			}
			if(a[i][j] == 0){
				a[i][j] = k;
			}else{
				if(fi){
					i += n;
				}
				i = i - (n - 1) + 1;
				if(i >= n){
					i = i - n;
				}
				if(fj){
					j += n;
				}
				j--;
				if(j < 0){
					j = n + j;
				}
				a[i][j] = k;
			}
		}
		for(i = 0; i < n; i++){
			/*if(n * n >= 100)
				printf("%3d",a[i][0]);
			else if(n * n >= 10)
				printf("%2d",a[i][0]);
			else
				printf("%d",a[i][0]);*/
			for(j = 0; j < n; j++){
				if(n * n >= 100)
					printf(" %3d",a[i][j]);
				else if(n * n >= 10)
					printf(" %2d",a[i][j]);
				else
					printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

