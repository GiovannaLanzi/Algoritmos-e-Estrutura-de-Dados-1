#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lin, col;
	
	lin = 1;
	while(lin<=10){
				   col = 1;
				   while(col<=lin){
				   				   printf("*");
				   				   col= col +1;
				   }
				   printf("\n");
				   lin = lin+1;
	}
	return 0;
}
