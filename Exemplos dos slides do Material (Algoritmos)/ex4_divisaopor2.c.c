/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale (LC_ALL, "Portuguese");
    int numero, resto;
    
    printf("Digite o número a ser dividido: ");
    scanf("%d", &numero);
    
    resto = numero % 2;
    
    printf("O resto da divisão de %d por 2 é: %d ", numero, resto);
    

    return 0;
}
