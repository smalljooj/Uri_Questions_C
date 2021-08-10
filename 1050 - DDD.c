#include <stdio.h>

/*QUestao extremamente simples so declarar variavel, atribuir, verificar e imprimir*/

int main() {
    
    int cod;
    scanf("%d", &cod);

    if(cod==61)
        printf("Brasilia\n");
    else if(cod==71)
        printf("Salvador\n");
    else if(cod==11)
        printf("Sao Paulo\n");
    else if(cod==21)
        printf("Rio de Janeiro\n");
    else if(cod==32)
        printf("Juiz de Fora\n");
    else if(cod==19)
        printf("Campinas\n");
    else if(cod==27)
        printf("Vitoria\n");
    else if(cod==31)
        printf("Belo Horizonte\n");
    else
        printf("DDD nao cadastrado\n");
    return 0;
}
