#include <stdio.h>
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
    int mat[4][4];
    int lin, col, linha, soma = 0;

   
    for (lin = 0; lin < 4; lin++) {
        for (col = 0; col < 4; col++) {
            printf("Digite os elementos da matriz: \n");
            scanf("%d", &mat[lin][col]);
        }
    }

    printf("Escolha uma linha (0 a 3) para somar os elementos: ");
    scanf("%d", &linha);

    if (linha >= 0 && linha < 4) {
        
        for (col = 0; col < 4; col++) {
            soma += mat[linha][col];
        }
        
        printf("A soma dos elementos da linha %d é: %d\n", linha, soma);
    } 
    

    return 0;
}
