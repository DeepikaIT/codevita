#include&lt;stdio.h&gt;
int main()
{ int num1, num2, i, j, flag, temp, count =
0,prime[349],k=1,p,l,valid[349],z=0,hmin,hmax,mmin,mmax,inp
ut;
scanf(&quot;%d&quot;,&amp;input);
num1=2,num2=2359; //to generate prime
number upto 2359
temp =num1 ;
if ( num1 % 2 == 0)

{
num1++;
}
for (i = num1; i &lt;= num2; i = i + 2)
{
flag = 0;
for (j = 2; j &lt;= i / 2; j++)
{
if ((i % j) == 0)
{
flag = 1;
break;
}
}
if (flag == 0)
{
prime[0]=2;
prime[k]=i;

k++;
count++;
}
}//printf(&quot;%d &quot;,count); // count to know total no. of prime
number in the range
l=0;
for(i=0;i&lt;349;i++)
{p=prime[i]%100;
if(p&lt;60)
{valid[l]=prime[i];
l++; //l value to know total valid prime
numbers
}
}
for(i=0;i&lt;210;i++)
{
for(j=i+1;j&lt;210;j++)
{
if(valid[j]-valid[i]==input)

{hmin=valid[i]/100;
mmin=valid[i]%100;
hmax=valid[j]/100;
mmax=valid[j]%100;

printf(&quot;%02d:%02d -
%02d:%02d&quot;,hmin,mmin,hmax,mmax);
z=z+1;
return 0;
}
}
}
if(z==0)
{printf(&quot;NONE&quot;);
}
}
