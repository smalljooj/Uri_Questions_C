#include <stdio.h>
 
int main() {
 
    char a[500];
    int i, cont = 0;
    
    scanf("%[^\n]" , a);
    
    for(i = 0; a[i]!='\0'; i++){
        cont++;
    }
    if(cont<=80)
        printf("YES\n");
    else
        printf("NO\n");
        
    return 0;
}
