#include <stdio.h>
#include <math.h>

int main() {
 
    double r, v;
    const double pi = 3.14159;
    
    scanf("%lf", &r);
    
    v = (4 * pi * pow(r, 3))/3;
    printf("VOLUME = %.3lf\n", v);
    
 
    return 0;
}