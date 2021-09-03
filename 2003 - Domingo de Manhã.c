#include <stdio.h>
 
int main() {
 
    char s[5];
    int h, min, atraso;
    
    while((scanf("%s", s))!=EOF){
    h = s[0]-'0';
    min = (s[2] -'0') * 10 + (s[3] -'0');
    
    atraso = (h*60+min)-(7*60);
    if(atraso>0)
        printf("Atraso maximo: %d\n", atraso);
    else
        printf("Atraso maximo: 0\n");
    }
    return 0;
}
