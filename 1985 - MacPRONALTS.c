#include <stdio.h>
 
int main() {
    
    int i, x, cod, quant;
    float soma = 0;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d%d", &cod, &quant);
        if(cod==1001)
            soma+=1.50*quant;
        else if(cod==1002)
            soma+=2.50*quant;
        else if(cod==1003)
            soma+=3.50*quant;
        else if(cod==1004)
            soma+=4.50*quant;
        else if(cod==1005)
            soma+=5.50*quant;
    }
    printf("%.2f\n", soma);
    return 0;
}
