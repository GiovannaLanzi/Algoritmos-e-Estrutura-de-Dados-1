#include <stdio.h>
int main(){
	int tamanho = 10;
	int i=0, aux=9, vet[tamanho];
	
	for(i=0; i<tamanho; i++){
		vet[i]=aux*aux;
		aux--;
	}

	for(i=0; i<tamanho; i++)
		printf("%2d ", vet[i]);
	
	return 0;
}

