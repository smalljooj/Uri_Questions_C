#include <stdio.h>
 
int main() {
 
    int i, a, b, soma = 0;
    scanf("%d%d", &a, &b);

    if(a<b)
        for(i = a; i<=b; i++){
            if(i%13!=0)
                soma+=i;
        }
    else if(b<a)
        for(i = b; i<=a; i++){
            if(i%13!=0)
                soma+=i;
        }
    printf("%d\n", soma);
    return 0;
}
