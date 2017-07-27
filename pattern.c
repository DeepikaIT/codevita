
      0 1 2 3 4  
0 |  *  *  *  *  *  |
1 |     *  *  *  *  |
2 |         *  *  *  |
3 |            *  *  |
4 |               *  |


understand the logic...

if j>=i then print  *
else print ( space printf(" "); or  tab printf("\t"); )

i=0  =>  j=0,1,2,3,4
i=1  =>  j=1,2,3,4
i=2  =>  j=2,3,4
i=3  =>  j=3,4
i=4  =>  j=4



#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(j>=i)
                printf("*\t");
            else 
                printf("\t");
	    }
	    printf("\n");
	}
	return 0;
}


Input :
--------
5

Output:
-----------


*	*	*	*	*	
	*	*	*	*	
		*	*	*	
			*	*	
				*	


==============================================================


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(i==0 || i==(n/2) || i==n-1 || (j==0 && i<(n/2)) || (j==n-1 && i>(n/2)))
                printf("*");
            else 
                printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}


Input :
--------
7                 //any odd number 

Output
---------

*******
*      
*      
*******
        *
        *
*******


================================================


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(( j==0 || i==n-1 || j==n-1) && !(i==n-1 && j==n-1 || i==n-1 && j==0) )
                printf("*");
            else 
                printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}

Input :
-------

7   

Output :
---------

*            *
*            *
*            *
*            *
*            *
*            *
  * * * * * 



===============================================

#include <stdio.h>

int main(void) {
	int i,j,n,x,y;
	scanf("%d",&n);
	x=n/2+1;
	y=1;
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if( j==0 ||(i==n/2 && j<=n/2)|| (i==0 && j<=n/2)|| (i<=n/2 && j==n/2))
                printf("*");
            else if((x==i && y==j)){
                printf("*");
                x++;y++;
            }else printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}

input :
-------
7

Output:
----------
* * * *   
*      *   
*      *   
* * * *   
* *     
*   *    
*     *  

==========================================


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if( i==0 || j==0 || i==n/2 || i == n-1)
                printf("*");
            else printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}

Input :
--------
7

Output :
----------

*******
*      
*      
*******
*      
*      
*******

=========================================

#include <stdio.h>

int main(void) {
	int i,j,n,x,y,a,b;
	scanf("%d",&n);
	b=n/2;
	x=n/2+1;
	y=1;a=0;
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(x==i && y==j){
                printf("*");
                x++;y++;
            }else if (a==i && b==j){
                printf("*");
                b--;a++;
            }else if(j==0)
                printf("*");
            else printf(" ");
	    }
	    printf("\n");
	}
	return 0;
}


input :
-------
7

output :
---------
*    *   
*  *    
* *     
*      
* *     
*  *    
*    *   






"Life is an one time opportunity. Let's live it."

On Wed, Jun 21, 2017 at 10:58 AM, Manoj <mano.bgmr123@gmail.com> wrote:
Hi,

========================================

Print n * in a row
*********************

#include <stdio.h>

int main(void) {
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)             //loop iteration 0,1,2,3,4 ( n= 5 times )
	    printf("*");
	return 0;
}

input :
-------- 
 5
 
output :
----------
******

=========================================

Print n * in a column
*********************

#include <stdio.h>

int main(void) {
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    printf("* \n");            //  \n for new line
	return 0;
}

input :
-------- 
 5
 
output :
----------
*
*
*
*
*
=============================================



#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){                 //iteration   i=0  => j=0,1,2
	    for(j=0;j<n;j++){             //                  i=1  => j=0,1,2
            printf("*");	                     //                 i=2  => j=0,1,2
	    }
	}
	return 0;
}

Input :
--------
3 

output :
----------

*********                       // ( nxn times ) 

====================================================


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){               //iteration   i=0 , j=0,1,2   
	    for(j=0;j<n;j++){            //                  i=1 , j=0,1,2              
            printf("*");	                  //                 i=2 , j=0,1,2
	    }
	    printf("\n");                   //new line whenever j loop (inner-loop) ends
	}
	return 0;
}

Input :
--------
3 

output :
----------
***
***
***

========================================================
     0 1 2 3 4  
0 |  *              |
1 |     *           |
2 |        *        |
3 |           *     |
4 |              *  |


understand the logic...

if i=j then print *
else print ( space printf(" "); or  tab printf("\t"); )
 


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(i==j)
                printf("*");
            else 
                printf("\t");             // \t - to print tab.
	    }
	    printf("\n");
	}
	return 0;
}

input :
--------
5

output :
----------
*				
	*			
		*		
			*	
				*

=========================================================

     0 1 2 3 4  
0 |              *  |
1 |            *    |
2 |         *       |
3 |      *          |
4 |   *             |



understand the logic...

if j=n-1-i then print  *
else print ( space printf(" "); or  tab printf("\t"); )
 
where to print star,

i =0      j =5 -1 - 0 =4     
i =1      j =5 -1 - 1 =3 
i =2      j =5 -1 - 2 =2
i =3      j =5 -1 - 3 =1 
i =4      j =5 -1 - 3 =0 


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(j==n-1-i)
                printf("*");
            else 
                printf("\t");
	    }
	    printf("\n");
	}
	return 0;
}

input :
--------
5

output :
----------
				*
			*	
		*		
	*			
*				



======================================================
      0 1 2 3 4  
0 |  *              |
1 |  *  *           |
2 |  *  *  *        |
3 |  *  *  *  *     |
4 |  *  *  *  *  *  |


understand the logic...

if j<=i then print  *
else print ( space printf(" "); or  tab printf("\t"); )

i=0  =>  j=0
i=1  =>  j=0,1 
i=2  =>  j=0,1,2
i=3  =>  j=0,1,2,3
i=4  =>  j=0,1,2,3,4


#include <stdio.h>

int main(void) {
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){ 
	    for(j=0;j<n;j++){
	        if(j<=i)
                printf("*\t");
	    }
	    printf("\n");
	}
	return 0;
}

input :
--------
5

output :
----------
*	
*	*	
*	*	*	
*	*	*	*	
*	*	*	*	*

============================================================

ok now, replace printf("*") with printf("%d",i)

and  replace printf("*") with printf("%d",j)

observe the out
