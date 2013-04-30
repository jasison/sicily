#include <stdio.h>

int main()
{
	int n,i,j,k,t;
	char a[1000],b[1000],c[1000];

	scanf("%d\n", &n);
	for(t=1; t<=n; t++){
		for(i=0; ;i++){
			if((a[i]=getchar())==' ')
				break;
		}
		for(i=0; ;i++){
			if((b[i]=getchar())==' ')
				break;
		}
		for(i=0; ;i++){
			if((c[i]=getchar())=='\n')
				break;
		}
		for(i=j=k=0; c[i]!='\n'; i++){
			if(a[j]==c[i]){
				j++;
				continue;
			}
			else if(b[k]==c[i]){
				k++;
				continue;
			}
			else{
				printf("Data set %d: no\n", t);
				break;
			}
		}
		if(c[i]=='\n')
			printf("Data set %d: yes\n", t);
	}

	return 0;
}

