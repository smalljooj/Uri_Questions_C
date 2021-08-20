#include <stdio.h>
 
int main() {
 
    int a[10], i, x;
    
    for(i = 0; i<10; i++){
        scanf("%d", &x);
        if(x<1)
            a[i] = 1;
        else
            a[i] = x;
    }
    for(i = 0; i<10; i++){
        printf("X[%d] = %d\n", i, a[i]);
    }
    return 0;
}
