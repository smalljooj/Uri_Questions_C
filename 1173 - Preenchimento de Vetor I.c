#include <stdio.h>
 
int main() {
 
    int i, x;
    
    scanf("%d", &x);
    for(i = 0; i<10; i++){
        if(i==0)
            printf("N[0] = %d\n", x);
        else{
            x+=x;
            printf("N[%d] = %d\n", i, x);
        }
    }
 
    return 0;
}
