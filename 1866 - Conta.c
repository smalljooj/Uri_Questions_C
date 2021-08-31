#include <stdio.h>
 
int main() {
 
    int i, x, n;
    
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d", &n);
        printf("%d\n", n%2);
    }
    return 0;
}
