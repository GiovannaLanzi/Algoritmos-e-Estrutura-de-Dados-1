#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
float salbase, sal;
printf("Digite o salário base do funcionário: ");
scanf("%f", &salbase);
sal = salbase * 1.05; // mais 5%
printf("O salário a receber é: %.2f\n", sal);
return 0;
}
