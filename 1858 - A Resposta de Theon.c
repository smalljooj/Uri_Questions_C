#include <stdio.h>
 
int main() {
 
    int i, x, n, menor, pos;
    
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d", &n);
        if(i == 0){
            menor = n;
            pos = i;
        }
        else if(n<menor){
            menor = n;
            pos = i;
        }
    }
    printf("%d\n", pos+1);
 
    return 0;
}
