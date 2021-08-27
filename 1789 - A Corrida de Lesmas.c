#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int n, *v, i, x, maior;
    
    while(scanf("%d", &n)!=EOF){

        v = malloc(n*sizeof(int));
        for(i = 0; i<n; i++){
            scanf("%d", &x);
            if(i==0)
                maior = x;
            else if(maior<x)
                maior = x;
            v[i] = x;
        }
        if(maior>=20)
            printf("3\n");
        else if(maior>=10)
            printf("2\n");
        else
            printf("1\n");
        free(v);
    }
    return 0;
}
