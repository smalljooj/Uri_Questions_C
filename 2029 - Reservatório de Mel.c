#include <stdio.h>
 
int main() {
 
    float d, v, r;
    while(( scanf("%f%f", &v, &d))!=EOF){
        r = d/2;
        printf("ALTURA = %.2f\n", v/(3.14*(r*r)));
        printf("AREA = %.2f\n", (3.14*(r*r)));
    }
    return 0;
}
