
#include<stdio.h>
#include<string.h>
int main(void)
{
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char beads[20],beads1[20];
    int i=0,j,sum=0,sitting,Fsum,Rsum,cost,len,sum1=0,cost1,k;
    printf("enter the string");
    scanf("%s",beads);

    
    //forward duplication
    for(i=0;beads[i]!='\0';i++)
    {
        for(j=i+1;beads[j]!='\0';j++)
        {
            if(beads[i]==beads[j])
            {
             beads[j]='-';
            
            }
        }
    }
    //reverse duplication
    
    for(i=0;beads[i]!='\0';i++)
    {
        for(j=i+1;beads[j]!='\0';j++)
        {
            if(beads[i]==beads[j])
            {
             beads[j]='-';
            
            }
        }
    }
       printf("%s",beads);
      len=strlen(beads);
      printf("%d",len);
      // forward cost estimation
      sitting=1;
          for(i=0;i<len;i++)
          {
   
            for(j=0;j<=25;j++)
            {
                if(beads[i]==alpha[j])
                {    
                 printf("\nsitting=%d",sitting);
                    cost=sitting*(j+1);
                     printf("\nj=%d",j);
                   printf("\ncost=%d",cost);
                    sum=sum+cost;
                    printf("\nsum=%d",sum);
                 sitting=sitting+1;
                 printf("\nsitting=%d",sitting);
                }
                else
                continue;
            }
          }
            //reverse a string
            for(k=len;k>=0;k--)
            {
                beads1[k]=beads[k];
            }
            printf("\nreverse=%s",beads1);
            sitting=1;
            //reverse cost estimation
            for(i=0;i<len;i++)
          {
   
            for(j=0;j<=25;j++)
            {
                if(beads1[i]==alpha[j])
                {    
                 printf("\nsitting=%d",sitting);
                    cost1=sitting*(j+1);
                     printf("\nj=%d",j);
                   printf("\ncost=%d",cost);
                    sum1=sum1+cost1;
                    printf("\nsum=%d",sum);
                 sitting=sitting+1;
                 printf("\nsitting=%d",sitting);
                }
                else
                continue;
            }
   
    }
    Fsum=sum;       
    printf("Forward cost:%d\n",Fsum);
     Rsum=sum1;       
    printf("reverse cost cost:%d\n",Rsum);
    //  cost comparison
    if(Fsum<=Rsum)
     
      printf("\n%d",Fsum);
     
     else
      printf("%d",Rsum);
   
      return 0;
}
