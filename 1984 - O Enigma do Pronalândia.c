#include <stdio.h>
 
int main() {
    
    int i;
    char a[11];
    scanf("%s", a);
    for(i = 0;a[i]!='\0'; i++);

    i--;
    for(;i>=0; i--){
        printf("%c", a[i]);
    }
    
    printf("\n");
    return 0;
}
