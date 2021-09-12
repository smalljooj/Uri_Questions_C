#include <stdio.h>
 
int main() {
 
    char a[10000];
    int i, j, x, cont;
    
    scanf("%d", &x);
    for(i=0; i<x; i++){
        cont = 0;
        scanf("%s", a);
        for(j = 0; a[j]!='\0'; j++)
            cont++;
        printf("%.2f\n", cont*0.01);
    }
    
 
    return 0;
}
