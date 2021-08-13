#include <stdio.h>
 
int main() {
    
    int i, j=7, k;
    for(i = 1; i<=9; i+=2, j=7) 
        for(k = 0; k<3; k++, j--)
            printf("I=%d J=%d\n", i, j);
    return 0;
}
