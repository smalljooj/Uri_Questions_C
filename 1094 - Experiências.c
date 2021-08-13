#include <stdio.h>
 
int main() {
 
    
    char c;
    int x, i, cob;
    int coelhos = 0, ratos = 0, sapos = 0, cobaias = 0; 
    scanf("%d", &x);
 
    for(i = 0; i<x; i++){
        scanf("%d %c", &cob, &c);
        cobaias+=cob;
        if(c=='C')
            coelhos+=cob;
        else if(c=='R')
            ratos+=cob;
        else if(c=='S')
            sapos+=cob;
        
    }
    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %\n", (float) coelhos *100 /cobaias);
    printf("Percentual de ratos: %.2f %\n", (float) ratos *100 /cobaias);
    printf("Percentual de sapos: %.2f %\n", (float) sapos *100 /cobaias);
    
    return 0;
}
