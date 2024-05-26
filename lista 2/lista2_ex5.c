#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &n1);
	
	printf("Digite o segundo valor: \n");
	scanf("%d", &n2);
	
	printf("Digite o terceiro valor: \n");
	scanf("%d", &n3);
	
	
	if((n1<n2) && (n1<n3))
			    printf("O menor número é: %d", n1);
	else if((n2<n1) && (n2<n3))
		 printf("O menor número é: %d", n2);
    else if((n3<n1) && (n3<n1))
    	 printf("O menor número é: %d", n3); 
    else
  	 printf("");
  	 
  	 return 0; 
	 }
    
  
