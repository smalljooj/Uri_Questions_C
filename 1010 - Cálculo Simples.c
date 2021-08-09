#include <stdio.h>
 
int main() {
 
    int cod[2], numero[2], i;
    float valor[2], total = 0;
    
    for(i = 0; i<2; ++i){
        scanf("%d%d%f", &cod[i], &numero[i], &valor[i]);
        total = total + valor[i] * numero[i];
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
 
    return 0;
}