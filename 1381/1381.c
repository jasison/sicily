#include <stdio.h>

int main()
{
	int t,i,j,k;
	int a[1000],b[1000];
	char c;

	scanf("%d", &t);
	getchar();
	while(t--){
		for(i=0; ;i++){
			if((c=getchar())==' ')
				break;
			a[i] = c-'0';
		}
		for(j=0; ;j++){
			if((c=getchar())=='\n')
				break;
			a[j] = c-'0';
		}
