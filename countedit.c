#include<stdio.h>
//#include<ctype.h>
//#include<string.h>
#include<stdlib.h>
int main()
{ 
    int a,f=1,i,d=2,count=0;
    char b[10];
    scanf("%s",b);
    a=atoi(b);
    //a=(int)b;
   // b=isalpha(a);
   //printf("B=%d",b;
  // printf("A=%d",a);
    if(a>1&&a!=0)
    {
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    while(f!=0)
    {
        if(f%d==0)
        {
        f=f/d;
        count++;
        if(f==1)
        break;
        }
        else
        {
            if(count>0)
            printf("%d\t",count);
            count=0;
            d=d+1;
        }
    }
    if(d>2)
    printf("1");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}




