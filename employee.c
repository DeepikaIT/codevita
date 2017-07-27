#include<stdio.h>
#include<string.h>
int main()
{

long int a[10],num;int i,k,r;int len;static int c=0;
for(i=0;i<5;i++)
{
scanf("%ld",&a[i]);
}
printf(" Enter a no");
scanf("%ld",&num);
while(num!=0)
{
 num=num/10;
 len++;
}
  for(k=0;k<5;k++)
  {
      for(i=0;i<len;i++)
      {
           {
         r=a[k]/10;
         a[k]=r;

           }
      if(r==num)
         {
        c++;
         }
      }
   }
printf("%d",c);
return 0;
}
