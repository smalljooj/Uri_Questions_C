#include <stdio.h>
 
int main() {
 
    int x, h, m, s;
    scanf("%d", &x);
    
    if(x/3600!=0){
        printf("%d:", x/3600);
        x = x -(3600 *(x/3600));
    }
    else{
        printf("0:");   
    }
    
    if(x/60!=0){
        printf("%d:", x/60);
        x = x -(60 *(x/60));
    }
    else{
        printf("0:");   
    }
    printf("%d\n", x);
 
    return 0;
}