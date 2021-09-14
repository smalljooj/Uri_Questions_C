#include <stdio.h>
#include <math.h>

int main() {
    
    int x;
    scanf("%d", &x);
    
    printf("%.1f %.1f\n", (x/log(x)), 1.25506*(x/log(x)));
 
    return 0;
}
