#include <stdio.h>
#include <locale.h>
int main (void){
	setlocale (LC_ALL, "Portuguese");
	int L1, L2, L3;
	printf("Digite o valor do lado 1: ");
	scanf("%d", &L1);
	
	printf("Digite o valor do lado 2: ");
	scanf("%d", &L2);
	
	printf("Digite o valor do lado 3: ");
	scanf("%d", &L3);
	
	if(L1<(L2+L3) && L2<(L1+L3) && L3<(L1+L2))
		printf("Triângulo existente!\n");
	else
		printf("Triângulo não existe!\n");
		
		
	printf("Classificação: \n");
		
	
	if((L1==L2) && (L2==L3))
	     printf("Triângulo Equilátero");
	else if((L1==L2) && (L2!=L3) || (L1==L3) && (L1!=L2) || (L2==L3)&& (L2!=L1))
		 printf("Triângulo Isósceles");
    else if((L1!=L2) && (L1!=L3))
		 printf("Triângulo Escaleno");
    else
    	printf("");
    		  
			
	return 0;
}
