#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale (LC_ALL, "Portuguese");
	
	int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0, soma=0;
	
	printf("Digite 6 números: \n");
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	
	soma = n1+n2+n3+n4+n5+n6;
	
	printf("A soma dos números digitados é: %d", soma);
	
	return 0;
}
