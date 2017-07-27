
#include<stdio.h>
int main()
{
 int n,a[500],sum=0,i,rem,count=0;
 scanf("%d",&n);
 if((n>=1)&&(n<=25))
 {
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
  sum=sum+a[i];


  if(sum%3==0)
  {
  printf("Yes");
  for(i=0;i<n;i++)
  { rem=a[i]%3;
      if(rem!=0)
      {    count++;
           if(rem==1)
            a[i]=a[i]-1;
          if(rem==2)
            a[i]=a[i]+1;
      }

  }printf(" %d",count/2);
  }
  else
  {
  printf("No");

  }}

  return 0;




}
