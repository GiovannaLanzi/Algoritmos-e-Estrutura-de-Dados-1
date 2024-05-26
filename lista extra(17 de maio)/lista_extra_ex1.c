#include <stdio.h>
#include <locale.h>
int main(void){
	setlocale(LC_ALL, "POrtuguese");
	int vet[10], i;
	for(i=0; i<10; i++){
			 vet[i]=i*i;
    }
    for(i=0; i<10; i++){
			 printf("\t%d", vet[i]);
    
	}
	return 0;
}
