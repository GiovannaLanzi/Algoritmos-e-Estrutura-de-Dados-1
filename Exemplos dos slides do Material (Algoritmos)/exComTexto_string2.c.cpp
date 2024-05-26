#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	char nome [50];
	
	printf("Digite seu nome completo: ");
	scanf("%50[^\n]%*c", nome);
	
	printf("O nome armazenado foi: %s", nome);
	
	return 0;
	
}
