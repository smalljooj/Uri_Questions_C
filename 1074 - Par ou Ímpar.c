#include <stdio.h>
 
int main() {
 
    int x, i, numeros;
    
    scanf("%d", &x);
    
    for(i = 0; i<x; i++){
        scanf("%d", &numeros);
        
        if(numeros==0){
            printf("NULL\n");
        }else if(numeros>0){
            if(numeros%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }else{
            if(numeros%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
    
        }
    }
 
    return 0;
}
