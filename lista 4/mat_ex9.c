#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int mat[3][3];
    int lin, col;

   
    for (lin = 0; lin < 3; lin++) {
        for (col = 0; col < 3; col++){
            printf("Digite os elementos da matriz: \n");
            scanf("%d", &mat[lin][col]);
        }
    }
    printf("%d", mat[0][0]);
    printf("%d", mat[1][1]);
    printf("%d", mat[2][2]);
    
    return 0;
}
   
