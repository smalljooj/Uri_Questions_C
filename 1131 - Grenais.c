#include <stdio.h>
 
int main() {
 
    int golgremio, golinter, op = 1, cont=0;
    int vitgremio = 0, vitinter = 0, empates = 0;
 
    while(op==1){
        
        scanf("%d%d", &golinter, &golgremio);
        if(golgremio>golinter)
            vitgremio++;
        else if(golgremio<golinter)
            vitinter++;
        else
            empates++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
        cont++;
    }
    printf("%d grenais\n", cont);
    printf("Inter:%d\n", vitinter);
    printf("Gremio:%d\n", vitgremio);
    printf("Empates:%d\n", empates);
    if(vitinter>vitgremio)
        printf("Inter venceu mais\n");
    else if(vitinter<vitgremio)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
