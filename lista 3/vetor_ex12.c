#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam=0;
	int i=0, soma=0;
	int maior=0, menor=0;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int vet[tam];
	
	printf("Digite os elementos do vetor.\n");
	for(i=0; i<tam; i++){
			 printf("\nDigite o elemento: ");
			 scanf("%d", &vet[i]);
    }
    
 	for(i=0; i<tam; i++){
			 if(vet[i] > maior){
   	         maior = vet[i];
            }
	}
	
	menor = maior;
	
	for(i=0; i<tam; i++){
		if(vet[i] < menor){
			menor = vet[i];
		}
	}
	
	printf("O maior número do vetor é: %d \n", maior);
	printf("O menor número do vetor é: %d \n", menor);
	
	return 0;
}
