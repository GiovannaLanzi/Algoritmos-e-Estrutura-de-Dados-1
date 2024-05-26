#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i=0, n=0;
	float soma= 0.00, media=0.00;
	
	printf("Digite uma lista de números: ");
	
	for(i=1; i<=10; i++){
			 scanf("%d", &n);
			 soma = soma + n;
	}
	media = soma/10;
	printf("A média dos valores digitados é: %.2f", media);
	return 0;
}
