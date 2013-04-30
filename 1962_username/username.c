#include <stdio.h>
#include <string.h>

int main()
{
   unsigned int i;
   char a[100];
   gets(a);
   if(strlen(a)<6 || strlen(a)>10)
	    printf("Invalid\n");
   else
   {
	   if(a[0]>='A'&&a[0]<='Z' || a[0]>='a'&&a[0]<='z')
	   {
		   for(i=1; i<strlen(a); i++)
		   {
			   if(a[i]>='A'&&a[i]<='Z' || a[i]>='a'&&a[i]<='z' || a[i]>='0'&&a[i]<='9')
				   continue;
			   else
			   {
				   printf("Invalid\n");
				   break;
			   }
		   }
		   if(i==strlen(a))
			   printf("Valid\n");
	   }
	   else
		   printf("Invalid\n");
	   
   }
   return 0;
}