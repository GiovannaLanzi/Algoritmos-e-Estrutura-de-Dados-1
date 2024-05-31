#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam=0;
	int i=0, soma=0;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int vet[tam];
	
	printf("Digite os elementos do vetor.\n");
	for(i=0; i<tam; i++){
			 printf("\nDigite o elemento: ");
			 scanf("%d", &vet[i]);
    }
    
	for(i=0; i<tam; i++){
		soma = soma + vet[i];
	}
	
	printf("Soma dos valores = %d", soma);
		
	return 0;
}


