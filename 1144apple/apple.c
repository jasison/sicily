#include <stdio.h>

int main()
{
   int m,ap[10],tao,c = 0;  /* tao is the height of taotao */
                                     /* apple[10] is the height of 10 apples */
   for(m=0; m<10; m++)
	 scanf("%d", &ap[m]);        
                                 /* read 10 height of apples and the height of taotao */
   scanf("%d", &tao);

   for(m=0; m<10; m++)
   {
	   if(tao + 30>= ap[m])
		   c++;                  /* counter is the number of apples that isn't got by taotao */
   }
   printf("%d\n", c);

   return 0;
}