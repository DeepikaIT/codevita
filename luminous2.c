
#include<stdio.h>
#include<string.h>
int main(void) {
    char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char beads[20];
    printf("enter the string");
    scanf("%s",beads);
    //length=
    int i=0,j,sum=0,sitting=1,Fsum,cost,len;
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
    Fsum=sum;        
    printf("Forward cost:%d",Fsum);
    
      return 0;
}
