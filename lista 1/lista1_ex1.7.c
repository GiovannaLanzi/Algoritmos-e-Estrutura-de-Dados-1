#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL, "Portuguese");
int n=0, antecessor=0, sucessor=0;
printf("Digite um número inteiro: ");
scanf("%d", &n);
antecessor = n-1;
sucessor = n+1;
printf("Antecessor: %d ---- Sucessor: %d\n", antecessor, sucessor);
return 0;
}
