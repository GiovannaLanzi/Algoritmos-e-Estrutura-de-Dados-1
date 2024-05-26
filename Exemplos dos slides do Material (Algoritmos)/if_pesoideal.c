#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float alt, peso;
	char sexo;
	
	printf("Digite o sexo (M ou F): ");
	scanf("%c", &sexo);
	
	printf("\nDigite a altura: ");
	scanf("%f", &alt);
	
	if(sexo == "M"){
			peso=(72.7*alt)-58;
	}
	else{
		 peso=(62.1*alt)-44.7;
	}
	
	printf("Seu peso ideal é: %.2f", peso);
	
	return 0;
}
