#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int numero;
printf("Digite um n�mero inteiro: ");
scanf("%d", &numero);
if (numero % 2 == 0)
printf("%d � um n�mero par.\n", numero);
else
printf("%d � um n�mero �mpar.\n", numero);
return 0;
}
