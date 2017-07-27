#include<stdio.h>
void main()
{
    int N,k,i,j=0,f,fact=0;
    int ar[10];
    printf("Enter the values:");
    scanf("%d %d",&N,&k);
    for(i=N;i>=1;i--)
    {
        if(N%i==0)
        {
          ar[j]=i;
             j++;
         }
    }
    fact=j-k;
    if(fact>0)
    {
    printf("\n%d",ar[fact-1]);
    }
    else
    printf("1");
}
