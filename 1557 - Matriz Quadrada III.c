#include <stdio.h>
#include <stdlib.h>

int main() {
 
    int **m, i, j, x, cont, dig, valor;

    for(;;){
        scanf("%d", &x);
        if(x==0)
            break;

        m = malloc(x * sizeof(int*));

        for(i = 0; i<x; i++)
            m[i] = malloc(x * sizeof(int));

        cont = 1;
        for(i = 0; i<x; i++){
            for(j = 0; j<x; j++){

                if(j ==0)
                    m[i][j] = cont;
                else
                    m[i][j] = m[i][j-1] *2;
            }
            cont*=2;
        }
        dig = 0;
        valor = m[x-1][x-1];
        while(valor>0){
            valor = valor/10;
            dig++;
        }


        for(i = 0; i<x; i++){
            for(j = 0; j<x; j++){
                printf("%*d", dig, m[i][j]);
                if(j<x-1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    for(i = 0; i<x; i++)
       free(m[i]);
    free(m);

    return 0;
}
