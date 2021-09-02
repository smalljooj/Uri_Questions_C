#include <stdio.h>
 
int main() {
 
    int i, x, id, idf;
    float nota, notaf;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d%f", &id, &nota);
        if(i==0){
            notaf = nota;
            idf = id;
        }
        else if(nota>notaf){
            notaf = nota;
            idf = id;
        }
    }
    if(notaf<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", idf);
 
    return 0;
}
