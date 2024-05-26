#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int n=0, s=147;
	
	printf("Digite a senha: ");
	scanf("%d", &n);
	
	if(n==s){
			 printf("Senha correta!");
	}
	else{
		 printf("Senha incorreta!");
		 printf("Tente novamente: ");
		 scanf("%d", &n);
	}
	return 0;
}
