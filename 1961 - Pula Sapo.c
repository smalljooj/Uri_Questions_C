#include <stdio.h>

int main() {
 
    int i, a, x, v = 1, nc, c;
    scanf("%d%d", &a, &x);
    scanf("%d", &c);
    for(i = 0; i<x-1; i++){
        scanf("%d", &nc);
        if(c+a<nc || nc<c-a)
            v = 0;
        c = nc;
    }
    if(v)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
