#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;

    scanf("%i%i%i%i", &a, &b, &c, &d);

    if((b>c) && (d>a)){
        if(c+d > a+b){
            if(c>0 &&d>0){
                if(a%2==0){
                    printf("Valores aceitos\n");
                    return 0;
    }}}}
    printf("Valores nao aceitos\n");
    return 0;
}
