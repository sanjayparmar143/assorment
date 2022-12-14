#include<stdio.h>

main(){
	
	int n, larg1 = 0, larg2 = 0, t = 0;
	
	printf("Enter Size Of Array :- ");
	scanf("%i",&n);
	
	int a[n];
	
	int i;
	
	for(i=0; i<n; i++){
		
		
		scanf("%i",&a[i]);
	}
	
    larg1 = a[0];
    larg2 = a[1];
 
    if (larg1 < larg2)
    {
        t = larg1;
        larg1 = larg2;
        larg2 = t;
    }
 
    for (i = 2; i < n; i++){
    	
        if (a[i] > larg1){
        	
            larg2 = larg1;
            larg1 = a[i];
        }
        
		else if (a[i] > larg2 && a[i] != larg1){
			
            larg2 = a[i];
        }
    }
 
    printf ("The Second larg = %i\n", larg2);
 
}

