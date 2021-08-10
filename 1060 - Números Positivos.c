#include <stdio.h>
 
int main() {
 
    float nun;
    int i, cont;
    
    for(i = 0; i<6; i++){
        scanf("%f", &nun);
        if(nun>0)
            cont++;
    }
    printf("%d valores positivos\n", cont);
 
    return 0;
}
