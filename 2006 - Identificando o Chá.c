#include <stdio.h>
 
int main() {
 
    int i, x, c, cont = 0;
    scanf("%d", &x);
    for(i = 0; i<5; i++){
        scanf("%d", &c);
        if(c==x)
            cont++;
    }
    printf("%d\n", cont);
    return 0;
}
