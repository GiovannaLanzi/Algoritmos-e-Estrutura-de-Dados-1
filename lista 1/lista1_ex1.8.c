#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
float salbase, sal;
printf("Digite o sal�rio base do funcion�rio: ");
scanf("%f", &salbase);
sal = salbase * 1.05; // mais 5%
printf("O sal�rio a receber �: %.2f\n", sal);
return 0;
}
