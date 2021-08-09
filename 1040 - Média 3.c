#include <stdio.h>

void limpabuff(){                               /*funcao para limapar o buffer*/
    char c;
    while((c = getchar()) != '\n');             /*o get char vai pegando tudo do buffer ate ser igual a um enter(\n) e sai do while*/
}
void casaExtra(float* n){                       /*funcao para deixar o numero com apenas uma casa decimal*/
    *n = (*n) * 10;
    int i = *n;
    *n = i;
    *n = *n/10;
}

int main() {
 
    float n1, n2, n3, n4, media;                /*variaveis para as notas e media*/
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);      /*atribui as notas*/
    limpabuff();                                /*limpa o buffer*/
    casaExtra(&n1);                             /*retira as casas decimais indesejadas*/
    casaExtra(&n2);
    casaExtra(&n3);
    casaExtra(&n4);

    media = (2*n1+3*n2+4*n3+n4)/(10.0);         /*calcula a media*/
    printf("Media: %.1f\n", media);             /*imprime a media*/

    if(media>=7)                                /*verifica se o aluno foi ou nao aprovado*/
        printf("Aluno aprovado.\n");
    else if(media<5)
        printf("Aluno reprovado.\n");
    else{                                       /*caso esteja em exame calcula a media baseada no exame e verifica se foi ou nao aprovado*/
        printf("Aluno em exame.\n");
        scanf("%f", &n1);
        printf("Nota do exame: %.1f\n", n1);
        
        media = (media+n1)/2.0;
        if(media>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        
        printf("Media final: %.1f\n", media);
    }

    return 0;
}
