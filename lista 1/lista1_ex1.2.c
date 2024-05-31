#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float num;
	printf("Digite um número real: ");
	scanf("%f", &num);
	printf("O número digitado foi: %.2f\n", num);
	return 0;
}
