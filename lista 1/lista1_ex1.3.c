#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int v1, v2, v3, soma;
printf("Digite tr�s valores inteiros separados por espa�o: ");
scanf("%d %d %d", &v1, &v2, &v3);
soma = v1 + v2 + v3;
printf("Soma dos tr�s valores = %d\n",soma);
return 0;
}
