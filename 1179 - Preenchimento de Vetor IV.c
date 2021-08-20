#include <stdio.h>
 
int main() {
 
    int a[5], b[5];
    int x, i, j, conta = 0, contb = 0;
    
    for(i = 0; i<15; i++){
        scanf("%d", &x);
        if(x%2==0){
            a[conta] = x;
            conta++;
        }
        else{
            b[contb] = x;
            contb++;
        }
        if(conta==5){
            for(j = 0; j<5; j++)
                printf("par[%d] = %d\n", j, a[j]);
                conta=0;
        }
        if(contb==5){
            for(j = 0; j<5; j++)
                printf("impar[%d] = %d\n", j, b[j]);
                contb=0;
        }
    }
    for(j = 0; j<contb; j++)
        printf("impar[%d] = %d\n", j, b[j]);
    for(j = 0; j<conta; j++)
        printf("par[%d] = %d\n", j, a[j]);
 
    return 0;
}
