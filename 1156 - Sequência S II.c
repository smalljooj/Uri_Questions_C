#include <stdio.h>
 
int main() {
 
    int i, j=2; 
    double s = 1;
    
    for(i = 3; i<40; i+=2, j*=2)
        s+=(float) i/j;
    printf("%.2lf\n", s);
 
    return 0;
}
