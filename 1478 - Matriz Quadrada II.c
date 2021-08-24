#include <stdio.h>

int main() {
 
    int i, j, o, x;
    
    while(1){
        scanf("%d", &x);
        if(x<1)
            break;

        for(i = 1; i<x+1; i++){
            o = i+1;
            for(j = 1;j<i;j++){
                printf("%3d ", (--o));
            }
            for(j = i; j<x+1; j++){
                printf("%3d", j+1-i);
                if(j<x)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
 
    return 0;
}
