#include <stdio.h>

void limpabuf(){
    char a;
    while((a = getchar()!='\n'));
}

int main() {
 
    int l, j, i;
    char c;
    float a, soma = 0;
    scanf("%d", &l);
    limpabuf();
    scanf("%c", &c);

    for(i = 0; i<12; i++)
        for(j = 0; j<12; j++){
            scanf("%f", &a);
            if(i==l)
              soma+=a; 
        }
    if(c=='S')
        printf("%.1f\n", soma);
    else 
        printf("%.1f\n", soma/12);
    return 0;
}
