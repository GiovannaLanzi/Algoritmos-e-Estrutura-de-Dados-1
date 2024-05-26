#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
int v1, v2, v3, soma;
printf("Digite três valores inteiros separados por espaço: ");
scanf("%d %d %d", &v1, &v2, &v3);
soma = v1 + v2 + v3;
printf("Soma dos três valores = %d\n",soma);
return 0;
}
