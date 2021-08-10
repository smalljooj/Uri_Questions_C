#include <stdio.h>

int main() {
    
    float salario, bonus;       
    int porcentagem;                                    /*variaveis...*/
    scanf("%f", &salario);                              /*leitura*/

    if(salario<=400){                                   /*verifica em que faixa salarial esta e calcula o bonus*/
        bonus = salario*0.15;
        salario+=bonus;
        porcentagem = 15;
    }else if(salario<=800){
        bonus = salario*0.12;
        salario+= bonus;
        porcentagem = 12;
    }else if(salario<=1200){
        bonus = salario*0.10;
        salario+= bonus;
        porcentagem = 10;
    }else if(salario<=2000){
        bonus = salario*0.07;
        salario+= bonus;
        porcentagem = 7;
    }else{
        bonus = salario*0.04;
        salario+= bonus;
        porcentagem = 4;
    }
    printf("Novo salario: %.2f\n", salario);             /*imprime*/
    printf("Reajuste ganho: %.2f\n", bonus);
    printf("Em percentual: %d %\n", porcentagem);
    
    return 0;
}
