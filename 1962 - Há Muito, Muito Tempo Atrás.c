#include <stdio.h>
 
int main() {
 
    int i, x, ano;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d", &ano);
        if(ano-2014>0)
            printf("%d A.C.\n", ano-2014);
        else
            printf("%d D.C.\n", (ano-2015)*-1);
    }
 
    return 0;
}
