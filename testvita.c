#include<stdio.h>
void main()
{
    int T,N,i,j,a[10][10],hours=0,new;
    printf("Enter the no of test cases:");
    scanf("%d",&T);
    printf("Enter the no of modules:");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
     for(i=0;i<N;i++)
    {
          if(a[i][2]==0)
            {
                hours=hours+a[i][1];
                 new=a[i+1][2];
            }
            
           if(a[i][2]==new)
            {
                if(new==a[i+1][2])
                 {
                   if(a[i][1]>a[i+1][1])
                    {
                       hours=hours+a[i][1];
                       new=a[i][0];
                    }
                   else
                    {
                      hours=hours+a[i+1][1];
                      new=a[i][0];
                    }
                 }
               else
                {
                  hours=hours+a[i][1];
                  new=a[i+1][2];
                }
            }    
      
    }
    printf("Total time taken for the project %d\n",hours);
    
}
