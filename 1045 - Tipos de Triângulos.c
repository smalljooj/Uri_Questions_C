#include <stdio.h>

/*
  Essa fiz questao de fazer com ifs, pra dar uma exercitada leve.
*/
int main() {
 
    float a, b, c, d;             /*variaveis necessarias, a b c para lados, d para auxiliar na troca*/
    scanf("%f%f%f", &a,&b,&c);    /*ler e atribui valor as variaveis*/

    if(a<b){                 /*deixa os valores em ordem decrescente*/
        d = b;
        b = a;
        a = d;
    }if(b<c){
        d = c;
        c = b;
        b = d;
    }if(a<b){
        d = b;
        b = a;
        a = d;
    }
    
    if(a>=(b+c))                                /*verifica se existe triangulo*/
        printf("NAO FORMA TRIANGULO\n");
    else{                                       /*senao verifica que tipos de triangulo ele é*/
        if((a*a)==((b*b)+(c*c)))
            printf("TRIANGULO RETANGULO\n");
        if((a*a)>((b*b)+(c*c)))
            printf("TRIANGULO OBTUSANGULO\n");
        if((a*a)<((b*b)+(c*c)))
            printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c)
            printf("TRIANGULO EQUILATERO\n");
        else if((a==b || b==c || c==a))
            printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
