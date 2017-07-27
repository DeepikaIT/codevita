
#include <stdio.h>
 int main()
 {
 	int i,j,n,k=1,a[100][100],c=0,count=0,z=1;
 	scanf("%d",&n);
 	count=((n*n)/11)+1;
 	int b[count],o[count];
 	if(n>0&&n<=100)
 	{
 		b[0]=0;o[z]=0;
 while(c<=n/2)
 {
 	for(i=0+c;i<(n-c);i++)
 	{
 		for(j=0+c;j<(n-c);j++)
 		{
 		if(i==0+c||j==(n-c-1))
 		{
 		a[i][j]=k;if(k%11==0){b[z]=i;o[z]=j;z++;
 		}
 			k++;	 }
 	}
 	}
 	 	for(i=(n-c-1);i>=(0+c);i--)
 	{
 		for(j=(n-c-1);j>=(0+c);j--)
 		{
 		if((i==(n-c-1)&&j!=(n-c-1))||(j==(0+c)&&i!=(0+c)))
 		{
 		a[i][j]=k; if(k%11==0){b[z]=i;o[z]=j;z++;
 		}

 		 k++;
 		}
 	}
 	}
 c++;
 }
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<n;j++)
 		{
 			printf("%d",a[i][j]);
 			if(j<(n-1)) printf("\t");
 		}
 		printf("\n");
 	} 	printf("Total Power points : %d",((n*n)/11)+1);

 	for(i=0;i<z;i++)
 	{
 		printf("\n(%d,%d)",b[i],o[i]);
 	}
 	}
 	else
 	{
 	    printf(" ");
 	}
