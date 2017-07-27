#include <stdio.h>

int main(void) 
{
    int a,n,j;
    static int b=2;
    
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	    for(j=0;j<a;j++){
	        
	printf("%10.5d",(b*(2*b-1)));
	b=b+2;
	        
	    }
	    printf("\n");
	}
	return 0;
}

