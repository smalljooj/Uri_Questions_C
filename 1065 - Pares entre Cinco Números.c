#include <stdio.h>
 
int main() {
 
    int i, nun, cont = 0;               /*variaveis para o for, a leitura e o contador*/
    
    for(i = 0; i<5; i++){
        scanf("%d", &nun);              /*ler os valores*/
        if(nun%2==0)                    /*verifica se é par*/
            cont++;                     /*conta*/
    }
    printf("%d valores pares\n", cont); /*imprime*/
    return 0;
}
