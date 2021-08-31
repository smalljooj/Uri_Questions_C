#include <stdio.h>
#include <string.h>

int main() {
 
    int i, n, p, x1, x2;
    char a[100];
    char b[100];
    char par[10];
    
    scanf("%d", &n);
    
    for(i = 0; i<n; i++){
        scanf("%s%s", a, par);
        scanf("%s%s", b, par);
        
        if(strcmp(par, "PAR")==0)
            p=0;
        else
            p=1;
        scanf("%d%d", &x1, &x2);
        if((x1+x2)%2==0) 
            if(p==0)
                printf("%s\n", b);
            else
                printf("%s\n", a);
        else
            if(p==0)
                printf("%s\n", a);
            else
                printf("%s\n", b);
    }
 
    return 0;
}
