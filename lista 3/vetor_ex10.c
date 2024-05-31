#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam;
	int i;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	int vet[tam];
	
	for(i=0; i<tam; i++){
			 printf("Digite o valor para o vetor: ");
			 scanf("%d", &vet[i]);
    }
    
	for(i=0; i<tam; i++){
			 printf("%d", vet[i]);
	}
	return 0;
}
