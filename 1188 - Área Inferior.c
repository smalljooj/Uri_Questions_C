#include <stdio.h>

void limpabuf(){
    char a;
    while((a = getchar()!='\n'));
}

int main() {
 
    int j, i, cont = 0;
    char c;
    double a[12][12], soma = 0;

    scanf("%c", &c);

    for(i = 0; i<12; i++)
        for(j = 0; j<12; j++)
            scanf("%lf", &a[i][j]);
            
    for(i = 7; i<12; i++)
        for(j = 12-i; j<i; j++){
              soma+=a[i][j]; 
              cont++;
        }
        
    if(c=='S')
        printf("%.1lf\n", soma);
    else 
        printf("%.1lf\n", soma/cont);
    return 0;
}
