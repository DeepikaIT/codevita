

#include<stdio.h>
#include<math.h>
int main()
{
    int n,A[100],A1[100],i,j,c,count=0;
    int result=0,final=0,temp=0;
    scanf("%d",&n);
    A[0]=0;
    for(i=0;i<n;i++)
    {
       c=pow(2,i);
       if(c<=n)
       {
           A[i+1]=c;
           count++;
       }
       else
       {
          i=n;
       }
    }
   for(i=0;i<=count;i++)
    {
        for(j=0;j<=n;j++)
        {
    result=result+pow(2,(pow(2,A[i])+(2*j)));
    }
    }
    final=result%10;
    temp=final*final;
    temp=sqrt(temp);
    printf("%d",temp);
    return 0;
}


