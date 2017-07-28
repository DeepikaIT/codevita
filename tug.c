#include<stdio.h>

int main()
{
    int N,M,p[100][2],count=0;
    scanf("%d\n",&N);
    scanf("%d\n",&M);
    {
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<2;j++)
        {
        scanf("%d",&p[i][j]);
        }
    }
    }
     for(int i=0;i<M;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(p[i][j+1]==p[i+1][j])
            {
                count++;
            }
        }
    }
    if(count!=0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
   
}
