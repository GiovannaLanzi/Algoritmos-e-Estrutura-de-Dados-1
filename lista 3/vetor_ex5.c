#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int tam = 10;
    int vet[tam], i;
	
	for(i=0; i<10; i++){ 
			 printf("Digite um n�mero: \n");
			 scanf("%d", &vet[i]);
   	}
 
 	for(i=0; i<10; i++){
			 if(vet[i]%2==0){
			 			printf("\nDos n�meros digitados, os que s�o pares s�o: %d", vet[i]);
			 }
			 else{
			 	  printf(" ");
			 }
	}
    
    return 0;
}
 
		
