#include <stdio.h>
 
int main() {
 
    int i, j, x, cont =1, soma;
    
    while((scanf("%d", &x))!=EOF){
        soma = 1;
        for(i=1;i<=x;i++)
            soma+=i;
        if(soma==1)
            printf("Caso %d: %d numero\n", cont, soma);
        else
            printf("Caso %d: %d numeros\n", cont, soma);

        for(i=0; i<=x; i++){
            if(i==0)
                j=0;
            else
                j=i-1;
            for(;j>=0;j--){
                printf("%d", i);
                if(i<x || j>0)
                    printf(" ");
            }
        }
        cont++;
        printf("\n\n");
        
    }
 
    return 0;
}
