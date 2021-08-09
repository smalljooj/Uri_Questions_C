#include <stdio.h>
 
int main() {
 
    int a;
    
    scanf("%d", &a);
    printf("%d\n", a);
    if(a/100!=0){
        printf("%d nota(s) de R$ 100,00\n", a/100);
        a= a-(100 * (a/100));
    }
    else{
        printf("0 nota(s) de R$ 100,00\n");
    }
    if(a/50!=0){
        printf("%d nota(s) de R$ 50,00\n", a/50);
        a= a-(50 * (a/50));
    }
    
    else{
        printf("0 nota(s) de R$ 50,00\n");
    }
    if(a/20!=0){
        printf("%d nota(s) de R$ 20,00\n", a/20);
        a= a-(20 * (a/20));
    }
    
    else{
        printf("0 nota(s) de R$ 20,00\n");
    }
    if(a/10!=0){
        printf("%d nota(s) de R$ 10,00\n", a/10);
        a= a-(10 * (a/10));
    }
    
    else{
        printf("0 nota(s) de R$ 10,00\n");
    }
    if(a/5!=0){
        printf("%d nota(s) de R$ 5,00\n", a/5);
        a= a-(5 * (a/5));
    }
    
    else{
        printf("0 nota(s) de R$ 5,00\n");
    }
    if(a/2!=0){
        printf("%d nota(s) de R$ 2,00\n", a/2);
        a= a-(2 * (a/2));
    }
    
    else{
        printf("0 nota(s) de R$ 2,00\n");
    }
    if(a/1!=0){
        printf("%d nota(s) de R$ 1,00\n", a/1);
        a= a-(1 * (a/1));
    }
    
    else{
        printf("0 nota(s) de R$ 1,00\n");
    }
    return 0;
}