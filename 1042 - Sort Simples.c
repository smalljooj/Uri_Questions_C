#include <stdio.h>

/*
    Nesse problema eu usei bubble sort por ser facil de implementar
    alem de eu querer exercitar o uso dele, mas daria para fazer usando ifs.
*/

int main() {
 
    int numeros[3], nun[3];                                 /*declarei um vetor para armazenar as entradas, e outro como backup*/
    int i, j, n;

    scanf("%d%d%d", &numeros[0], &numeros[1], &numeros[2]); /*recebi e atribui o valores no vetor*/

    for(i = 0; i<3; i++){                                   /*fiz o backup*/
        nun[i] = numeros[i];
    }

    for(i = 2; i>0; i--){                                   /*ordenei com bubble sort*/
        for(j = 0; j<i; j++){
            if(numeros[j]> numeros[j+1]){
                n = numeros[j+1];
                numeros[j+1] = numeros[j];
                numeros[j] = n;
            }
        }
    }
    for(i = 0; i<3; i++){                                   /*imprimi o vetor ordenado*/
        printf("%d\n", numeros[i]);
    }
    printf("\n"); 
    for(i = 0; i<3; i++){                                   /*imprimi o backup*/
        printf("%d\n", nun[i]);
    }

    return 0;
}
