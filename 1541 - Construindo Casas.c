#include <stdio.h>
#include <math.h>

int main() {
 
    int a, b, c, f;

    while(1){

        scanf("%d", &a);
        if(a==0)
            break;
        scanf("%d%d", &b, &c);

        f = sqrt(a*b*(100.0/c));

        printf("%d\n", f);

    }
 
    return 0;
}
