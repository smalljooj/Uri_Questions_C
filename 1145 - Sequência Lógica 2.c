#include <stdio.h>
 
int main() {
 
    int i, j, x, y;
    scanf("%d%d", &x, &y);
    
    for(i = 1; i<y;){
        for(j = 0;j<x; j++, i++){
            printf("%d", i);
            if(j!=x-1)
                printf(" ");
        }
        printf("\n");        
    }
    return 0;
}
