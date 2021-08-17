#include <stdio.h>
 
int main() {
 
    int i, x, n1 = 1, n2 = 2, n3 =3;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        printf("%d %d %d PUM\n", n1, n2, n3);
        n1+=4;
        n2+=4;
        n3+=4;
    }
    return 0;
}
