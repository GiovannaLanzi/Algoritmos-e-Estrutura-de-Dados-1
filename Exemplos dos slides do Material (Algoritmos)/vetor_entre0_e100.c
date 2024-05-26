#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam = 5;
	int numeros[tam];
	int i, maior = 0;
	
	for(i=0; i<tam; i++){
			 printf("Digite o número %d\n", i+1);
			 scanf("%d", &numeros[i]);
			 
			 if(numeros[i]>maior)
			 					 maior = numeros[i];
			 
	}
	printf("O maior é: %d", maior);
	return 0;
}
