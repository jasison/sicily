#include <stdio.h>
#include <string.h>

struct grade{
	char name[100];
	int score;
};

void print(int s)
{
	s /= 10;
	switch(s){
	case 9:
	case 10:
		printf("A\n");break;
	case 8:
		printf("B\n");break;
	case 7:
		printf("C\n");break;
	case 6:
		printf("D\n");break;
	default:
		printf("E\n");break;
	}
}

int main()
{

	int t,n,m,i,j;
	char a[100][100];
	struct grade stu[1000];

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &n,&m);
		for(i=0; i<n; i++){
			scanf("%s %d", stu[i].name,&stu[i].score);
		}
		for(i=0; i<m; i++){
			scanf("%s\n", a[i]);
		}
		for(i=0; i<m; i++){
			for(j=n-1; j>=0; j--){
				if(strcmp(a[i],stu[j].name)==0){
					if(stu[j].score>=0 && stu[j].score<=100){
						print(stu[j].score);
						break;
					}
					else{
						printf("Score is error!\n");
						break;
					}
				}
			}
		}
	}

	return 0;
}


