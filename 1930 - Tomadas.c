#include <stdio.h>
 
int main() {
 
    int i, soma = 0, x;
    for(i = 0; i<4; i++){
        scanf("%d", &x);
        if(i==3)
            soma+=x;
        else
            soma+=x-1;
    }
    printf("%d\n", soma);
    return 0;
}
