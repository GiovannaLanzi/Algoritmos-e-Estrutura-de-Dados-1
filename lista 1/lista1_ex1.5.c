#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
float n1, n2, n3, n4, media;
printf("Digite as quatro notas separadas por espa�o: ");
scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
media = (n1 + n2 + n3 + n4) / 4.0;
printf("M�dia das notas �: %.2f\n", media);
return 0;
}
