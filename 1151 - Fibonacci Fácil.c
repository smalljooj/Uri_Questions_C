#include <stdio.h>

int fibonacci(int n){

    if(n==0)
        return 0;
    else if(n==1 || n==2)
        return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int x, i;
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        printf("%d", fibonacci(i));
        if(i!=x-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
