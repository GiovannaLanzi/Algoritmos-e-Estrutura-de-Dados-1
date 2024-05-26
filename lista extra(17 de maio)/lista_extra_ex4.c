#include <stdio.h>
int main(){
	int n=0, i=0, soma=0;
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];

	for(i=0; i<n; i++){
		vet[i]=i+1;
		soma = soma + vet[i];
	}
	
	printf("Soma dos valores = %d", soma);
		
	return 0;
}


