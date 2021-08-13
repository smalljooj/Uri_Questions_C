#include <stdio.h>
 
int main() {
    
    int k, i, j, pont = 0;

    for(i = 0, j=1;;){

        if(pont==0)
            for(k = 0; k<3; k++)
                printf("I=%d J=%d\n", i, j+k);
        else
            for(k = 0; k<3; k++)
                printf("I=%d.%d J=%d.%d\n", i, pont, j+k, pont);
        pont+=2;
        if(i==2)
            break;
        if(pont==10){
            i++;
            j++;
            pont=0;
        }
    }
    return 0;
}
