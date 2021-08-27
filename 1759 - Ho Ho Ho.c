#include <stdio.h>
 
int main() {
 
    int i, x;
    
    scanf("%d", &x);
    
    for(i = 0; i<x; i++){
        if(i<x-1)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
 
    return 0;
}
