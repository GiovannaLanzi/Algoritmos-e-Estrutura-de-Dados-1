#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "Portuguese");
int num;
printf("Digite um número inteiro: ");
scanf("%d", &num);
printf("O número digitado foi: %d\n", num);
return 0;
}
