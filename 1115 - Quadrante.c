#include <stdio.h>
 
int main() {
 
    int x, y;
    for(;;){
        scanf("%d%d", &x, &y);
        if(x==0 || y==0)
            break;
        if(x>0){
            if(y>0)
                printf("primeiro\n");
            else
                printf("quarto\n");
        }else{
            if(y>0)
                printf("segundo\n");
            else
                printf("terceiro\n");
        }
    }
 
    return 0;
}
