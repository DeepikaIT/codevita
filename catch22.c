#include<stdio.h>
int main() 
{
    int F,B,T,FD,BD,TT,Temp=0;
    scanf("%d %d %d %d %d",&F,&B,&T,&FD,&BD);
    BD=BD+F;
    while(FD>0&&BD>0&&F!=B)
    {
        if(F>B)
        {
            Temp=Temp+F;
            FD=FD-F;
            if(FD>0)
            {
               Temp=Temp+B;
               FD=FD+B;
            }
            else
            {
                Temp=Temp+FD;
            }
           
        }
        else
        {
            Temp=Temp+B;
            BD=BD-B;
            if(BD>0)
            {
                Temp=Temp+F;
                BD=BD+F;
            }
            else
            {
                Temp=Temp+BD+F;
            }
            
        }
    }
    TT=Temp*T;
 
    if(F==B&&F<FD)
    {
        printf("No Ditch");
    }
    else if(FD<=0)
    {
        printf("%d F",TT);
    }
    else
    {
        printf("%d B",TT);
    }
    return 0;
}
