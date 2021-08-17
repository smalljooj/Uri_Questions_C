#include <stdio.h>
 
int main() {
 
    int op = 0, gas = 0, alc = 0, die = 0;
    
    while(op!=4){
        scanf("%d", &op);
        while(op<1 || op>4)
            scanf("%d", &op);
        if(op==1)
            alc++;
        else if(op==2)
            gas++;
        else if(op==3)
            die++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
    return 0;
}
