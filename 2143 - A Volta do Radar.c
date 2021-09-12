#include <stdio.h>
 
int main() {
 
    int i, x, n;
    
    scanf("%d", &x);
    while(x!=0){
    for(i = 0; i<x; i++){
        scanf("%d", &n);
        
        if((n-2)%2!=0)
            printf("%d\n", (n-1)*2+1);
        else
            printf("%d\n", (n-1)*2);
    }
        scanf("%d", &x);
    }
 
    return 0;
}
