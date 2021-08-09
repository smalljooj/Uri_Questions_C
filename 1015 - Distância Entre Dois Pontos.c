#include <stdio.h>
#include <math.h>

int main() {
 
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    printf("%.4f\n", sqrt(pow(a-c, 2)+pow(b-d, 2)));
 
    return 0;
}