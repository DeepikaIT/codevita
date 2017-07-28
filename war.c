#include<stdio.h>
void main()
{
    int N,M,a[100][2],sum,i,j;
    scanf("%d %d",&N,&M);
   for(i=0;i<N;i++)
     {
       for(j=0;j<2;i++)
       {
         scanf("%d",&a[i][j]);
       }
     }
    
    for(i=0;i<N;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[i][j+1]==a[i+1][j])
            {
                sum++;
            }
        }
    }
            
   if(sum!=0)
    printf("yes");
    else
    printf("no");
}
