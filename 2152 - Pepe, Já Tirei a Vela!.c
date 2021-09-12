#include <stdio.h>
 
int main() {
 
    int i, x, h, m, t;
    scanf("%d", &x);
    for(i=0; i<x;i++){
        scanf("%d%d%d", &h, &m, &t);
        printf("%02d:%02d - A porta ", h, m);
        if(t)
            printf("abriu!\n");
        else
            printf("fechou!\n");
    }
 
    return 0;
}
