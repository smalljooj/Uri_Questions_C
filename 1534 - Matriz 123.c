#include <stdio.h>

int main() {
 
    int i, j, x;
    
    while((scanf("%d", &x))!= EOF){
        
        for(i = 0; i<x; i++){
            for(j = 0; j<x;j++){
                if((j == (x-1)-i) && !(i==0 && j==0))
                    printf("2");
                else if(j == i)
                    printf("1");
                else
                    printf("3");
                
            }

            printf("\n");
        }
        
    }
    return 0;
}
