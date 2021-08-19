#include <stdio.h>
 
int main() {
 
    int i, x, cont;
    long long int popa, popb;
    float taxaa, taxab;

    scanf("%d", &x);
    for(i = 0; i<x; i++){

       scanf("%lli%lli%f%f", &popa, &popb, &taxaa, &taxab); 
       cont = 0;
        while(popa<=popb){

            popa+=(popa*(taxaa/100));
            popb+=(popb*(taxab/100));
            cont++;
            if(cont>100)
                break;
        }
        if(cont<=100)
            printf("%d anos.\n", cont);
        else
            printf("Mais de 1 seculo.\n");
    }
 
    return 0;
}
