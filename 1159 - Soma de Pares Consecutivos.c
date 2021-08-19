#include <stdio.h>
 
int main() {
 
    int i, x=1, soma, cont;
    
    for(;;){
        scanf("%d", &x);
        if(x==0)
            break;
        soma = cont = 0;
        for(i = x; cont<=4; i++)
            if(i%2==0){
                cont++;
                soma+=i;
            }
        printf("%d\n", soma);
    }
 
    return 0;
}
