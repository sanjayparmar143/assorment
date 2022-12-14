#include<stdio.h>  
   
main(){  


    int r, c;  
    int i, j;      
 
    int a[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};  
  
    int b[3][3] = {90, 80, 70, 60, 50, 40, 30, 20, 10};  
  
    r = (sizeof(a)/sizeof(a[0]));  
    c = (sizeof(a)/sizeof(a[0][0]))/r;  
      
    int total[r][c];  
      
     for(i = 0; i < r; i++){  
       
	    for(j = 0; j < c; j++){  
       
	        total[i][j] = a[i][j] + b[i][j];  
       
	    }  
    }  
      
    printf("Addition :- \n");  
    
	for(i = 0; i < r; i++){  
    
	    for(j = 0; j < c; j++){  
    
	       printf("%d ", total[i][j]);  
    
	    }  
    
	    printf("\n");  
    }  
 
}
