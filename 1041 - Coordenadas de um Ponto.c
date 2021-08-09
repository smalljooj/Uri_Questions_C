#include <stdio.h>


int main() {
 
    double x,y;                     /*variaveis para o Y e o X do ponto*/

    scanf("%lf%lf", &x, &y);        /*atribui os valores x e y*/

    if(x==0 || y==0){               /*verifica se esta na origem ou sobre um dos eixos*/
        if(x==0 && y==0)
            printf("Origem\n");
        else if(x==0)
            printf("Eixo Y\n");
        else 
            printf("Eixo X\n");
    }                               /*senao x ou y nao for 0, verifica em qual quadrante o ponto esta*/
    else{
        if(x>0){
            if(y>0)
                printf("Q1\n");
            else
                printf("Q4\n");
        }
        else{
            if(y>0)
                printf("Q2\n");
            else
                printf("Q3\n");
        }
    } 

    return 0;
}
