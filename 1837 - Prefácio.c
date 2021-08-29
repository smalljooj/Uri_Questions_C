#include <stdio.h>
 
int main() {
 
    int x, y, q, r;
    scanf("%d%d", &x,&y);
    
    if(x>0)
        printf("%d %d\n", x/y, x%y);
    else
        if(x%y==0)
            printf("%d %d\n", x/y, x%y);
        else{
            if(y>0){
                q = x/y-1;
                printf("%d %d\n", q, q*-1*y+x);
            }
            else{
                q = x/y+1;
                r=q*y;
                r-=x;
                printf("%d %d\n", q, r*-1);
            }
        }

 
    return 0;
}
