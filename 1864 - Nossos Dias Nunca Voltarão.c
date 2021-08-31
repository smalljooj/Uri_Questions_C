#include <stdio.h>
 
int main() {
 
    char a[] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    int i, x;
    
    scanf("%d", &x);
    
    for(i = 0; i<x; i++)
        printf("%c", a[i]);
    printf("\n");
    return 0;
}
