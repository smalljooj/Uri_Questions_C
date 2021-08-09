#include <stdio.h>
 
int main() {
 
    double valor;                   /*variaveis para o valor do item, o codigo e quantidade*/
    int cod, quant; 
    scanf("%d%d", &cod, &quant);    /*atribui valor as variaveis de codigo e quantidade*/
    switch(cod){                    /*switch serve para verificar qual o codigo e atribuir o valor correto a variavel valor*/
        case 1:
            valor = 4;
            break;
        case 2:
            valor = 4.5;
            break;
        case 3:
            valor = 5;
            break;
        case 4:
            valor = 2;
            break;
        case 5:
            valor = 1.5;
            break;
        default:
            valor = 0;
    }

    printf("Total: R$ %.2lf\n", valor*quant);   /*Calcula e imprime o valor final*/


    return 0;
}
