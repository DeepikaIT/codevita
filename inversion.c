#include<stdio.h>
int main() 
{
 int a[10],b[10],n,count=0,r=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++)
 {   count=0;
     for(int j=1;j<=a[i];j++)
     {
     if(a[i]%j == 0)
     {
         count++;
     }
     }
     b[i]=count;
 }
 for(int i=0;i<n-1;i++)
 {
     for(int j=i+1;j<n;j++)
     {
         if(b[i]>b[j])
         {
           r++ ; 
         }
     }
 }
 printf("%d",r);
return 0;
}
