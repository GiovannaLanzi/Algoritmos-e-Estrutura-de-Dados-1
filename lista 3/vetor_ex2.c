#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int vet[]={0, 1, 3, 7, 5, 9, 6, 2, 12, 21, 13, 8, 10, 50, 11};
	int i=0, maior=0, menor=0;
	
	for(i=0; i<=15; i++){ 
		if(i==0){
				 	menor=maior=vet[i];
		}
		if(vet[i]>maior){
							 maior = vet[i];
		}
	    if(vet[i]<menor){
							 menor= vet[i];
							 
	    }
	    
	
		 
	}

	     
	printf("O maior número é: %d \nO menor número é: %d", maior, menor);

return 0;

}
