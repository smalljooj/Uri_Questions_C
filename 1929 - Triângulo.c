#include <stdio.h>
#include <string.h>

int verifica(int a, int b, int c){
    if((a+b>c)&&(b+c>a)&&(a+c>b))
        return 1;
    else
        return 0;
}

int main() {
 
    int a, b, c, d, l1, l2, l3, l4;
    
    scanf("%d%d%d%d", &a, &b, &c, &d);
    
    if(verifica(a, b, c))
        printf("S\n");
    else if(verifica(a, b, d))
        printf("S\n");
    else if(verifica(b, c, d))
        printf("S\n");
    else if(verifica(c,d,a))
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
