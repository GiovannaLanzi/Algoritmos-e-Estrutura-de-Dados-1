#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x = 0;
	if(x>0){
			printf("x é maior que zero");
	}
	else
		printf("\n x é igual ou menor que zero");
		
	return 0;
}
