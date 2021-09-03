#include <stdio.h>
 
int main() {
 
    int a, b, c, f;
    scanf("%d%d%d", &a, &b, &c);
    
    f = a+b+c;
    if(f>24)
        printf("%d\n", f-24);
    else if(f<0)
        printf("%d\n", 24+f);
    else
        printf("%d\n", f);
    return 0;
}
