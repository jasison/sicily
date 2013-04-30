#include <stdio.h>

struct num{
	int v;
	int t;
};

int main()
{
	int i,j,n,b[10000];
	struct num a[10000];

	while(scanf("%d", &n)!=EOF){
		for(i=0; i<n; i++){
			scanf("%d", &b[i]);
		}
		for(i=0; i<n; i++){
			a[i].v = b[i];
			for(j=i+1; j<n; j++){
				if(