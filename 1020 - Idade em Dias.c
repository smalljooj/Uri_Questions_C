#include <stdio.h>
 
int main() {
 
    int x;
    
    scanf("%d", &x);
    if(x/365!=0){
        printf("%d ano(s)\n", x/365);
        x = x -(365 * (x/365));
    }
    else{
        printf("0 ano(s)\n");
    }
    if(x/30!=0){
        printf("%d mes(es)\n", x/30);
        x = x -(30 * (x/30));
    }
    else{
        printf("0 mes(es)\n");
    }
    printf("%d dia(s)\n", x);
 
    return 0;
}