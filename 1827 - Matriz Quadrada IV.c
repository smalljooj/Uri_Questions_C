#include <stdio.h>
 
int main() {
 
    int i, j, x;
    
    while((scanf("%d", &x))!=EOF){
        
        for(i = 0; i<x; i++){
            for(j = 0; j<x; j++){
                if(x/2==i && x/2==j)
                    printf("4");
                else if(j>=(x/3) && j<=(x-1-(x/3)) && i>=(x/3) && i<=(x-1-(x/3)))
                    printf("1");
                else if(i==j)
                    printf("2");
                else if(j==(x-1)-i)
                    printf("3");
                else
                    printf("0");
            }
            printf("\n");
        }
        printf("\n");
    }
 
    return 0;
}
