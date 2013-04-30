#include <stdio.h>
#include <string.h>

char a[100];
char b[100];
int c[100];

void add(char* a,char* b)
{
	int i;
	for(i=0;i<strlen(a);i++)
		c[i] += a[strlen(a)-1-i] - '0';
	for(i=0;i<strlen(b);i++){
		c[i] += b[strlen(b)-1-i] - '0';
		if(c[i]>9){
			c[i+1]++;
			c[i] -= 10;
		}
	}
}

void subtract(char* a,char* b)
{
	int i;
	for(i=0;i<strlen(b);i++)
		c[i] += b[strlen(b)-1-i] - '0';
	for(i=0;i<strlen(a);i++){
		c[i] -= a[strlen(a)-1-i] - '0';
		if(c[i]<0){
			c[i+1]--;
			c[i] += 10;
		}
	}
}

int compare(char* a,char* b)
{
	int i;
	if(strlen(a)>strlen(b))
		return 1;
	else if(strlen(a)<strlen(b))
		return 0;
	else{
		for(i=0;i<strlen(a);i++){
			if(a[i]>b[i])
				return 1;
			else if(a[i]<b[i])
				return 0;
			else{
				if(i==strlen(a)-1)
					return 2;
				else
					continue;
			}
		}
	}
}

int main()
{
	int i;

	while(scanf("%s %s", a,b)!=EOF){
		memset(c,0,sizeof(c));
		if(a[0]!='-'&&b[0]!='-' || a[0]=='-'&&b[0]=='-'){
			add(a,b);
			for(i=99;c[i]==0;i--)
				;
			if(a[0]!='-'&&b[0]!='-'){
				for(;i>=0;i--)
					printf("%d", c[i]);
				printf("\n");
			}
			else{
				printf("-");
				for(;i>=0;i--)
					printf("%d", c[i]);
				printf("\n");
			}

		}
		else{
			if(a[0]=='-'){
				for(i=0;i<strlen(a)-1;i++)
					a[i] = a[i+1];
				for(i=99;c[i]==0;i--)
					;
				if(compare(a,b)==1){
					subtract(a,b);
					printf("-");
					for(;i>=0;i--)
						printf("%d", c[i]);
					printf("\n");
				}
				else if(compare(a,b)==0){
					subtract(b,a);
					for(;i>=0;i--)
						printf("%d", c[i]);
					printf("\n");
				}
				else
					printf("0\n");
			}
			else{
				for(i=0;i<strlen(b)-1;i++)
					b[i] = b[i+1];
				if(compare(a,b)==1){
					subtract(a,b);
					for(i=99;c[i]==0;i--)
						;
					for(;i>=0;i--)
						printf("%d", c[i]);
					printf("\n");
				}
				else if(compare(a,b)==0){
					subtract(b,a);
					printf("-");
					for(i=99;c[i]==0;i--)
						;
					for(;i>=0;i--)
						printf("%d", c[i]);
					printf("\n");
				}
				else
					printf("0\n");
			}
		}
	}
	return 0;
}
		