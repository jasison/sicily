#include <stdio.h>

int main()
{
   int t,n,m,i,j,sum,max,min;
   int a[1000][1000];
   
   scanf("%d", &t);
   while(t--){
       scanf("%d %d", &n,&m);
       for(i=0;i<n;i++){
           for(j=0;j<m;j++){
               scanf("%d", &a[i][j]);
           }
       }
    
       for(j=0;j<m;j++){
           for(i=1,sum=max=min=a[0][j];i<n;i++){
               if(a[i][j]>max){
                   max = a[i][j];
           
               }
               if(a[i][j]<min){
                   min = a[i][j];
             
               }
               sum += a[i][j];
           }
           printf("%.2f\n", (float)(sum-max-min)/(n-2));
       }
   }
   return 0;
}   
               

