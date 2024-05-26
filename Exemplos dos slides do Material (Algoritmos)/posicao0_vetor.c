#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numeros[]= {26, 31, 55};
	printf("%d", numeros[0]);
	return 0;
}
