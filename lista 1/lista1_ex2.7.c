#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int num1, num2;
printf("Digite dois números: ");
scanf("%d %d", &num1, &num2);
if (num1 > num2)
printf("O maior número é: %d\n", num1);
else if (num2 > num1)
printf("O maior número é: %d\n", num2);
else
printf("Os números são iguais\n");
return 0;
}
