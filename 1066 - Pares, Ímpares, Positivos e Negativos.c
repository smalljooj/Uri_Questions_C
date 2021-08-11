#include <stdio.h>
 
int main() {
 
    int i, nun, contp = 0, conti = 0, contpos = 0, contneg = 0;              
    
    for(i = 0; i<5; i++){
        scanf("%d", &nun);             
        if(nun%2==0)                    
            contp++;                     
        else
            conti++;
        if(nun>0)
            contpos++;
        else if(nun<0)
            contneg++;
    }
    printf("%d valor(es) par(es)\n", contp); 
    printf("%d valor(es) impar(es)\n", conti);
    printf("%d valor(es) positivo(s)\n", contpos);
    printf("%d valor(es) negativo(s)\n", contneg);
    return 0;
}
