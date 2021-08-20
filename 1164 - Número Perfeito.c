#include <stdio.h>
 
int main() {
 
    int i, j, n, x, somap;
    
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &x);
        somap = 0;
        
        for(j = 1; j<x; j++){
            if(x%j==0)
                somap+=j;
        }
        if(somap==x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);
    }
 
    return 0;
}
