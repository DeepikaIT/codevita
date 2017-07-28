#include<stdio.h>
void main()
{
    int n,m=0001,i,j,count=0;
    char alph1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char alph2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    printf("enter the value:");
    scanf("%d",&n);
    for(i=0;i<26;i++)
    {    
        for(m=0001;m<10000;m++)
        {
          printf("TN %d %c %d\n",n,alph1[i],m);
          count++;
         }
        }
 for(i=0;i<26;i++)
    {
      for(j=0;j<26;j++)
      {
       for(m=0001;m<10000;m++)
       {
         printf("TN %d %c%c %d\n",n,alph1[i],alph2[j],m);
          count++;
       }
      }
     }
     printf("count= %d"
