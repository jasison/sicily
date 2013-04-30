#include <stdio.h>

int main()
{
	int i,j,c;
	char b[100];

	while(scanf("%s", b)&&b[0]!='#'){
		c = 0;
		for(i=0; ;i++){
			if(b[i]=='1')
				c++;
			if(b[i]=='e'||b[i]=='o')
				break;
		}
		if(b[i]=='e'){
			if(c%2==0)
				b[i]='0';
			else
				b[i]='1';
		}
		if(b[i]=='o'){
			if(c%2==0)
				b[i]='1';
			else
				b[i]='0';
		}
		for(j=0;j<=i;j++){
			printf("%c", b[j]);
		}
		printf("\n");
	}

	return 0;
}


