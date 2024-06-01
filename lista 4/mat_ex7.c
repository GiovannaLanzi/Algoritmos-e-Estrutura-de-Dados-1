#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[3][3];
	int lin, col, aux;
	
	printf("Digite os valores da matriz\n");
	for(lin=0; lin<3; lin++){
			   for(col=0; col<3; col++){
			   			  printf("\nDigite o valor: ");
			   			  scanf("%d", &mat[lin][col]);
			   }
	}
 	for (col=0; col< 3; col++) {
		   aux = mat[0][col];
           mat[0][col] = mat[1][col];
           mat[1][col] = aux;
    }

   
    printf("\nTrocando as linhas 1 e 2:\n");
    for (lin = 0; lin < 3; lin++) {
        for (col=0; col< 3; col++) {
            printf("%d ", mat[lin][col]);
        }
        printf("\n");
    }
    
    return 0;
}
