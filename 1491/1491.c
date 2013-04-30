#include <stdio.h>

struct num{
	int t;
	int v;
};

int main()
{
	int t,i,j;
	struct num a[1000];
	char b[1000];
	scanf("%d", &t);

	while(t--){
		scanf("%s", b);
		for(i=0,j=0; ;i++){
			a[i].t = 0;
			do{
				a[i].v = b[j]-'0';
				a[i].t++;
				j++;
			}while(b[j-1]==b[j]);
			printf("%d%d", a[i].t,a[i].v);
			if(b[j]=='\0')
				break;
		}
		printf("\n");
	}

	return 0;
}



