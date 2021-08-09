#include <stdio.h>
 
int main() {
 
    int nfunc, htrab;                                                 /*declaracao de variaveis do numero do funcionario e horas trabalhadas*/
    float ganhophr, salario;                                          /*declaracao de variaveis do ganho por hora e salario final*/
    scanf("%d%d%f", &nfunc, &htrab, &ganhophr);                       /*recebe os valores e atribui nas variaveis*/
    salario = ganhophr*htrab;                                         /*calcula o salario*/
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", nfunc, salario);        /*imprime*/
 
    return 0;
}
