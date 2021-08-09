#include <stdio.h>
#include <math.h>                                 /*Nesse adicionamos a biblioteca math, para usarmos operacoes matematicas como exponenciacao e raiz quadrada*/

int main() {
 
    double r, v, pi = 3.14159;                    /*variaveis para o raio e volume e pi*/
    
    scanf("%lf", &r);                             /*recebe o valor do raio*/
    
    v = (4 * pi * pow(r, 3))/3;                   /*calcula o volume, a funcao pow serve para fazer exponenciacao*/
    printf("VOLUME = %.3lf\n", v);                /*imprime*/
    
 
    return 0;
}
