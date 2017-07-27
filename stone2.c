
#include<stdio.h>

int main() {
   int n,count=0;
   scanf("%d",&n);
   while(n!=0)
   {
   if(n>=4)
   {
       n=n-4;
   }
   else
   {
       n=n-1;
   }
   count++;
   }
   if(count%2!=0)
   {
       printf("Yes");
       
   }
   else
   {
       printf("NO");
   }
   return 0;
}
