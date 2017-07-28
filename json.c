
#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],b[100][100],temp[100];
   static int l,shift,length,i,k,j,shif,t,num[100],len,z=0;
   scanf("%[^\n]s",a);
   length=strlen(a);
    for(i=0;a[i]!='\0';i++)
        {
            if(a[i]==' ')
                l++;
        }//printf("%d\n",l);
        len=(l+1)/2;
        for(i=0;i<100;i++)
        {
            for(j=0;j<10;j++)
                b[i][j]=0;
        }
    for(i=0;i<=len;i++)
        {
            for(j=shif,k=0;((a[j]!=' ')&&(j<length));k++,j++)
            {
            if(((a[j]>=97)&&(a[j]<=122))||((a[j]>=65)&&(a[j]<=90)))
            {
                b[i][k]=a[j];
                b[i][k+1]=' ';
                shift=j+2;
            }

            }num[i]=0;
            for(j=shift,k=0;((a[j]!=' ')&&(j<length));k++,j++)
            {
              if((a[j]>=48)&&(a[j]<=57))
              {
                num[i]=num[i]*10+a[j]-48;
                shif=j+2;

              }
            }
        }
        for(i=0;i<len-1;i++)
        {
            for(j=1;j<len;j++)
            {
                if(strcmp(b[i],b[i+j])>0)
                {

                  strcpy(temp,b[i+j]);
                  strcpy(b[i+j],b[i]);
                  strcpy(b[i],temp);
                }
            }
        }
        for(i=0;i<len;i++)
        {
            for(j=i+1;j<len;j++)
            {
                if(num[i]>num[j])
                {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
                }
            }

        }
        for(i=0;i<len;i++)
        {
            printf("%s ",b[z]);
            printf("%d ",num[i]);
            z++;
        }
     return 0;
    }


