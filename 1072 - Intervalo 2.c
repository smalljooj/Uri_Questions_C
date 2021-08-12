#include <stdio.h>
 
int main() {
 
    int x, i, j, cont = 0;
    scanf("%d", &j);
    
    for(i = 0;i<j; i++){
        scanf("%d", &x);
        if(x<=20 && x>=10)
            cont++;
    }
    printf("%d in\n", cont);
    printf("%d out\n", j-cont);
    return 0;
}
