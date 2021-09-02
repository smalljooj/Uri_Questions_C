#include <stdio.h>

char convert(int a){
    
    if(a >=0 && a<10)
        return a+'0';
    else if(a==10)
        return 'A';
    else if(a==11)
        return 'B';
    else if(a==12)
        return 'C';
    else if(a==13)
        return 'D';
    else if(a==14)
        return 'E';
    else if(a==15)
        return 'F';
}
int main() {
 
    char c[100];
    int i = 0, x, r, d;
    scanf("%d", &x);
    
    d = x/16;
    r = x%16;
    c[0] = convert(r);
    if(d==1){
        i++;
        c[i] = convert(d);
    }
    while(d>15){
        i++;
        r = d%16;
        d = d/16;
        c[i] = convert(r);
        if(d<16){
            i++;
            c[i] = convert(d);
            break;
        }
    }
   
    for(;i>=0; i--){
        printf("%c", c[i]);
    }
    printf("\n");
    return 0;
}
