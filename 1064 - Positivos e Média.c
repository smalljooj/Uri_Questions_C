#include <stdio.h>
 
int main() {
 
    float nun, soma = 0;                      /*variaveis para o numero que foi digitado e a soma para a media*/
    int i, cont;                              /*variaveis do for e contador*/
    
    for(i=0; i<6; i++){                       /*loop para ler e testar se os numeros sao positivos, caso for soma e atribui 1 no contador*/
        scanf("%f", &nun);
        if(nun>0){
            cont++;
            soma+=nun;
        }
    }
    printf("%d valores positivos\n", cont);    /*imprime a quantidade de positivos*/
    printf("%.1f\n", soma/cont);               /*imprime a media*/
    return 0;
}
