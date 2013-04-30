/*
 *author:Monkey
 *blog:http://www.itlodge.net
 */
 
#include <stdio.h>

int main()
{
	int w1,w2,w3,r1,r2,r3,r4;
	int w,i,j;
	
	for(i = 1; scanf("%d %d", &w1,&r1) != EOF; i++){
		scanf("%d %d %d %d %d", &w2,&r2,&w3,&r3,&r4);
		printf("Set number %d:\n", i);
		while(scanf("%d", &w) && w){
			int price,add;
			if(w >= 0 && w <= w1){
				if(r2 * (w1 + 1) < w * r1){
					price = r2 * (w1 + 1);
					add = w1 + 1 - w;
				}else{
					price = w * r1;
					add = 0;
				}
				printf("Weight (%d) has best price $%d (add %d pounds)\n", w,price,add);
			}else if( w > w1 && w <= w2){
				if(r3 * (w2 + 1) < w * r2){
					price = r3 * (w2 + 1);
					add = w2 + 1 - w;
				}else{
					price = w * r2;
					add = 0;
				}
				printf("Weight (%d) has best price $%d (add %d pounds)\n", w,price,add);
			}else if( w > w2 && w <= w3){
				if(r4 * (w3 + 1) < w * r3){
					price = r4 * (w3 + 1);
					add = w3 + 1 - w;
				}else{
					price = w * r3;
					add = 0;
				}
				printf("Weight (%d) has best price $%d (add %d pounds)\n", w,price,add);
			}else{
				price = w * r4;
				printf("Weight (%d) has best price $%d (add 0 pounds)\n", w,price);
			}
		}
		printf("\n");
	}
	return 0;
}
		