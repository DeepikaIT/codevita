#include<stdio.h>
void main()
{
int i,n,k,N,temp,a[10],b[10];
 int t=0;
printf("enter number of values");
scanf("%d",&n);
printf("enter the values");
if(n/2!=0)
{
N=(n+1)/2;
}
else{
N=n/2;
}
printf("%d N value",N);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
b[i]=a[i];
}
for(i=0;i<n;i++)
{
printf("%d ",b[i]);
}
printf("\n");

for(i=0;i<N;i++)
{
for(k=i+1;k<N;k++)
{
if(b[i]<b[k])
{
temp=b[i];
b[i]=b[k];
b[k]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d ",b[i]);
}
printf("\n");
for(i=0;i<n;i++)
{
if(a[i]==b[0])
{
t=t+b[0];
printf("%d",t);
}
}
for(i=0;i<n;i++)
{
if(a[i]==b[1])
{
t=t+b[1]+a[i+3]+a[i+4];
}
}
printf("%d",t);
}
