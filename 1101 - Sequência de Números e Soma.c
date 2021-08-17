#include <stdio.h>
 
int main() {
 
    int a, b, soma = 0;
    for(;;){
        scanf("%d%d", &a, &b);
        if(a <=0 || b<=0)
            return 0;
        
        if(a>b){
            for(;a>=b;b++){
                printf("%d ", b);
                soma+=b;
            }
            printf("Sum=%d\n", soma);
        }else{
            for(;b>=a;a++){
                printf("%d ", a);
                soma+=b;
            }
            printf("Sum=%d\n", soma);
        }
        soma = 0;
    }
    return 0;
}
