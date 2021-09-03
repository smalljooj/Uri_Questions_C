#include <stdio.h>
#include <string.h>

int main() {
 
    char a[10], b[10];
    int i, x;
    scanf("%d", &x);
    
    for(i=0; i<x; i++){
        scanf("%s%s", a, b);
        
        if(strcmp(a, "ataque")==0){
            if(strcmp(b, "ataque")==0)
                printf("Aniquilacao mutua\n");
            else
                printf("Jogador 1 venceu\n");
        }
        else if(strcmp(a, "pedra")==0){
            if(strcmp(b, "ataque")==0)
                printf("Jogador 2 venceu\n");
            else if(strcmp(b, "papel")==0)
                printf("Jogador 1 venceu\n");
            else
                printf("Sem ganhador\n");
        }
        else{
            if(strcmp(b, "papel")==0)
                printf("Ambos venceram\n");
            else
                printf("Jogador 2 venceu\n");
        }
            
    }
    
 
    return 0;
}
