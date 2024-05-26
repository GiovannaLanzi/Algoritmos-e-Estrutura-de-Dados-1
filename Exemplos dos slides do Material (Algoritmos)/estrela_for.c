#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i=0;
	for(i=0; i<3; i++){
			 printf("*");
	}
	return 0;
}
