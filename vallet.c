#include<stdio.h>
int main()
{
    int N,i,hval1=0,hpos1=0,a=5,fi=1,hval2=0,hpos2=0,result=0,t=0;
    scanf("%d\n",&N);
    int inp[N];
    for(i=1;i<=N;i++)
    {
        scanf("%d,",&inp[i]);
    }
   
    do
    {
    for(i=fi;i<=a;i++)
    {
        if(inp[i]>hval1)
        {
           
            hval1=inp[i];
            hpos1=i;
        }
    }
   
    for(i=fi;i<=a;i++)
    {
        if((inp[i]>hval2)&&(inp[i]!=hval1))
        {
            hval2=inp[i];
            hpos2=i;
        }
    }
     
    result=result+hval1+hval2;
    
    fi=hpos1+4;
    if((N-fi)<2)
    {
       
        t++;
        for(i=fi;i<=N;i++)
        {
            result=result+inp[i];
        }
    }
    else
    {
     
        t=0;
    }
    }while(t==0);
    printf("%d",result);
  return (0);  
}
