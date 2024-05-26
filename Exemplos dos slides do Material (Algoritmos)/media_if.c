#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1=0, nota2=0, media;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	media= (nota1+nota2)/2;
	printf("A média do aluno é: %.2f\n", media);
	
	if(media>=6){
				 printf("Aprovado!");
	}
	else
		printf("Reprovado!");
		
	return 0;
		
}
