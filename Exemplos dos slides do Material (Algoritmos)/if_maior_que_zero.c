#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x = 0;
	if(x>0){
			printf("x � maior que zero");
	}
	else
		printf("\n x � igual ou menor que zero");
		
	return 0;
}
