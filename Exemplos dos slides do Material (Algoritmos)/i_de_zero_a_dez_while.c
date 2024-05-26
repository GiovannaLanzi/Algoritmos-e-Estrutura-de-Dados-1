#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0;
	
	while(i<=10){
				 printf("O valor de i é: %d\n", i);
				 i++;
	}
	return 0;
}
