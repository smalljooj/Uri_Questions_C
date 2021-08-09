#include <stdio.h>
 
int main() {
 
    double a;                                       /*variavel para verificar em qual intervalo ela esta*/
    scanf("%lf", &a);                               /*recebe o valor a ser testado*/
    if(a>=0){
        if(a<=25){                                  /*testa se esta no intevalo de [0,25], e retorna 0 para fechar o programa*/
            printf("Intervalo [0,25]\n");
            return 0;
        }else if(a<=50){                            /*testa se esta no intevalo de (25,50], e retorna 0 para fechar o programa*/
            printf("Intervalo (25,50]\n");
            return 0;
        }else if(a<=75){                            /*testa se esta no intevalo de (50,75], e retorna 0 para fechar o programa*/  
            printf("Intervalo (50,75]\n");
            return 0;
        }else if(a<=100){                           /*testa se esta no intevalo de (75,100], e retorna 0 para fechar o programa*/
            printf("Intervalo (75,100]\n");
            return 0;
        }
    }
    printf("Fora de intervalo\n");                  /*caso nao tenha entrado nas condicoes, imprime fora de intervalo*/
    return 0;
}
