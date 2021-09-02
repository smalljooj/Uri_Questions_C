#include <stdio.h>
#include <stdlib.h>
int main() {
 
    long long int *v, soma= 0;
    int i, x, pos=0;
    scanf("%d", &x);
    v = malloc(x* sizeof(long long int));
    for(i = 0; i<x;i++){
        scanf("%lld", &v[i]);
        soma+=v[i];
    }
    for(i = 0; i<x && i>=0;){
        if(i>pos)
            pos=i;
        if(v[i]%2==1){
             if(v[i]>0){
                soma--;
                v[i]--;
            }
            i++;
        }
        else{
            if(v[i]>0){
                soma--;
                v[i]--;
            }
            i--;
        }
    }
    printf("%d %lld\n", pos+1, soma);
    free(v);
    return 0;
}
