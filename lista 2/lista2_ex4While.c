#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i=26, n=0;
	
	printf("Tente advinhar o número (de 1 a 30): ");
	scanf("%d", &n);
	
	while (n!=i)
	{
	 	  printf("Número incorreto!\n");
	 	  printf("Tente novamente: \n");
	 	  scanf("%d", &n);
    }
	printf("Parabéns, você acertou! O número a ser advinhado era: %d", i);
	
	return 0;
}
 		   
