#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "Portuguese");
	int i=0, n=0, eq=0, somat=0;
	
	printf("Digite o valor de n: \n");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
			 eq = (5*(i*i)+(2*i)+8);
			 somat = somat + eq;
			 
			 
	}
	printf("O somatório é igual a: %d", somat);
	
	return 0;
}

