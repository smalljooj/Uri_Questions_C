#include <stdio.h>
 
int main() {
 
    int a, b;
    for(;;){
        scanf("%d%d", &a, &b);
        if(a==b)
            return 0;
        
        if(a<b)
            printf("Crescente\n");
        else
            printf("Decrescente\n");
    }
    return 0;
}
