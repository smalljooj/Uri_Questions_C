#include <stdio.h>
 
int main() {
 
    int cont = 0;
    float a, soma = 0;
    
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
 
    return 0;
}
