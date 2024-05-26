#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale (LC_ALL, "Portuguese");
	int i=0, n=0;
	
	printf("Digite um número: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
			if(i%2==0)
			 printf("%d\n", i);
			else
			printf("") ;
	}
	return 0;
}
