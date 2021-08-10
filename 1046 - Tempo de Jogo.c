#include <stdio.h>

int main() {
 
    int hri, hrf;                                                  /*variaveis para hora final e inicial*/
    scanf("%d%d", &hri, &hrf);                                     /*ler e atribuir valores nas variaveis*/

    if(hri>hrf || hri==hrf)                                        /*caso a hora final seja menor ou igual que a inicial quer dizer que entrou no outro dia*/
        printf("O JOGO DUROU %d HORA(S)\n", 24 - hri + hrf);       /*calcula levando em consideracao as 24 horas e imprime*/
    else                                                           /*senao calcula normalmente a hora final menos a inicial*/
        printf("O JOGO DUROU %d HORA(S)\n", hrf - hri);
    return 0;
}
