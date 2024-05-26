#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
	float mediaP=0.0;
	
	printf("Digite seis números inteiros: \n");
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	
	mediaP = ((n1*5)+(n2*3)+(n3*2)+(n4*3)+(n5*2)+(n6*4))/19.0;
	printf("A média ponderada dos números digitados é: %.2f", mediaP);
	
	return 0;
}
