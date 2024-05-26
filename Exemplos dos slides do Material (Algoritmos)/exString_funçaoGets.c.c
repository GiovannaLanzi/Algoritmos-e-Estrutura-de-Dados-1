#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Potuguese");
	
	char nome[80];
	
	printf("Digite seu nome: ");
	gets(nome);
	
	printf("O nome armazenado foi: %s", nome);
	
	return 0;
}
