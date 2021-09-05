#include <stdio.h>
 
int main() {
 
    int i, j, x, cont = 0, casos = 1, pos;
    char seq[12], tot[100]; 
    
    while((scanf("%s%s", seq, tot))!=EOF){
        
        pos = 0;
        cont = 0;
        for(i = 0; tot[i]!='\0'; i++)
            if(tot[i]==seq[0]){
                x=1;
                for(j = 0; seq[j]!='\0'; j++)
                    if(seq[j]!=tot[i+j])
                        x=0;
                if(x==1){
                    cont++;
                    pos = i+1;
                }
            }
        if(cont>0){
            printf("Caso #%d:\n", casos);
            printf("Qtd.Subsequencias: %d\n", cont);
            printf("Pos: %d\n", pos);
        }
        else{
            printf("Caso #%d:\n", casos);
            printf("Nao existe subsequencia\n");
        }
        printf("\n");
        casos++;
    }
 
    return 0;
}
