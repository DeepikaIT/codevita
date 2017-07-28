#include &lt;stdio.h&gt;
int main(void)
{
int s,r,a[200],i,t1,t2,c=0;
scanf(&quot;%d %d&quot;,&amp;s,&amp;r);
for(i=0;i&lt;s;i++)
{
scanf(&quot;%d&quot;,&amp;a[i]);
}
while(r&gt;0)
{
c=0;
scanf(&quot;%d %d&quot;,&amp;t1,&amp;t2);
for(i=0;i&lt;s;i++)
{
if((a[i]&gt;t1)&amp;&amp;(a[i]&lt;t2))
{

c++;
}
}
printf(&quot;%d\n&quot;,c);
r-- ;
}
return 0;
}
