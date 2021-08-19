#include <stdio.h>
 
int main() {
 
    int x, soma = 0, cont = 1;
    
    while(1){
    	scanf("%d", &x);
    	if(x<0)
    		break;
    	
    	soma+=x;
    	cont++;
	}
	if(cont>1)
		cont--;
	printf("%.2f\n", (float)soma / cont);
    return 0;
}
