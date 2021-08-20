#include <stdio.h>

void limpabuf(){
    char a;
    while((a = getchar()!='\n'));
}

int main() {
 
    int j, i, cont = 0;
    char c;
    float a[12][12], soma = 0;

    scanf("%c", &c);

    for(i = 0; i<12; i++)
        for(j = 0; j<12; j++)
            scanf("%f", &a[i][j]);
            
    for(i = 0; i<12; i++)
        for(j = i+1; j<12; j++){
              soma+=a[i][j]; 
              cont++;
        }
        
    if(c=='S')
        printf("%.1f\n", soma);
    else 
        printf("%.1f\n", soma/cont);
    return 0;
}
