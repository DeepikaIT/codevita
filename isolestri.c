
#include <stdio.h>
#include <math.h>

int main(void) {
    // your code goes here
 int a=-1,b=1,c=0,d[50],g[50],i,k=0,j,f=0,x=0,n,l,m,o,p=0;float e[250000];
    scanf("%d",&n);
    for(i=0;i<50;i++)
    {
        c=a+b;
        a=b;
        b=c;
        d[i]=c;
    }
    for(i=1;i<=50;i=i+2)
    {
       if((d[i]%2)!=0)
       {
       g[x]=d[i];x++;
       }
    }
        
    for(i=1;i<500;i++)
    {
        for(j=n+1;j<500;j++)
        {
            e[k]=sqrt((i*i)+(j*j));
            for(x=0;x<50;x++)
            {
                if(g[x]==e[k])
                {
                        while(f<1)
                        {
                        l=i;m=j;o=e[k];
                        f++;
                        }
                }
            }
            k++;
        }
    }
    if(l%2==0)
    {
        for(i=1;i<=l;i++)
        {
            if(l%i==0)
            p++;
        }
    }
    else
    {
        for(i=1;i<=m;i++)
        {
            if(m%i==0)
            p++;
        }
    }
    printf(" %d",p);
    
    return 0;
}


almost isoceles triangle

#include <stdio.h>
#include <math.h>
int main(void) {
    int n,i,j,c=0,b=0,k,x,y,z;
    float a;
    scanf("%d",&n);
    for(i=n;i<50000;i++)
    {
        a=sqrt(((i+1)*(i+1))+((i+2)*(
i+2)));
        for(j=n;j<50000;j++)
        {
           
           
            if(a==j)
            {
                while(c<1)
                {
                x=i+1;
                y=i+2;
                z=j;
                c++;
                }
            }   
        }
    }
    if(x%2==0)
    {
   
        for(k=1;k<=x;k++)
        {
            if(x%k==0)
            {
                b++;
            }
        }
    }
    else
    {
        for(k=1;k<=y;k++)
        {
            if(y%k==0)
            {
                b++;
            }
        }
       
    }
    printf("%d",b);
    return 0;
}
