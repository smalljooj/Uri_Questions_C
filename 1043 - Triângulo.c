#include <stdio.h>

int main() {
    
    double a,b,c;                               /*variaveis para os lados*/
    scanf("%lf%lf%lf", &a, &b, &c);

    if((a+b>c)&&(b+c>a)&&(a+c>b)){              /*verifica se e um triangulo, se for calcula e imprime perimetro*/
        printf("Perimetro = %.1lf\n", (a+b+c));
    }
    else                                        /*senao calcula a area do trapezio usando A e B para bases e C para altura*/
        printf("Area = %.1lf\n", ((a+b)*c)/2.0);

    return 0;
}
