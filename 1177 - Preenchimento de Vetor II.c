#include <stdio.h>
 
int main() {
 
    int i, x, aux = 0;
    scanf("%d", &x);
    for(i = 0; i<1000; i++, aux++){
        if(aux==x)
            aux=0;
        printf("N[%d] = %d\n", i, aux);
    }
 
    return 0;
}
