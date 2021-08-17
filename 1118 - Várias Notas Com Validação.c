#include <stdio.h>
 
int main() {
 
    int cont = 0, op=1;
    float a, soma;
    while(op==1){
        while(cont<2){
            scanf("%f", &a);
            if(a>=0 && a<=10){
                soma+=a;
                cont++;
            }
            else
                printf("nota invalida\n");
        }
        printf("media = %.2f\n", soma/2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &op);
        while(op!=1 && op!=2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
        }
        cont = 0;
        soma = 0;
    }
    return 0;
}
