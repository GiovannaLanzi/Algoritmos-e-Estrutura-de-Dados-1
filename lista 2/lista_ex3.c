#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i=0, n=0;
	
	printf("Digite quantos termos voc� quer que a sequ�ncia de Fibonacci tenha: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
			 printf("O valor final da sequ�ncia de Fibonacci �: %d", i);
	}
	
	return 0;		 
			 
}
