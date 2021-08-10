#include <stdio.h>

int main() {
 
    int hri, mini, hrf, minf, tpf;                                                       /*variaveis de hr e minutos, iniciais e finais*/
                                                     
    scanf("%d%d%d%d", &hri, &mini, &hrf, &minf);                                         /*leitura e atribuicao*/

    if(hri>=hrf){                                                                        /*testa se é ou nao no dia seguinte e calcula*/
        if(minf == mini && hrf == hri)
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        else if(mini<minf)
            printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", minf - mini);
        else{
            tpf = (hrf*60+minf)+(24*60)-(hri*60+mini);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tpf/60, tpf%60);
        }
    }
    else{                                                                                /*senao converte para minuto e subtrai*/
        tpf = (hrf*60+minf)-(hri*60+mini);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tpf/60, tpf%60);              /*converte para hora e minutos restantes e imprime*/

    }                                        
    return 0;
}
