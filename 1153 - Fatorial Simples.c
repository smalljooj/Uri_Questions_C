#include <stdio.h>

int fat(int n){
    if(n==0)
        return 1;
    return n*fat(n-1);
}

int main() {
    
    int x;
    scanf("%d", &x);
    printf("%d\n", fat(x));
    return 0;
}
