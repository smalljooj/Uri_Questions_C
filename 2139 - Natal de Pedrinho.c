#include <stdio.h>
 
int main() {
 
    int ano[12] = {31, 29, 31, 30, 31, 30, 31,31, 30, 31, 30, 31};
 
    int i, m, d, soma;
    
    while((scanf("%d%d", &m, &d))!=EOF){
        soma = 0;
        for(i = 0; i<m-1; i++){
            soma+=ano[i];
        }
        soma+= d;
        if(360-soma==0)
            printf("E natal!\n");
        else if(360-soma==1)
            printf("E vespera de natal!\n");
        else if(360-soma<0)
            printf("Ja passou!\n");
        else
            printf("Faltam %d dias para o natal!\n", 360-soma);
    }
    return 0;
}
