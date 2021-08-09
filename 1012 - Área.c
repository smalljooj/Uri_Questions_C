#include <stdio.h>
#include <math.h>
int main() {
 
    double a, b, c;                                 /*variaveis necessarias*/
    scanf("%lf%lf%lf", &a, &b, &c);                 /*recebe os valores*/
    
    printf("TRIANGULO: %.3lf\n", a*c/2.0);          /*calcula e imprime*/
    printf("CIRCULO: %.3lf\n", 3.14159*pow(c, 2));
    printf("TRAPEZIO: %.3lf\n", (a+b)*c/2.0);
    printf("QUADRADO: %.3lf\n", pow(b, 2));
    printf("RETANGULO: %.3lf\n", a*b);
 
    return 0;
}
