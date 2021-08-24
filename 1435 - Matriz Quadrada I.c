#include <stdio.h>

int main() {

    int i, j, h, o, o2, k, x=1;

    while(1){
        scanf("%d", &x);

        if(x<1)
            break;

        for(i = 1; i<(x+1); i++){
            o = i;
            o2 = (x+1)-i;
            for(j = 1; j<(x+1); j++){
                if(i<=(x+1)/2){
                    k = (x+1)-i;
                    if(j<=i)
                        printf("%3d", j);
                    else if(j<=k)
                        printf("%3d", i);
                    else{
                        if(o-1>0)
                            o--;
                        printf("%3d", o);
                        
                    }
                }
                else{
                    h = (x+1)-i;
                    k = (x+1)-h;
                    if(j<=h)
                        printf("%3d", j);
                    else if(j<=k)
                        printf("%3d", h);
                    else{
                        if(o2-1>0)
                            o2--;
                        printf("%3d", o2);
        
                    }
                }
                if(j<x)
                    printf(" ");
                
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
