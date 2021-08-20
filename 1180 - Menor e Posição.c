#include <stdio.h>


int main() {
 
    int menor, pos = 0, x, i, n;
    scanf("%d", &n);
    
    for(i = 0; i<n; i++){
        scanf("%d", &x);
        if(i==0){
            menor = x;
        }else if(x<menor){
            menor = x;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
 
    return 0;
}
