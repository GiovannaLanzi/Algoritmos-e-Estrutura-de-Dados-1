#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i=26, n=0;
	
	printf("Tente advinhar o n�mero (de 1 a 30): ");
	scanf("%d", &n);
	
	while (n!=i)
	{
	 	  printf("N�mero incorreto!\n");
	 	  printf("Tente novamente: \n");
	 	  scanf("%d", &n);
    }
	printf("Parab�ns, voc� acertou! O n�mero a ser advinhado era: %d", i);
	
	return 0;
}
 		   
