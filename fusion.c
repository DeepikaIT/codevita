#include &lt;stdio.h&gt;
int energy[1000][1000];
int atom[1000][1000];
int a[1000];
int main()
{
int n;
scanf(&quot;%d\n&quot;,&amp;n);
for(int i=0;i&lt;n;i++)
{
scanf(&quot;%d &quot;,&amp;a[i]);
atom[i][i] = a[i];
}

for(int j = 1 ; j &lt; n ; j++)
{
for(int i = 0 , k = j ; i &lt; n &amp;&amp; k &lt; n ; i++,k++)
{
for(int l = i , r = i + 1 ; r &lt;= k ; r++,l++)
{
if(energy[i][l] + energy[r][k] + atom[i][l] * atom[r][k] &gt;= energy[i][k])
{
energy[i][k] = energy[i][l] + energy[r][k] + atom[i][l] * atom[r][k];
atom[i][k] = (atom[i][l] * atom[r][k]) % 199;
}
}
}
}
printf(&quot;%d\n&quot;,energy[1][n-1]);
return 0;
}
