#include <stdio.h>

int ischar(char c)
{
	if(c>='A'&&c<='Z'||c>='a'&&c<='z')
		return 1;
	else
		return 0;
}

int isnum(char c)
{
	if(c>='0'&&c<='9')
		return 1;
	else
		return 0;
}

int main()
{
	char a[100];
	int b[100],i,j,k,c,s;

	while(1){
		scanf("%s", a);
		if(a[0]=='X'&&a[1]=='X'&&a[2]=='X')
			break;
		for(i=0; ;i++){
			if(a[i]=='\0')
				break;
			if(ischar(a[i])&&ischar(a[i+1])||ischar(a[i])&&a[i+1]=='\0'){
				printf("%c", a[i]);
			}
			if(ischar(a[i])&&isnum(a[i+1])){
				for(j=i+1,k=0; ;j++){
					if(ischar(a[j])||a[j]=='\0')
						break;
					b[k] = a[j]-'0';
					k++;
				}
				for(s=1,k--,c=0;k>=0;s*=10){
					c += b[k]*s;
					k--;
				}
				for(k=0;k<c;k++){
					printf("%c", a[i]);
				}
				i = j-1;
			}
		}
		printf("\n");
	}

	return 0;
}








