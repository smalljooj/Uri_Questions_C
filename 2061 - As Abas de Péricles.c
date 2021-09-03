#include <stdio.h>
#include <string.h>

int main() {
 
    int i, abas, x;
    char a[7];
    scanf("%d%d", &abas, &x);
    for(i=0; i<x; i++){
        scanf("%s", a);
        if(strcmp(a, "fechou")==0)
            abas++;
        else
            abas--;
    }
    printf("%d\n", abas);
    return 0;
}
