#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[3][3];
	int lin, col;
	
	printf("Digite os valores da matriz\n");
	for(lin=0; lin<3; lin++){
			   for(col=0; col<3; col++){
			   			  printf("\nDigite o valor: ");
			   			  scanf("%d", &mat[lin][col]);
			   }
	}
	for(lin=0; lin<3; lin++){
			   for(col=0; col<3; col++){
			   			  printf("%d", mat[lin][col]);	
               }
			   printf("\n");	  
	}
    
    return 0;
}
	
