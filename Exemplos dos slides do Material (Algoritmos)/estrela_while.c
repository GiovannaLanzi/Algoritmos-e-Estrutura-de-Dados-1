#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int e=1;
	
	while(e<=3){
				printf("*");
				e = e+1;
	}
	return 0;
}
