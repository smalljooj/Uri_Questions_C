#include <stdio.h>
 
int main() {
 
    int a, b;                                    /*variaveis necessarias*/

    scanf("%d%d", &a,&b);                        /*leitura e atribuição nas variaveis*/

    if(b%a==0 || a%b==0)                         /*testa se são multiplos*/
        printf("Sao Multiplos\n");
    else
        printf("Nao sao Multiplos\n");
    
    return 0;
}
