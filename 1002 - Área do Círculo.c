#include <stdio.h>
 
int main() {
 
    double r, a;                 // Declara variaveis do tipo double, que será o Raio e a Área
    scanf("%lf", &r);            // Recebe do teclado o valor do raio
    a = 3.14159 * (r*r);         // Calcula a Área e armazena na variável "a" 
    
    printf("A=%.4lf\n", a);      // Printa a Área, no caso do "%.4lf", o "%.4" indica que será impresso com 4 dígitos após o ponto decimal,
                                 //e o "lf" é pra indicar que a váriavel é do tipo double
 
    return 0;
}
