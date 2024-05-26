#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	for(i=0; i<=10; i++){
			 printf("O valor de i é: %d\n", i);
	}
	return 0;
}
