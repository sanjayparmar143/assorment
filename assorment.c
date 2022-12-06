#include <stdio.h>
 
main(){
	
    int a[1000],i,n;
   
    printf("Enter size :- ");
    scanf("%i", &n);
 
    printf("Enter element :- \n ");
    
	for(i=0; i<n; i++){
    	
        scanf("%i", &a[i]);
    
	}
 
    printf("All negative element :- ");
    
	for(i=0; i<n; i++){
         
        if(a[i]<0){
        	
            printf("%i\t", a[i]);
        
	}
    }
}
