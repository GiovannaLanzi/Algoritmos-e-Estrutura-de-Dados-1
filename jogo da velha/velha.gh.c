#include <stdio.h>  
#include <locale.h> 
 
int main(){ 
	setlocale(LC_ALL, "Portuguese"); 
	
	char mat[3][3];
	int jogador= 1;
	int L, C, linha, coluna, espacos, i;
	int ganhou = 0;
	char esp[1];
	
	
	
	for(L=0; L<3; L++){
			 for(C=0; C<3; C++){
			 		  mat[L][C]= ' '; 
			 }
	}
	
	
	printf("Bem-vindo (a) ao jogo da velha!");
	do{
		printf("\n\n\t 0   1   2\n\n"); 
		for(L=0; L<3; L++){
				 for(C=0; C<3; C++){
				 		  if(C==0)
				 		  		  printf("\t");
				 		  printf(" %c ", mat[L][C]);
				 		  if(C<2)
				 		  		 printf("|"); 
	 		 			  if(C==2)
	 		 			  		  
		  					 	  printf("  %d", L);
	            }
	            if(L<2)
	 		    	   printf("\n\t-----------");
	    	    printf("\n");	
		}
				
	
		do{
  		   printf("\nLinhas: horizontal; Colunas: vertical\n");
           printf("\nO Jogador 1 será o O e o jogador 2 será o X.\n\n");
		   printf("\nJogador %d, digite a linha e a coluna em que você deseja jogar (digite a linha, dê um espaço, e digite a coluna): " ,jogador);
		   scanf("%d %d", &linha, &coluna); 
	    }while(linha < 0 || linha >2 || coluna < 0 || coluna >2 || mat[linha][coluna] != ' '); 		
		
		
		if(jogador ==1){
				   mat[linha][coluna] = 'O';
				   jogador++;
		}
		else{
			 mat[linha][coluna] = 'X';
			 jogador = 1;
		}
				
		
		if(mat[0][0] == 'O' && mat[0][1] == 'O' && mat[0][2] == 'O' ||
		mat[1][0] == 'O' && mat[1][1] == 'O' && mat[1][2] == 'O' ||
		mat[2][0] == 'O' && mat[2][1] == 'O' && mat[2][2] == 'O' ){
				  printf("\nParabéns! Vitória do jogador 1!\n");
				  ganhou = 1;
		}   
		if(mat[0][0] == 'X' && mat[0][1] == 'X' && mat[0][2] == 'X' ||
		mat[1][0] == 'X' && mat[1][1] == 'X' && mat[1][2] == 'X' ||
		mat[2][0] == 'X' && mat[2][1] == 'x' && mat[2][2] == 'X' ){
				  printf("\nParabéns! Vitória do jogador 2!\n");
				  ganhou = 1;
		}   
		
		if(mat[0][0] == 'O' && mat[1][0]== 'O' && mat[2][0] == 'O' ||
		mat[0][1] == 'O' && mat[1][1] == 'O' && mat[2][1] == 'O' ||
		mat[0][2] == 'O' && mat[1][2] == 'O' && mat[2][2] == 'O' ){
				  printf("\nParabéns! Vitória do jogador 1!\n");
				  ganhou = 1;
		}  
		if(mat[0][0] == 'X'&& mat[1][0]== 'X'&& mat[2][0] == 'X'||
		mat[0][1] == 'X'&& mat[1][1] == 'X'&& mat[2][1] == 'X'||
		mat[0][2] == 'X'&& mat[1][2] == 'X'&& mat[2][2] == 'X'){
				  printf("\nParabéns! Vitória do jogador 1!\n");
				  ganhou = 1;
		}   
	
		if(mat[0][0] == 'O' && mat[1][1]=='O' && mat[2][2]== 'O'){
					 printf("\nParabéns! Vitória do jogador 1!\n");
					 ganhou = 1;
		}
		if(mat[0][0] == 'X'&& mat[1][1]=='X'&& mat[2][2]== 'X'){
					 printf("\nParabéns! Vitória do jogador 2!\n");
					 ganhou = 1;
		}
	
		if(mat[0][2]== 'O' && mat[1][1]=='O' && mat[2][0]== 'O'){
					 printf("\nParabéns! Vitória do jogador 1!\n");
					 ganhou = 1;
		}
		if(mat[0][2]== 'X'&& mat[1][1]=='X'&& mat[2][0]== 'X'){
					   printf("\nParabéns! Vitória do jogador 1!\n");
					   ganhou = 1;
		}
		else{
			 printf("Deu velha!! Ninguém ganhou... =( ");
		}
		
	}while(ganhou ==0);
	return 0;
}
