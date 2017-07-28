#include<stdio.h>
main()
{
int a[100],i,temp[100],HMS[6],x,z;
//printf("enter:");
for(i=0;i<9;i++)	
{
scanf("%1d,",&a[i]);
temp[i]=0;
}
for(i=0;i<=9;i++)	
{
if(a[i]==0)
temp[0]++;
else if(a[i]==1)
temp[1]++;
else if(a[i]==2)
temp[2]++;
else if(a[i]==3)
temp[3]++;
else if(a[i]==4)
temp[4]++;
else if(a[i]==5)
temp[5]++;
else if(a[i]==6)
temp[6]++;
else if(a[i]==7)
temp[7]++;
else if(a[i]==8)
temp[8]++;
else if(a[i]==9)
temp[9]++;
}
if(temp[0]>0||temp[1]>0)	
{
if(temp[1]==0)	
{
HMS[0]=0;	
temp[0]--;	
for(x=9;x>0;x--)
{	
if(temp[x]!=0)
{
HMS[1]=x;
temp[x]--;
break;
}
}

}
else
{
HMS[0]=1;
temp[1]--;
for(x=2;x>0;x--)
{
if(temp[x]!=0)
{
HMS[1]=x;
temp[x]--;
break;
}
}
}
if(HMS[0]==1&&HMS[1]!=2)
{
for(x=5;x>0;x--)
{
if(temp[x]!=0)
{
HMS[2]=x;
temp[x]--;
break;
}
}
for(x=9;x>0;x--)
{
if(temp[x]!=0)
{
HMS[3]=x;
temp[x]--;
break;
}
}
for(x=5;x>0;x--)
{
if(temp[x]!=0)
{
HMS[4]=x;
temp[x]--;
break;
}
}
for(x=9;x>0;x--)
{
if(temp[x]!=0)
{
HMS[5]=x;
temp[x]--;
break;
}
}
}
else	
{
if(temp[0]==4)
HMS[2]=HMS[3]=HMS[4]=HMS[5]=0;
else
goto z;
}
printf("%d%d:%d%d:%d%d",HMS[0],HMS[1],HMS[2],HMS[3],HMS[4],HMS[5]);
}
else 
z:	printf("\nimpossible\n");

}

