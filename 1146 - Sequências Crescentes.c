#include <stdio.h>
 
int main() {
 
    int x, i;
    scanf("%d", &x);
    while(x>0){
        for(i = 1; i<=x; i++){
            printf("%d", i);
            if(i!=x)
                printf(" ");
        }
        printf("\n");
        scanf("%d", &x);
    }
 
    return 0;
}
