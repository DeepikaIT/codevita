#include<stdio.h>
void main()
{
    int i,n,z,a[20],sum,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
   scanf("%d",&z);
   for(i=0;i<n;i++)
    {
        sum=a[i]+a[i+1]+a[1+2];
        if(sum==z)
        {
            count++;
        }
    }

if(count>=1)
{
    printf("TRUE");
}
else
{
    printf("FALSE");
}
}
