
 #include <stdio.h>
int main()
{
    int N,T,E[50],P,D,Temp,i,j;
    scanf("%d %d",&N,&T);
    for(i=0;i<N;i++)
    {
        scanf("%d",&E[i]);
    }
    scanf("%d %d",&P,&D);
    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
        if(E[i]>E[j])
        {
            Temp=E[i];
            E[i]=E[j];
            E[j]=Temp;
        }
        }
    }
    if(T>=N)
    {
    for(i=0;i<N;i++)
    {
        if(E[i]<P)
        {
            P=(P-E[i])+P;
        }
    }
         if(P>=D)
    {
        printf("Yes");
      
    }
    else
    {
        printf("No");
    }
    }
    else
    {
        printf("NO");
    }
    return 0;
}
