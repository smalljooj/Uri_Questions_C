#include <stdio.h>
 
int main() {
 
    char nome[61];                                /*variavel para o nome*/
    double salario, vendas;                       /* variaveis para salario e vendas*/
    
    scanf("%s%lf%lf", nome, &salario, &vendas);   /*atribui valor as variaveis*/
    salario = salario + vendas*0.15;              /* calcula o salario*/
    printf("TOTAL = R$ %.2lf\n", salario);        /*imprime*/
 
    return 0;
}
