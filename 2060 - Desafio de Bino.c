#include <stdio.h>
 
int main() {
 
    int i, n2 = 0, n3 = 0, n4 = 0, n5 = 0, x, y;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%d", &y);
        if(y%2==0)
            n2++;
        if(y%3==0)
            n3++;
        if(y%4==0)
            n4++;
        if(y%5==0)
            n5++;
    }
    printf("%d Multiplo(s) de 2\n", n2);
    printf("%d Multiplo(s) de 3\n", n3);
    printf("%d Multiplo(s) de 4\n", n4);
    printf("%d Multiplo(s) de 5\n", n5);

    return 0;
}
