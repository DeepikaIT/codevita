
#include<stdio.h>
int main()
{
    int n,i,j,a[10],k,sum,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
         sum=a[i]+a[j]+a[j+1];
         if(sum==k)
         {
            count++;
         }
         
        }
    }
    if(count>=1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
   
}
