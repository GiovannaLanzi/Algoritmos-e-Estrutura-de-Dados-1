#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	int a, b, soma;
	
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	
	soma = a + b;
	
	printf("A soma dos n�meros � igual a: %d", soma);
	
	return 0;
	
}
