#include<stdio.h>
void main()
{
    int n [20],i,N,a,b,c,d,e,f,g,h,j=9;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&n[i]);
        
    }
    if(n[1]>n[2])
    {
        a=n[1];
    }
    else if(n[2]>n[1])
    {
        a=n[2];
    }
    if(a>n[3])
    {
        b=a;
    }
    else if(n[3]>a)
    {
        b=n[3];
    }
    if(b>n[4])
    {
        c=b;
    }
    else if(n[4]>b)
    {
        c=n[4];
    }
    if(c>n[5])
    {
        d=c;
    }
    else if(n[5]>c)
    {
       d=n[5]; 
    }
    while(j<=N)
    { 
    if(N==9)
    {
        e=n[j];
    }
    else if(N>j)
    {
        e=n[j]+n[j+1];
         
    }
    
    } j++;
     g=d+c+e;
    
    printf("%d%d",g);
}
