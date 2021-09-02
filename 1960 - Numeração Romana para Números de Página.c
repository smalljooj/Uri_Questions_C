#include <stdio.h>

int main() {
 
    int p;
    scanf("%d", &p);

    while(p>0){
        if(p>=900){
            p-=900;
            printf("CM");
        }else if(p>=800){
            p-=800;
            printf("DCCC");
        }
        else if(p>=700){
            p-=700;
            printf("DCC");
        }
        else if(p>=600){
            p-=600;
            printf("DC");
        }
        else if(p>=500){
            p-=500;
            printf("D");
        }
        else if(p>=400){
            p-=400;
            printf("CD");
        }
        else if(p>=300){
            p-=300;
            printf("CCC");
        }
        else if(p>=200){
            p-=200;
            printf("CC");
        }
        else if(p>=100){
            p-=100;
            printf("C");
        }
        else if(p>=90){
            p-=90;
            printf("XC");
        }else if(p>=80){
            p-=80;
            printf("LXXX");
        }
        else if(p>=70){
            p-=70;
            printf("LXX");
        }
        else if(p>=60){
            p-=60;
            printf("LX");
        }
        else if(p>=50){
            p-=50;
            printf("L");
        }
        else if(p>=40){
            p-=40;
            printf("XL");
        }
        else if(p>=30){
            p-=30;
            printf("XXX");
        }
        else if(p>=20){
            p-=20;
            printf("XX");
        }else if(p>=10){
            p-=10;
            printf("X");
        }
        else if(p==9){
            p-=9;
            printf("IX");
        }
        else if(p==8){
            p-=8;
            printf("VIII");
        }
        else if(p==7){
            p-=7;
            printf("VII");
        }
        else if(p==6){
            p-=6;
            printf("VI");
        }
        else if(p==5){
            p-=5;
            printf("V");
        }else if(p==4){
            p-=4;
            printf("IV");
        }
        else if(p==3){
            p-=3;
            printf("III");
        }
        else if(p==2){
            p-=2;
            printf("II");
        }
        else if(p==1){
            p-=1;
            printf("I");
        }
    }
    printf("\n");
 
    return 0;
}
