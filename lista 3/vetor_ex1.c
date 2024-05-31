#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
    int vet[10], i;
	
	for(i=0; i<=9; i++){
		printf("Digite um número: \n");
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<=9; i++){
		printf("Os números digitados foram: %d\n", vet[i]);
	}

	return 0;
}
