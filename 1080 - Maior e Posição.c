#include <stdio.h>
 
int main() {
 
    int a, m;
    int i, x;
   
    for(i = 0; i<100; i++){
        scanf("%d", &x);
        if(i==0)
            m=x;
        if(m<x){
            m=x;
            a=i+1;
        }
    }
    printf("%d\n", m);
    printf("%d\n", a);
    
    return 0;
}
