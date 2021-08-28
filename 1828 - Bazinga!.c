#include <stdio.h>
#include <string.h>
int main() {
 
    int i, x;
    char  a[8], b[8];
    
    scanf("%d", &x);
    for(i=0;i<x; i++){
        scanf("%s", a);
        scanf("%s", b);
        
        if(strcmp(a,b)==0)
            printf("Caso #%d: De novo!\n", i+1);
            
        else if(strcmp(a,"tesoura")==0){
            if(strcmp(b,"Spock")==0 || strcmp(b,"pedra")==0)
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            else if(strcmp(b,"papel")==0 || strcmp(b,"lagarto")==0)
                printf("Caso #%d: Bazinga!\n", i+1);
        }    
        else if(strcmp(a,"papel")==0){
            if(strcmp(b,"lagarto")==0 || strcmp(b,"tesoura")==0)
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            else if(strcmp(b,"pedra")==0 || strcmp(b,"Spock")==0)
                printf("Caso #%d: Bazinga!\n", i+1);
        }    
        else if(strcmp(a,"pedra")==0){
            if(strcmp(b,"Spock")==0 || strcmp(b,"papel")==0)
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            else if(strcmp(b,"tesoura")==0 || strcmp(b,"lagarto")==0)
                printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if(strcmp(a,"lagarto")==0){
            if(strcmp(b,"tesoura")==0 || strcmp(b,"pedra")==0)
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            else if(strcmp(b,"Spock")==0 || strcmp(b,"papel")==0)
                printf("Caso #%d: Bazinga!\n", i+1);
        }
        else if(strcmp(a,"Spock")==0){
            if(strcmp(b,"lagarto")==0 || strcmp(b,"papel")==0)
                printf("Caso #%d: Raj trapaceou!\n", i+1);
            else if(strcmp(b,"pedra")==0 || strcmp(b,"tesoura")==0)
                printf("Caso #%d: Bazinga!\n", i+1);
        }
            
    }
 
    return 0;
}
