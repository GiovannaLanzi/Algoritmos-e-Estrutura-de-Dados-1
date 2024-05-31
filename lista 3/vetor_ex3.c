#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int tam = 20;
	float vet[tam];
	int i;
	float media, soma=0;
	
	for(i=0; i<20; i++){ 
			 printf("Digite um número: \n");
			 scanf("%f", &vet[tam]);
			 soma = soma + vet[tam];
	}
	
 	printf("%.2f", soma);
  
    media = soma/20;
    printf("\nA média dos valores digitados é: %.2f", media);
    
    return 0;
}
 
			 
