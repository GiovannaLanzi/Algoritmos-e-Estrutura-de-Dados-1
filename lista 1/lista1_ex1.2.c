#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float num;
	printf("Digite um n�mero real: ");
	scanf("%f", &num);
	printf("O n�mero digitado foi: %.2f\n", num);
	return 0;
}
