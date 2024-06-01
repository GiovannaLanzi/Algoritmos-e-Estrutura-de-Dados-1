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
               }
    }
    
     printf("O valor da linha 0 e coluna 0 é: %d\n", mat[0][0]);
 	 printf("O valor da linha 0 e coluna 1 é: %d\n", mat[0][1]);
 	 printf("O valor da linha 0 e coluna 2 é: %d\n", mat[0][2]);
 	 printf("O valor da linha 1 e coluna 0 é: %d\n", mat[1][0]);
 	 printf("O valor da linha 1 e coluna 1 é: %d\n", mat[1][1]);
	 printf("O valor da linha 1 e coluna 2 é: %d\n", mat[1][2]);
 	 printf("O valor da linha 2 e coluna 0 é: %d\n", mat[2][0]);
  	 printf("O valor da linha 2 e coluna 1 é: %d\n", mat[2][1]);
	 printf("O valor da linha 2 e coluna 2 é: %d\n", mat[2][2]);
 
    
    return 0;
}
	
