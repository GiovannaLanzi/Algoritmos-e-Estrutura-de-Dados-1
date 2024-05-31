#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int vetA[3];
	int vetB[3];
	int i;
	
	printf("Digite 3 valores do vetor A: \n");
	for(i=0; i<3; i++){
		printf("Digite um número: ");
		scanf("%d", &vetA[i]);
	}
	
	for(i=0; i<3; i++){
		vetB[i] = vetA[i];
	}
	
	for(i=0; i<3; i++){
		printf("Os valores do vetor B[%d] são: %d \n", i+1, vetB[i]);
	}
	
	return 0;
}
