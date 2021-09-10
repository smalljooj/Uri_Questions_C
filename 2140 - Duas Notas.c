#include <stdio.h>
 
int main() {
 
    int i, j, v1, v2, troco, x, notas[6] = {2, 5,10,20,50,100};
    
    while(1){
        x=1;
        scanf("%d%d", &v1, &v2);
        if((v1==v2) && v1==0)
            break;
        troco = v2-v1;
        if(troco>200)
            printf("impossible\n");
        else{
            for(i = 0; i<6; i++)
                for(j=i; j<6; j++)
                    if((troco-notas[i]-notas[j])==0)
                        x=0;
            if(x==0)
                printf("possible\n");
            else
                printf("impossible\n");
        }
    }
 
    return 0;
}
