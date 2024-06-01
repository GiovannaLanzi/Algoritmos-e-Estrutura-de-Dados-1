#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int mat[2][2];
	int lin, col;
	

	
	for(lin=0; lin<2; lin++){
			   for(col=0; col<2; col++){
			   			  if ((lin + col)%2 == 0){
						  	 	  mat[lin][col]=1;
				          }
			   			  
			   			  else{
						  	   mat[lin][col]=0;
			   			  }
               }			  	  
	}
	for(lin = 0; lin < 2; lin++) {
		for(col = 0; col < 2; col++) {
			printf("%d ", mat[lin][col]);
		}
		printf("\n");
	}
	
	return 0;
}
