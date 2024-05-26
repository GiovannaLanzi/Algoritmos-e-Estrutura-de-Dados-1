#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int tam=100;
	int i=0, impar=0;
	
	for(i=1; i<=tam; i++){
			 impar =i%2;
			 if(impar!=0)
			 			 printf("\t%d", i);
	}
	return 0;
}
