#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int numero;
printf("Digite um número inteiro: ");
scanf("%d", &numero);
if (numero % 2 == 0)
printf("%d é um número par.\n", numero);
else
printf("%d é um número ímpar.\n", numero);
return 0;
}
