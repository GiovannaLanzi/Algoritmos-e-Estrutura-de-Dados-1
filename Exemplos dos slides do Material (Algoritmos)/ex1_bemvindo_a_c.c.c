#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	printf("Bem-vindo � C!\n");
	
	return 0;
}
