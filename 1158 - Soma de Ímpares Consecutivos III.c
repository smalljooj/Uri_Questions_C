#include <stdio.h>
 
int main() {
 
    int i, j, cont = 0;
    int n, a, b, soma;
    
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d%d", &a, &b);
        soma = 0;
        cont = 0;
        for(j=a;cont<b; j++)
            if(j%2!=0){
                cont++;
                soma+=j;
            }
        printf("%d\n", soma);
    } 
    return 0;
}
