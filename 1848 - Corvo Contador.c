#include <stdio.h>
#include <string.h>

int main(){
	char a[4];
	int i, cont = 0, soma = 0;

	while((scanf("%s", a))!=EOF){
		if(strcmp(a, "caw")==0){
			cont++;
			if(cont==2){
				cont=0;
				printf("%d\n", soma);
				soma=0;
			}
		}
		else{
			if(a[0]=='*')
				soma+=4;
			if(a[1]=='*')
				soma+=2;
			if(a[2]=='*')
				soma+=1;
		}
	}
	return 0;
}



