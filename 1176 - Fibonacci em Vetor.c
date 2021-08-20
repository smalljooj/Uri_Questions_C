#include <stdio.h>

int main() {
    
    int i, j, n, x;
    long long int fibo1, fibo2, fibo;
    
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        scanf("%d", &x);
        fibo=0;
        for(j = 0; j<=x; j++){
            if(j==0){
                fibo1=0;
                fibo2=0;
            }
            else if(j==1){
                fibo1 = 1;
                fibo2 = 0;
            }
            else{
                fibo = fibo1+fibo2;
                fibo2 = fibo1;
                fibo1 = fibo;
            }
        }
        printf("Fib(%d) = %lli\n", x, fibo1);
    }
    return 0;
}
