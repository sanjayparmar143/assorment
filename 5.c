#include <stdio.h>  

main(){
	int i,n;
    int a[i];
  
    printf("Enter size :- ");
    scanf("%i", &n);
 
    printf("Enter element :- \n");
    
	for(i=0; i<n; i++){
    	
        scanf("%i", &a[i]);
    
	}
 
    printf("All even number\n");
    
	for(i=0; i<n; i++){
         
        if(a[i]%2 == 0){
        	
            printf("%i\n", a[i]);
        	
		}

    }   

}  
