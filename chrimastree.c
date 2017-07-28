
#include<stdio.h>
int main()
{
 int i,j,k,n,p,q,s,t;
 scanf("%d",&n);
  for(i=0;i<n+1;i++)
  {
   for(j=i;j<n;j++)
   {
    printf(" ");
   }
   for(k=0;k<=(2*i);k++)
   {
    printf("*"); 
   }
   printf("\n");
  }
  if(n>2)
  {
   for(s=0;s<n-1;s++)
   {
    for(p=s;p<n-1;p++)
    {
     printf(" ");    
    }
    for(q=0;q<(2*(s+2))-1;q++)
    {
     printf("*");
    }
    for(p=s;p<n-1;p++)
    {
     printf(" ");    
    }
    printf("\n");  
   }
   for(t=0;t<n-3;t++)
   {
    for(s=0;s<n-2;s++)
    {
     for(p=s;p<n-1;p++)
     {
      printf(" ");    
     }
     for(q=0;q<(2*(s+2))-1;q++)
     {
      printf("*");
     }
     for(p=s;p<n-1;p++)
     {
      printf(" ");    
     }
     printf("\n"); 
    } 
   }
  }
  for(p=0;p<2;p++)
  {
   for(q=0;q<n;q++)
   {
    printf(" ");
   }
   printf("*");
   for(q=0;q<n;q++)
   {
    printf(" ");
   }  
   printf("\n"); 
  }
 return 0;
}


