#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int num;
printf("Digite um n�mero inteiro: ");
scanf("%d", &num);
printf("O n�mero digitado foi: %d\n", num);
return 0;
}
