#include <stdio.h>
#include <math.h>

int main()
{
    int t,n;
    double p,r,tot,i;
    scanf("%d",&n);
     while(n>0)
     {
       scanf("%lf%lf%d",&p,&r,&t);
       double tot=0;
      while(t>0)
      {
          tot=tot+p;
          i=(r*tot)/1200;
          tot=tot+i;
          t--;
      }
       printf("total amount:%.1lf",ceil(tot));
     
       
      }
      
       
     

      return 0;
}

