#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int mat1[][]={ {0, 1}, {1, 2} };
    int mat2[][]={ {2, 2}, {1, 1} };
    int lin, col, mult;
    
    for(lin=0;lin<2;lin++){
						   for(col=0;col<2;col++){
						   						  mult = mat1[lin][col] * mat2[lin][col];
		                   }
 						  printf("%d", mult);
    }
    return 0;
}
						   
    
