#include <stdio.h>
#include <string.h>

void limpabuf(){                                    /*funcao para limpar buffer*/
    char c;
    while((c = getchar())!='\n');
}

int main() {
  
    char carac[10];                                 /*vetor para os caracteres*/
    int d1, d2, h1, h2, m1, m2, s1, s2;             /*variaveis para contagens*/
    scanf("%s%d", carac, &d1);                      /*a partir daqui e so leitura...*/ 
    limpabuf();
    scanf("%d%s", &h1, &carac[0]);
    scanf("%d%s", &m1, &carac[0]);
    scanf("%d", &s1);
    limpabuf();
    scanf("%s%d", carac, &d2);
    limpabuf();
    scanf("%d%s", &h2, &carac[0]);
    scanf("%d%s", &m2, &carac[0]);
    scanf("%d", &s2);

    d2= d2-d1;                      /*aqui e o calculo, que e basicamente subtrair os valores( o final pelo inicial)*/
    h2-=h1;
    m2-=m1;
    s2-=s1;
    
    if(s2<0){                       /*aqui e o tratamento caso tenha ficado numeros negativos...*/
        s2+=60;
        m2--;
    }
    if(m2<0){
        m2+=60;
        h2--;
    }
    if(h2<0){
        h2+=24;
        d2--;
    }

    printf("%d dia(s)\n", d2);        /*imprime*/
    printf("%d hora(s)\n", h2);
    printf("%d minuto(s)\n", m2);
    printf("%d segundo(s)\n", s2);
    

 
    return 0;
}
