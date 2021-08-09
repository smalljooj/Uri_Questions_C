#include <stdio.h>
 
int main() {
 
    int cod[2], numero[2], i;                              /*variaveis do cod e quantidade, e um array[2] pq serao duas entradas*/
    float valor[2], total = 0;                             /*variaveis do valor e total*/
    
    for(i = 0; i<2; ++i){
        scanf("%d%d%f", &cod[i], &numero[i], &valor[i]);   /*recebe os dados do usario*/
        total = total + valor[i] * numero[i];              /*calcula o valor*/
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);             /*imprime*/
    
 
    return 0;
}
