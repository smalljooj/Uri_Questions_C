#include <stdio.h>
#include <string.h>

 /*
No C é necessario usar uma biblioteca chamada string.h para facilitar o tabalho com strings
ela fornece diversas funcoes para tratamento com strings, assim economiza tempo para nós... rsrs
 */
int main() {
    
    char a[20];                                       /*criar vetor de caracteres*/
    scanf("%s", a);                                   /*armazenei a string com %s*/
    if(strcmp(a, "vertebrado")==0){                   /*e usei a funcao strcmp em todos os ifs para saber se a string era igual*/
        scanf("%s", a);                                                           /*igual-> strcmp == 0*/ 
        if(strcmp(a, "ave")==0){                                                  /*menor-> strcmp < 0*/
            scanf("%s", a);                                                       /*maior-> strcmp > 0*/
            if(strcmp(a, "carnivoro")==0)
                printf("aguia\n");
            else
                printf("pomba\n");
        }else{
            scanf("%s", a);
            if(strcmp(a, "herbivoro")==0)
                printf("vaca\n");
            else
                printf("homem\n");
        }
    }else{
        scanf("%s", a);
        if(strcmp(a, "inseto")==0){
            scanf("%s", a);
            if(strcmp(a, "hematofago")==0)
                printf("pulga\n");
            else
                printf("lagarta\n");
        }else{
            scanf("%s", a);
            if(strcmp(a, "hematofago")==0)
                printf("sanguessuga\n");
            else
                printf("minhoca\n");
        }
    }
    return 0;
}
