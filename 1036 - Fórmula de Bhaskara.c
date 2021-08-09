#include <stdio.h>
#include <math.h>


int main() {
 
    
    double a, b, c, x1, x2, delta;        /*variaveis necessarias*/
    scanf("%lf%lf%lf", &a, &b, &c);       /*recebe os valores da entrada padrao*/
    
    delta = (b*b)-(4*a*c);                /*calcula o delta*/
    if(delta<0 || a==0){                  /*tratamento de exececao, no caso delta menor que 0 e x igual a 0*/
        printf("Impossivel calcular\n");
        return 0;
    }
    x1 = (-(b) + sqrt(delta))/(2*a);      /*calcula baskara de x1*/
    x2 = (-(b) - sqrt(delta))/(2*a);      /*calcula baskara de x2*/
    
    printf("R1 = %.5lf\n", x1);             /*imprime*/
    printf("R2 = %.5lf\n", x2);

    return 0;
}
