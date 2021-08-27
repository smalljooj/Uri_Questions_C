#include <stdio.h>
 
int main() {
 
    int i, x, r1,r2;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d%d", &r1, &r2);
        printf("%d\n", r1+r2);
    }
 
    return 0;
}
