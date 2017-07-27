#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int s,j;
    scanf("%d",&s);
    int a[s][s];
 int i, k = 0, l = 0;
int inp=1,m=s,n=s;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
          a[k][i]=inp++;
        }
        k++;
        for (i = k; i < m; ++i)
        {
          a[i][n-1]=inp++;
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
           a[m-1][i]=inp++;
            }
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                a[i][l]=inp++;
            }
            l++;    
        }   
    }
    int c=1,ar[10000];
    k=0;
    for(i=0;i<s;i++){
        for( j=0;j<s;j++){
            printf("%d ",a[i][j]);
            if(a[i][j]%11==0){
                c++;
            }
        }
        printf("\n");
    }
    printf("Total Power points : %d\n",c);
    printf("(0,0)\n");
    
k=0,l=0,m=s,n=s;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
          if(a[k][i]%11==0){
           printf("(%d,%d)\n",k,i);
          }
        }
        k++;
        for (i = k; i < m; ++i)
        {
        if(a[i][n-1]%11==0){
           printf("(%d,%d)\n",i,n-1);
          }
        }
        n--;
        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
          if(a[m-1][i]%11==0){
          printf("(%d,%d)\n",m-1,i);
          }
            }
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
            {
                if(a[i][l]%11==0){
          printf("(%d,%d)\n",i,l);
          }
            }
            l++;    
        }   
    }
    return 0;
}
