#include <stdio.h>
 
int main() {
 
    int i, j, n, ini, fin, tashizan = 0;
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d%d", &ini, &fin);
        if(ini<=fin)
            for(j=ini+1; j<fin; j++){
                if(j%2!=0)
                    tashizan+=j;
            }
        else
            for(j=ini-1; j>fin; j--)
                if(j%2!=0)
                    tashizan+=j;
        printf("%d\n", tashizan);
        tashizan=0;
    }
    return 0;
}
