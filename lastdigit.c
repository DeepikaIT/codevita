#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,f,lastdigit,sum=0;
    scanf("%d",&n);
    for(i=0;pow(2,i)<=n;i++)
    {
    for(j=0;j<=n;j++)
    {
      f=pow(2,(pow(2,i)+2*j));
       sum=sum+f;
    }
   
    }
    lastdigit=sum%10;
    printf("%d\n",sum);
    printf("%d",lastdigit);
    return 0;
}
