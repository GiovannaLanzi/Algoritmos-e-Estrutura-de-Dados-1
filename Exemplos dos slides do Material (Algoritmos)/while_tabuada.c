#include <stdio.h>
#include <locale.h>

int main() {

setlocale(LC_ALL, "Portuguese");
int x=0, t=0, tabuada=0;

printf("Digite um número: ");
scanf("%d", &x);

while (t <= 10)
{

tabuada = x*t;
printf("\n %d x %d = %d", x, t, tabuada);
t ++;

}

return 0;

}
