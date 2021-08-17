#include <stdio.h>
 
int main() {
 
    int a, n, i, soma = 0, cont =0;
    scanf("%d%d", &a,&n);
    while(n<=a)
        scanf("%d", &n);
    for(i=a; soma<n; i++){
        soma+=i;
        cont++;
    }
    printf("%d\n", cont);
    return 0;
}
