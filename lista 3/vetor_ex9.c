#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam = 12;
	int vet[tam];
	int i;
	
	printf("Digite 12 valores para o vetor, sendo pelo menos um deles negativo.\n");
	for(i=0; i<12; i++){
			 printf("\nDigite um número para o vetor: ");
			 scanf("%d", &vet[i]);
	}
	for(i=0; i<12; i++){
			 if(vet[i]<0){
			 	vet[i]=0;
				printf("%d", vet[i]);		  
	        }
	}
    return 0;
}
