#include <stdio.h>
#include <string.h>
int main() {
 
    int c, i, x;
    char a[10];
    
    scanf("%d", &x);
    for(i = 0; i<x; i++){
        scanf("%s", a);
        scanf("%d", &c);
        if(strcmp(a, "Thor")==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
